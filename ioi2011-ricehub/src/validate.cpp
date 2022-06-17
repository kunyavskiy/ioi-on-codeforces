#include <iostream>
#include "testlib.h"

using namespace std;

int main(){
    registerValidation();
    int n = inf.readInt(1,100000);
    inf.readSpace();
    int len = inf.readInt(1,1000000000);
    inf.readSpace();
    inf.readLong(0,2000000000000000);
    inf.readEoln();

    int last = 1;

    for (int i = 0; i < n; i++){
        last = inf.readInt(last,len);
        inf.readEoln();
    }
    inf.readEof();
    return 0;
}