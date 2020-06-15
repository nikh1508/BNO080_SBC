#include <Stream.h>

void Stream::print(string _s){
    cout<<_s;
}

void Stream::print(double _f) {
    cout<<_f;
}

void Stream::print(int _i, Base _b){
    if(_b == OCT)
        printf("%o", _i);
    else if(_b == HEX)
        printf("%X", _i);
    else
        printf("%d", _i);
}

void Stream::println(string _s) {
    print(_s);
    cout<<endl;
}

void Stream::println(double _f) {
    print(_f);
    cout<<endl;
}

void Stream::println(int _i, Base _b) {
    print(_i, _b);
    cout<<endl;
}

Stream Serial;