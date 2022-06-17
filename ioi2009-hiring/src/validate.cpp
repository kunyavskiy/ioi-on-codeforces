#include <iostream>
#include "testlib.h"

using namespace std;

int main(){
    registerValidation();
    int n = inf.readInt(1,500000);
    inf.readSpace();
    inf.readLong(1,10000000000LL);
    inf.readEoln();
    for (int i = 0; i < n; i++){
        inf.readInt(1,20000);
        inf.readSpace();
        inf.readInt(1,20000);
        inf.readEoln();
    }

    inf.readEof();
    return 0;
}