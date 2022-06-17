#include <iostream>
#include "testlib.h"

using namespace std;

int main(){
    registerValidation();
    int n = inf.readInt(1,100000);
    inf.readEoln();
    for (int i = 0; i < n; i++){
        int h = inf.readInt(1,100000);
        inf.readSpace();
        inf.readInt(1, h);
        inf.readEoln();
    }

    inf.readEof();
    return 0;
}