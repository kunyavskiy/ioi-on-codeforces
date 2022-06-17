#include <iostream>
#include "testlib.h"

using namespace std;

int main(){
    registerValidation();
    while (!inf.eof()){
        inf.readInt(1,6);
        inf.readSpace();
        inf.readInt(1,10);
        inf.readSpace();
        inf.readInt(1,6);
        inf.readEoln();
    }

    inf.readEof();
    return 0;
}