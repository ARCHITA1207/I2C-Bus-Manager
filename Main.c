#include<stdio.h>
#include "../include/i2c_bus.h"
#include "../include/i2c_device.h"
#include "../include/i2c_manager.h"
#include "../include/logger.h"
int main()
{
    I2CBus bus;
    I2CDevice temp_sensor;
    I2CDevice eeprom;
    I2CDevice rtc;
    bus_init(&bus);
    init_device(&temp_sensor,0x10,"Temperature Sensor");
    init_device(&eeprom,0x20,"EEPROM");
    init_device(&rtc,0x30,"RTC");
    register_device(&bus,temp_sensor);
    register_device(&bus,eeprom);
    register_device(&bus,rtc);
    display_devices(&bus);
    start_condition();
    write_transaction(0x20,100);
    send_ack();
    read_transaction(0x10);
    send_ack();
    log_transaction("Transaction Successful");
    stop_condition();

    return 0;
}
