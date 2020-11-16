#ifndef RT_CONFIG_H__
#define RT_CONFIG_H__

/* Automatically generated file; DO NOT EDIT. */
/* RT-Thread Configuration */

/* RT-Thread Kernel */

#define RT_NAME_MAX 8
#define RT_ALIGN_SIZE 4
#define RT_THREAD_PRIORITY_32
#define RT_THREAD_PRIORITY_MAX 32
#define RT_TICK_PER_SECOND 1000
#define RT_USING_OVERFLOW_CHECK
#define RT_USING_HOOK
#define RT_USING_IDLE_HOOK
#define RT_IDLE_HOOK_LIST_SIZE 4
#define IDLE_THREAD_STACK_SIZE 256
#define RT_DEBUG
#define RT_DEBUG_COLOR

/* Inter-Thread communication */

#define RT_USING_SEMAPHORE
#define RT_USING_MUTEX
#define RT_USING_EVENT
#define RT_USING_MAILBOX
#define RT_USING_MESSAGEQUEUE

/* Memory Management */

#define RT_USING_MEMHEAP
#define RT_USING_SMALL_MEM
#define RT_USING_HEAP

/* Kernel Device Object */

#define RT_USING_DEVICE
#define RT_USING_DEVICE_OPS
#define RT_USING_CONSOLE
#define RT_CONSOLEBUF_SIZE 256
#define RT_CONSOLE_DEVICE_NAME "lpuart1"
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

#define RT_USING_FINSH
#define FINSH_THREAD_NAME "tshell"
#define FINSH_USING_HISTORY
#define FINSH_HISTORY_LINES 5
#define FINSH_USING_SYMTAB
#define FINSH_USING_DESCRIPTION
#define FINSH_THREAD_PRIORITY 20
#define FINSH_THREAD_STACK_SIZE 4096
#define FINSH_CMD_SIZE 80
#define FINSH_USING_MSH
#define FINSH_USING_MSH_DEFAULT
#define FINSH_USING_MSH_ONLY
#define FINSH_ARG_MAX 10

/* Device virtual file system */

#define RT_USING_DFS
#define DFS_USING_WORKDIR
#define DFS_FILESYSTEMS_MAX 2
#define DFS_FILESYSTEM_TYPES_MAX 2
#define DFS_FD_MAX 16
#define RT_USING_DFS_DEVFS

/* Device Drivers */

#define RT_USING_DEVICE_IPC
#define RT_PIPE_BUFSZ 512
#define RT_USING_SYSTEM_WORKQUEUE
#define RT_SYSTEM_WORKQUEUE_STACKSIZE 2048
#define RT_SYSTEM_WORKQUEUE_PRIORITY 23
#define RT_USING_SERIAL
#define RT_SERIAL_RB_BUFSZ 64
#define RT_USING_I2C
#define RT_USING_I2C_BITOPS
#define RT_USING_PIN
#define RT_USING_ADC
#define RT_USING_SENSOR
#define RT_USING_SENSOR_CMD

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
#define NETDEV_USING_IFCONFIG
#define NETDEV_USING_PING
#define NETDEV_USING_NETSTAT
#define NETDEV_USING_AUTO_DEFAULT
#define NETDEV_IPV4 1
#define NETDEV_IPV6 0

/* light weight TCP/IP stack */


/* AT commands */

#define RT_USING_AT
#define AT_DEBUG
#define AT_USING_CLIENT
#define AT_CLIENT_NUM_MAX 1
#define AT_USING_SOCKET
#define AT_USING_CLI
#define AT_CMD_MAX_LEN 1024
#define AT_SW_VERSION_NUM 0x10301

/* VBUS(Virtual Software BUS) */


/* Utilities */


/* RT-Thread online packages */

/* IoT - internet of things */

#define PKG_USING_CJSON
#define PKG_USING_CJSON_V102

/* Wi-Fi */

/* Marvell WiFi */


/* Wiced WiFi */

#define PKG_USING_AT_DEVICE
#define AT_DEVICE_USING_ESP8266
#define AT_DEVICE_ESP8266_SAMPLE
#define ESP8266_SAMPLE_WIFI_SSID "FCTC_89"
#define ESP8266_SAMPLE_WIFI_PASSWORD "Lu15899962740"
#define ESP8266_SAMPLE_CLIENT_NAME "uart3"
#define ESP8266_SAMPLE_RECV_BUFF_LEN 1024
#define PKG_USING_AT_DEVICE_LATEST_VERSION
#define PKG_AT_DEVICE_VER_NUM 0x99999

/* IoT Cloud */

#define PKG_USING_ALI_IOTKIT
#define PKG_USING_ALI_IOTKIT_PRODUCT_KEY "a1p8Pngb3oY"
#define PKG_USING_ALI_IOTKIT_PRODUCT_SECRET ""
#define PKG_USING_ALI_IOTKIT_DEVICE_NAME "D001"
#define PKG_USING_ALI_IOTKIT_DEVICE_SECRET "06a4e5195240d18c691cef531ecc99d8"
#define PKG_ALI_IOTKIT_SELECT_ITEM
#define PLATFORM_HAS_STDINT
#define PLATFORM_HAS_DYNMEM
#define PLATFORM_HAS_OS
#define INFRA_STRING
#define INFRA_NET
#define INFRA_LIST
#define INFRA_LOG_NETWORK_PAYLOAD
#define INFRA_LOG

/* Log Configurations */

#define INFRA_LOG_MUTE_FLW
#define INFRA_LOG_MUTE_DBG
#define INFRA_LOG_MUTE_INF
#define INFRA_LOG_MUTE_WRN
#define INFRA_LOG_MUTE_CRT
#define INFRA_TIMER
#define INFRA_CJSON
#define INFRA_SHA256
#define INFRA_REPORT
#define INFRA_COMPAT
#define INFRA_CLASSIC
#define DEV_SIGN
#define MQTT_COMM_ENABLED

/* MQTT Configurations */

#define MQTT_DEFAULT_IMPL
#define MQTT_DIRECT
#define DEVICE_MODEL_CLASSIC
#define LOG_REPORT_TO_CLOUD
#define DEVICE_MODEL_ENABLED

/* Device Model Configurations */

#define PKG_USING_ALI_IOTKIT_V30001
#define PKG_ALI_IOTKIT_VER_NUM 0x30001

/* security packages */


/* language packages */


/* multimedia packages */


/* tools packages */


/* system packages */


/* peripheral libraries and drivers */

#define PKG_USING_SENSORS_DRIVERS
#define PKG_USING_DHTXX
#define PKG_USING_DHTXX_TYPE_DHT22
#define PKG_USING_DHTXX_LATEST_VERSION
#define PKG_DHTXX_VER_NUM 0x99999
#define PKG_USING_GP2Y10
#define PKG_USING_GP2Y10_ADC_DEV_NAME "adc1"
#define PKG_USING_GP2Y10_ADC_DEV_CHANNEL 4
#define PKG_USING_GP2Y10_CONVERT_BITS 12
#define PKG_USING_GP2Y10_VOLTAGE_RATIO 11
#define PKG_USING_GP2Y10_SOFT_FILTER
#define PKG_USING_GP2Y10_LATEST_VERSION
#define PKG_USING_SGP30
#define PKG_USING_SGP30_I2C_ADDR
#define PKG_USING_SGP30_I2C_ADDRESS 0x58
#define PKG_USING_SGP30_LATEST_VERSION
#define PKG_USING_LITTLED
#define PKG_USING_LITTLED_PERIOD 1000
#define PKG_USING_LITTLED_PULSE 500
#define PKG_USING_LITTLED_BELL_TIME 50000
#define PKG_USING_LITTLED_BEEP_COUNT 3
#define PKG_USING_LITTLED_LATEST_VERSION
#define PKG_USING_SSD1306
#define PKG_USING_SSD1306_I2C_ADDRESS 0x3C
#define PKG_USING_SSD1306_I2C_BUS_NAME "i2c1"
#define PKG_USING_SSD1306_SAMPLE
#define PKG_USING_SSD1306_LATEST_VERSION

/* miscellaneous packages */


/* samples: kernel and components samples */

#define SOC_FAMILY_STM32
#define SOC_SERIES_STM32L4

/* Hardware Drivers Config */

#define SOC_STM32L4R5ZI

/* Onboard Peripheral Drivers */

#define BSP_USING_STLINK_TO_USART

/* On-chip Peripheral Drivers */

#define BSP_USING_GPIO
#define BSP_USING_UART
#define BSP_USING_LPUART1
#define BSP_USING_UART3
#define BSP_USING_ADC
#define BSP_USING_ADC1
#define BSP_USING_I2C
#define BSP_USING_I2C1
#define BSP_I2C1_SCL_PIN 24
#define BSP_I2C1_SDA_PIN 25

/* Board extended module Drivers */


#endif
