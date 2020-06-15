#ifndef WIRE_H
#define WIRE_H

#include <unistd.h>
#include <fcntl.h>
#include <sys/ioctl.h>
#include <linux/i2c-dev.h>
#include <ArduinoPort.h>

class TwoWire {
    int file_i2c;

    public:
    void begin(char * i2c_bus, uint8_t i2c_slave_addr);
    int i2c_read_device(char *buffer, int length, int timeout = 100);
    int i2c_write_device(char *buffer, int length);
    void close_i2c();
};



#endif