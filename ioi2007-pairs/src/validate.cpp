#include <iostream>
#include "testlib.h"

using namespace std;

int main(){
    registerValidation();
    int b = inf.readInt(1, 3);
    inf.readSpace();
    int n = inf.readInt(1, 100000);
    inf.readSpace();
    inf.readInt(1, 100000000);
    inf.readSpace();
    int m = inf.readInt();
    inf.readEoln();
    if (b == 1)
        ensure(m <= 75000000);
    if (b == 2)
        ensure(m <= 75000);
    if (b == 3)
        ensure(m <= 75);

    for (int i = 0; i < n; i++){
        for (int j = 0; j < b; j++){
            if (j) inf.readSpace();
            inf.readInt(1,m);
        }
        inf.readEoln();
    }

    inf.readEof();
    return 0;
}