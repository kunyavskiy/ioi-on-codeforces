#include <iostream>
#include "testlib.h"

using namespace std;

int main(){
    registerValidation();

    while (!inf.eof()){
        int n = inf.readInt(1,500000000);
        inf.readSpace();
        inf.readInt(1,n);
        inf.readEoln();
    }

    inf.readEof();
    return 0;
}