#ifndef I2C_DEVICE_H
#define I2C_DEVICE_H
typedef struct
{
    int address;
    char name[50];
}I2CDevice;
void init_device(I2CDevice *dev,int address,const char *name);
#endif
