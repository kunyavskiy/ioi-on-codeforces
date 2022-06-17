#include <iostream>
#include "testlib.h"

using namespace std;

int main(){
    registerValidation();
    int w = inf.readInt(1,600);
    inf.readSpace();
    int h = inf.readInt(1,600);
    inf.readEoln();
    int n = inf.readInt(1,200);
    inf.readEoln();
    for (int i = 0; i < n; i++){
        inf.readInt(1,w);
        inf.readSpace();
        inf.readInt(1,h);
        inf.readEoln();
    }

    inf.readEof();
    return 0;
}