#ifndef RT_CONFIG_H__
#define RT_CONFIG_H__

/* Automatically generated file; DO NOT EDIT. */
/* RT-Thread Configuration */

/* RT-Thread Kernel */

#define RT_NAME_MAX 6
#define RT_ALIGN_SIZE 4
#define RT_THREAD_PRIORITY_32
#define RT_THREAD_PRIORITY_MAX 32
#define RT_TICK_PER_SECOND 1000
#define RT_USING_OVERFLOW_CHECK
#define RT_USING_HOOK
#define RT_USING_IDLE_HOOK
#define RT_IDLE_HOOK_LIST_SIZE 4
#define IDLE_THREAD_STACK_SIZE 128

/* Inter-Thread communication */

#define RT_USING_SEMAPHORE
#define RT_USING_MUTEX
#define RT_USING_EVENT

/* Memory Management */

#define RT_USING_MEMPOOL
#define RT_USING_SMALL_MEM
#define RT_USING_HEAP

/* Kernel Device Object */

#define RT_USING_DEVICE
#define RT_USING_CONSOLE
#define RT_CONSOLEBUF_SIZE 128
#define RT_CONSOLE_DEVICE_NAME "uart1"
#define RT_VER_NUM 0x40003
#define ARCH_ARM
#define RT_USING_CPU_FFS
#define ARCH_ARM_CORTEX_M
#define ARCH_ARM_CORTEX_M4

/* RT-Thread Components */

#define RT_USING_COMPONENTS_INIT
#define RT_USING_USER_MAIN
#define RT_MAIN_THREAD_STACK_SIZE 2048
#define RT_MAIN_THREAD_PRIORITY 10

/* C++ features */


/* Command shell */


/* Device virtual file system */

#define RT_USING_DFS
#define DFS_FILESYSTEMS_MAX 2
#define DFS_FILESYSTEM_TYPES_MAX 2
#define DFS_FD_MAX 8
#define RT_USING_DFS_DEVFS

/* Device Drivers */

#define RT_USING_DEVICE_IPC
#define RT_PIPE_BUFSZ 512
#define RT_USING_SYSTEM_WORKQUEUE
#define RT_SYSTEM_WORKQUEUE_STACKSIZE 2048
#define RT_SYSTEM_WORKQUEUE_PRIORITY 23
#define RT_USING_SERIAL
#define RT_SERIAL_USING_DMA
#define RT_SERIAL_RB_BUFSZ 64
#define RT_USING_I2C
#define RT_USING_I2C_BITOPS
#define RT_USING_PIN
#define RT_USING_SENSOR

/* Using USB */


/* POSIX layer and C standard library */

#define RT_USING_LIBC
#define RT_USING_POSIX

/* Network */

/* Socket abstraction layer */

#define RT_USING_SAL

/* protocol stack implement */

#define SAL_USING_AT
#define SAL_USING_POSIX

/* Network interface device */

#define RT_USING_NETDEV
#define NETDEV_IPV4 1
#define NETDEV_IPV6 0

/* light weight TCP/IP stack */


/* AT commands */

#define RT_USING_AT
#define AT_USING_CLIENT
#define AT_CLIENT_NUM_MAX 1
#define AT_USING_SOCKET
#define AT_CMD_MAX_LEN 128
#define AT_SW_VERSION_NUM 0x10300

/* VBUS(Virtual Software BUS) */


/* Utilities */


/* RT-Thread online packages */

/* IoT - internet of things */

#define PKG_USING_PAHOMQTT
#define PAHOMQTT_PIPE_MODE
#define RT_PKG_MQTT_THREAD_STACK_SIZE 2048
#define PKG_PAHOMQTT_SUBSCRIBE_HANDLERS 1
#define PKG_USING_PAHOMQTT_V110
#define PKG_USING_WEBCLIENT
#define WEBCLIENT_NOT_USE_TLS
#define PKG_USING_WEBCLIENT_V212
#define PKG_WEBCLIENT_VER_NUM 0x20102
#define PKG_USING_CJSON
#define PKG_USING_CJSON_V102

/* Wi-Fi */

/* Marvell WiFi */


/* Wiced WiFi */

#define PKG_USING_AT_DEVICE
#define AT_DEVICE_USING_ESP8266
#define AT_DEVICE_ESP8266_SAMPLE
#define ESP8266_SAMPLE_WIFI_SSID "realthread"
#define ESP8266_SAMPLE_WIFI_PASSWORD "02158995663"
#define ESP8266_SAMPLE_CLIENT_NAME "uart2"
#define ESP8266_SAMPLE_RECV_BUFF_LEN 256
#define PKG_USING_AT_DEVICE_V201
#define PKG_AT_DEVICE_VER_NUM 0x20001

/* IoT Cloud */

#define PKG_USING_ONENET
#define ONENET_USING_MQTT
#define ONENET_INFO_DEVID "588487268"
#define ONENET_INFO_AUTH "pan"
#define ONENET_INFO_APIKEY "Q2qHq0LRst3rVOU3QsfG9SaUEeVNVQ="
#define ONENET_INFO_PROID "327958"
#define ONENET_MASTER_APIKEY "6RX2T6yUzPQ551FqoJ+ZV9xRejo="
#define PKG_USING_ONENET_LATEST_VERSION

/* security packages */


/* language packages */


/* multimedia packages */


/* tools packages */


/* system packages */


/* peripheral libraries and drivers */

#define PKG_USING_SENSORS_DRIVERS
#define PKG_USING_AHT10
#define AHT10_USING_SOFT_FILTER
#define AHT10_AVERAGE_TIMES 1
#define AHT10_SAMPLE_PERIOD 1000
#define PKG_USING_AHT10_LATEST_VERSION

/* miscellaneous packages */


/* samples: kernel and components samples */

#define SOC_FAMILY_STM32
#define SOC_SERIES_STM32L4

/* Hardware Drivers Config */

#define SOC_STM32L475VE

/* Onboard Peripheral Drivers */

#define BSP_USING_STLINK_TO_USART
#define BSP_USING_AHT10

/* On-chip Peripheral Drivers */

#define BSP_USING_GPIO
#define BSP_USING_UART
#define BSP_USING_UART1
#define BSP_USING_UART2
#define BSP_USING_I2C
#define BSP_USING_I2C3

/* Notice: PC0 --> 32; PC1 --> 33 */

#define BSP_I2C3_SCL_PIN 32
#define BSP_I2C3_SDA_PIN 33
#define BSP_USING_I2C4

/* Notice: PC1 --> 33; PD6 --> 54 */

#define BSP_I2C4_SCL_PIN 54
#define BSP_I2C4_SDA_PIN 33

/* Board extended module Drivers */


#endif
