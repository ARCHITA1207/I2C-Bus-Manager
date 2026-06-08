#include<stdio.h>
#include<string.h>
#include "../include/i2c_device.h"
void init_device(I2CDevice *dev,int address,const char *name)
{
    dev->address = address;
    strcpy(dev->name,name);
}
