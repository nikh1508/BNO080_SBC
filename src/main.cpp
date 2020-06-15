#include <iostream>
#include <Wire.h>
#include <Stream.h>
#include <SparkFun_BNO080_Arduino_Library.h>

using namespace std;

TwoWire i2c;
BNO080 myIMU;

int main()
{
    i2c.begin("/dev/i2c-1", BNO080_DEFAULT_ADDRESS);
    myIMU.enableDebugging();
    myIMU.begin(i2c);
    return 0;
}