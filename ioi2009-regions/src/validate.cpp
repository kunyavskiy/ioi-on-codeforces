#include <iostream>
#include "testlib.h"

using namespace std;

int main(){
    registerValidation();
    int n = inf.readInt(1,200000);
    inf.readSpace();
    int r = inf.readInt(1,25000);
    inf.readSpace();
    int q = inf.readInt(1,200000);
    inf.readEoln();

    for (int i = 0; i < n; i++){
        if (i){
            inf.readInt(1,i);
            inf.readSpace();
        }
        inf.readInt(1,r);
        inf.readEoln();
    }
    for (int i = 0; i < q; i++){
        inf.readInt(1,r);
        inf.readSpace();
        inf.readInt(1,r);
        inf.readEoln();
    }

    inf.readEof();
    return 0;
}