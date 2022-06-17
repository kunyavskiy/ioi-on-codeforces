/* Don't check no two walls intersects */

#include <iostream>
#include "testlib.h"

using namespace std;

int main(){
    registerValidation();

    int n = inf.readInt(1, 100000);
    inf.readEoln();
    for (int i = 0; i < n; i++){
        inf.readInt(0, 1000000);
        inf.readSpace();
        inf.readInt(0, 1000000);
        inf.readEoln();
    }
    int w = inf.readInt(1,2*n);
    inf.readEoln();
    for (int i = 0; i < w; i++){
        inf.readInt(1,n);
        inf.readSpace();
        inf.readInt(1,n);
        inf.readEoln();
    }
    inf.readEof();
    return 0;
}