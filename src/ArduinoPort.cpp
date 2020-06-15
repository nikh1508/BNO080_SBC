#include <ArduinoPort.h>

double millis(){
        clock_t now = clock();
        return (double)now / CLOCKS_PER_SEC;
}

void delay(int ms)
{
        usleep(ms * 1000);
}

string F(string s) {
        return s;
}

bool digitalRead(int pin)
{
        return false;
}