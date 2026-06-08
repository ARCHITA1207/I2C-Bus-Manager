#include<stdio.h>
#include "../include/i2c_manager.h"
void start_condition(void)
{
    printf("\n[I2C START]\n");
}
void stop_condition(void)
{
    printf("[I2C STOP]\n");
}
void write_transaction(int address,int data)
{
    printf("WRITE -> Address:0x%X Data:%d\n",address,data);
}
void read_transaction(int address)
{
    printf("READ -> Address:0x%X\n",address);
}
void send_ack(void)
{
    printf("ACK\n");
}
void send_nack(void)
{
    printf("NACK\n");
}
