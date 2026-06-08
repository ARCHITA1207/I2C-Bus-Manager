#include<stdio.h>
#include "../include/i2c_bus.h"
void bus_init(I2CBus *bus)
{
    bus->scl = 1;
    bus->sda = 1;
    bus->count = 0;
}
void register_device(I2CBus *bus,I2CDevice device)
{
    if(bus->count >= MAX_DEVICES)
    {
        printf("Bus Full\n");
        return;
    }
    bus->devices[bus->count++] = device;
    printf("Registered : %s (0x%X)\n",device.name,device.address);
}
void display_devices(I2CBus *bus)
{
    int i;
    printf("\nConnected Devices\n");
    for(i=0;i<bus->count;i++)
    {
        printf("%s -> Address 0x%X\n",
               bus->devices[i].name,
               bus->devices[i].address);
    }
}
