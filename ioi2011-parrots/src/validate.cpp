#include <iostream>
#include "testlib.h"

using namespace std;

int main(){
    registerValidation();
    inf.readInt(0, 0);
    inf.readEoln();
    int tt = inf.readInt(1,50);
    inf.readEoln();
    inf.readInt();
    inf.readSpace();
    inf.readInt();
    inf.readEoln();
    inf.readInt();
    inf.readEoln();
    for (int i = 0; i < tt; i++){
        int n = inf.readInt(1,64);
        inf.readEoln();
        for (int j = 0; j < n; j++){
            if (j) inf.readSpace();
            inf.readInt(0,255);
        }              
        inf.readEoln();
        inf.readInt();
        inf.readEoln();
    }

    inf.readEof();
    return 0;
}