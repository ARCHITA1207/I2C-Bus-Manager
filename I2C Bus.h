#ifndef I2C_BUS_H
#define I2C_BUS_H
#include "i2c_device.h"
#define MAX_DEVICES 10
typedef struct
{
    int scl;
    int sda;
    I2CDevice devices[MAX_DEVICES];
    int count;
}I2CBus;
void bus_init(I2CBus *bus);
void register_device(I2CBus *bus,I2CDevice device);
void display_devices(I2CBus *bus);
#endif
