#ifndef ARDUINO_PORT_H
#define ARDUINO_PORT_H

#include <sys/time.h>
#include <string>
#include <cmath>
#include<unistd.h>

typedef bool boolean;
typedef uint8_t byte;

#define HIGH true
using namespace std;


double millis();
void delay(int);
string F(string);
bool digitalRead(int);

#endif