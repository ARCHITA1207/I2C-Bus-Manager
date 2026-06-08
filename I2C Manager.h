#ifndef I2C_MANAGER_H
#define I2C_MANAGER_H
#include "i2c_bus.h"
void start_condition(void);
void stop_condition(void);
void write_transaction(int address,int data);
void read_transaction(int address);
void send_ack(void);
void send_nack(void);
#endif
