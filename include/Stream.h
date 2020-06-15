#ifndef STREAM_H
#define STREAM_H

#include<iostream>
#include<string>

using namespace std;

enum Base
{
    DEC = 0,
    BIN,
    HEX,
    OCT
};

class Stream {
    public:

    void print(string);
    void print(double);
    void print(int _i, Base _b = DEC);

    void println(string _s = "");
    void println(double);
    void println(int _i, Base _b = DEC);
};

extern Stream Serial;

#endif