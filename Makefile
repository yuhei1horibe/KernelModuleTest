ARCH=arm
CROSS_COMPILE=arm-linux-gnueabihf-

obj-m=test.o
KERNDIR=/$(HOME)/RaspberryPi/linux
PWD=$(shell pwd)

default:
	$(MAKE) -C $(KERNDIR) M=$(PWD) ARCH=$(ARCH) CROSS_COMPILE=$(CROSS_COMPILE) modules

clean:
	$(MAKE) -C $(KERNDIR) M=$(PWD) ARCH=$(ARCH) clean

