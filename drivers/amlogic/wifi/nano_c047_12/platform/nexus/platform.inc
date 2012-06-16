KERNEL_DIR = $(NEXUS_KERNEL_DIR)
CROSS_COMPILE = $(NEXUS_CROSS_COMPILE)
export ARCH=arm

KERNEL_MAJOR_VERSION=2.6
PLATFORM_FLAGS+=-D__linux__ -DKSDIO_FORCE_CLOCK=20000000
PLATFORM_FLAGS+=-DDE_LOAD_DEVICE_PARAMS=CFG_NOT_INCLUDED
PLATFORM_FLAGS+=-DDE_SHUTDOWN_ON_IFDOWN=CFG_OFF
PLATFORM_FLAGS+=-Wno-missing-field-initializers

# Enable Thread
PLATFORM_FLAGS+=-DUSE_THREAD_RX
PLATFORM_FLAGS+=-DUSE_THREAD_TX

# CHIP VERSION : (CFG_NRX_600 | CFG_NRX_700)
PLATFORM_FLAGS+=-DCFG_NRX_700

TRANSPORT=ksdio