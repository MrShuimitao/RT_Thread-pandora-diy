/*
 * Copyright (c) 2006-2018, RT-Thread Development Team
 *
 * SPDX-License-Identifier: Apache-2.0
 *
 * Change Logs:
 * Date           Author       Notes
 * 2018-11-06     SummerGift   first version
 */

#include <rtthread.h>
#include <rtdevice.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <board.h>
#include <aht10.h>
#include <onenet.h>
#include <cJSON_util.h>
#include <paho_mqtt.h>


#define  ONENET_TOPIC_DP    "$dp"

static rt_bool_t init_ok = RT_FALSE;
static MQTTClient mq_client;
//#define AHT10_I2C_BUS  "i2c4"

int main(void)
{
    FILE *recvdata;
    float humidity, temperature;
    char s[32] = {0};
    aht10_device_t dev;                
    const char *i2c_bus_name = "i2c4"; 
        
    rt_thread_mdelay(2000);
	if (!onenet_mqtt_init())rt_kprintf("wait!!\n");
    

    dev = aht10_init(i2c_bus_name);
    if(dev == RT_NULL)
    {
        rt_kprintf(" The sensor initializes failure");
        return 0;
    }
    int len = sizeof(float);
    while(1)
    {
        temperature = aht10_read_temperature(dev);
        //rt_kprintf("temperature: %d.%d \n", (int)temperature, (int)(temperature * 10) % 10); 
//        recvdata = fopen("recvdata.txt", "wb+");
//        sprintf(s,"%.2f",temperature);
//        if (recvdata!= RT_NULL)
//        {
//            fputs(s, recvdata);
//            fputs("\n", recvdata);
//            fclose(recvdata);
//        }
       // rt_kprintf("%s\n",s);
        rt_kprintf("temperature: %d.%d \n", (int)temperature, (int)(temperature * 10) % 10); 
        onenet_mqtt_upload_digit("t",((float)(temperature*10)/10));
        rt_thread_mdelay(1000);
    }
    return RT_EOK;
}
