#include <Wire.h>

void TwoWire::begin(char * i2c_bus, uint8_t i2c_slave_addr){
    if((file_i2c = open(i2c_bus, O_RDWR)) < 0) {
        printf("Failed to open i2c");
        return;
    }

    if(ioctl(file_i2c, I2C_SLAVE, i2c_slave_addr) < 0) {
        printf("Unable to talk to the slave device 0x%x", i2c_slave_addr);
        return;
    }
}


int TwoWire::i2c_read_device(char *buffer, int length, int timeout){
    int bytes_read = -1;
    double start_time = millis();
    while(bytes_read == -1 && (millis() - start_time) < timeout)
        bytes_read = read(file_i2c, buffer, length);
    if (bytes_read != length) {
            printf("Failed to read from the i2c bus. %d != %d\n", length, bytes_read);
    }
    else {}
    return bytes_read;
}

int TwoWire::i2c_write_device(char *buffer, int length){
    if (write(file_i2c, buffer, length) != length) {
            printf("Failed to write to the i2c bus.\n");
            return -1;
    }
    return 0;
}

void TwoWire::close_i2c() {
    close(file_i2c);
}
