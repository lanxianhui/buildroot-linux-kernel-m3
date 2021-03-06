#KERNEL_DIR:=~/workdir/lichee/linux-2.6.36/
#CROSS_COMPILE:=arm-none-linux-gnueabi-
KERNEL_MAJOR_VERSION=2.6
export ARCH=arm

HOST_PLATFORM_SRC_DIR=winner
TRANSPORT=ksdio
#HOST:=arm-none-linux-gnueabi-

PLATFORM_FLAGS+=-DDE_LOAD_DEVICE_PARAMS=CFG_NOT_INCLUDED
PLATFORM_FLAGS+=-DDE_SHUTDOWN_ON_IFDOWN=CFG_OFF
PLATFORM_FLAGS+=-D__linux__ 
PLATFORM_FLAGS+=-DUSE_4BIT_SDIO
PLATFORM_FLAGS+=-DKSDIO_HIGH_SPEED
PLATFORM_FLAGS+=-DFORCE_SYSCTL_SYSCALL_CHECK
PLATFORM_FLAGS+=-DKSDIO_FORCE_CLOCK=50000000
#PLATFORM_FLAGS+=-DKSDIO_NO_BLOCK_MODE
PLATFORM_FLAGS+=-DKSDIO_BLOCK_SIZE=32
#PLATFORM_FLAGS+=-DKSDIO_SIZE_ALIGN=32
PLATFORM_FLAGS+=-DKSDIO_HIC_MIN_SIZE=32
PLATFORM_FLAGS+=-DWINNER_SN2MAC

#PLATFORM_FLAGS+=-DKSDIO_SEPARATE_WORKQUEUE
PLATFORM_FLAGS+=-DUSE_THREAD_RX
PLATFORM_FLAGS+=-DUSE_THREAD_TX
PLATFORM_FLAGS+=-DDE_ENABLE_HT_RATES=CFG_ON

#=============================================
#  winner's private defines & power management
#=============================================
#PLATFORM_FLAGS+=-DKSDIO_IGNORE_REMOVE
#PLATFORM_FLAGS+=-DKSDIO_HOST_RESET_PIN
PLATFORM_FLAGS+=-DWINNER_HOST_GPIO_CTRL
PLATFORM_FLAGS+=-DWINNER_SHUTDOWN_PIN_USED
PLATFORM_FLAGS+=-DWINNER_POWER_PIN_USED


