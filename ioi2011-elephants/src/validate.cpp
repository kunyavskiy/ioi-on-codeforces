#include <iostream>
#include "testlib.h"

using namespace std;

int main(){
    registerValidation();
    int n = inf.readInt(1,150000);
    inf.readSpace();
    inf.readInt(1,1000000000);
    inf.readSpace();
    int m = inf.readInt(1,150000);
    inf.readEoln();

    int last = 0;
    for (int i = 0; i < n; i++){
        last = inf.readInt(last,1000000000);
        inf.readEoln();
    }

    for (int i = 0; i < m; i++){
        inf.readInt(0, n-1);
        inf.readSpace();
        inf.readInt(0, 1000000000);
        inf.readEoln();
    }

    inf.readEof();
    return 0;
}