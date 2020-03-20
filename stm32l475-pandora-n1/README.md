#### 温度监控系统

首先，按照https://www.rt-thread.org/document/site/tutorial/temperature-system/#的教程来制作一个温度控制系统，样例是有多个板子协调，我只用了一块（pandora）只有一个温湿度传感器测试温度；
![功能完成后的样子](./images/1584674463905.png)

![裁剪之前工程大小](./images/1584674580407.png)
现在，来想一想我们能够裁剪的东西都有什么；
1. 首先，Hardware Drivers Config都是必要的的配置不能减少
2. 接着，RT-Thread Online Packages中：
    * peripherarl libraries and drivers中是senosrs 驱动，这个裁剪找到aht10（温湿度传感器），把The number of averaging改成1看看是否能够运行，结果运行成功；
    * IoT - internet of things中，在RT-Thread AT component porting or samples for different device → Espressif ESP8266中把The maximum length of receive line buffer改成128
    * 在 Paho MQTT: Eclipse Paho MQTT C/C++ client for Embedded platforms中去掉Enable debug log output
    *(再小就会报错，显示[E/at.clnt] read line failed. The line data length is out[W/UART] Warning: There is no enough buffer for saving data, please increase the RT_SERIAL_RB_BUFSZ option.)*
3. RT-Thread Components
    * RT-Thread Components → Device virtual file system下的 The maximal number of opened files改成8
    * RT-Thread Components → Device virtual file system → elm-chan's FatFs, Generic FAT Filesystem Module下的 Maximum sector size to be handled改成2048
    * Network → Network interface device下的Enable ifconfig features，Enable ping features，Enable netstat features，Enable default netdev automatic change features全部去掉
4. RT-Thread Kernel
    * The maximal size of kernel object name改成6
    * The stack size of idle thread改成128
    * RT-Thread Kernel → Inter-Thread communication 中去掉 mailbox和message queue
    * 去掉 Enable debugging features 
    
我有删除了spi flash的使用，直接把读取到的温度上传到onenet，使得工程大小进一步缩小；
![enter description here](./images/1584693881441.png)

