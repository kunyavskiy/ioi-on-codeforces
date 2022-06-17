#include <iostream>
#include "testlib.h"

using namespace std;

int main(){
    registerValidation();
    int q = inf.readInt(1, 150000);
    inf.readSpace();
    int m = inf.readInt(1, 2000);
    inf.readSpace();
    int k = inf.readInt(1, 2000);
    inf.readEoln();
    int total = 0;
    for (int i = 0; i < m; i++){
        total += inf.readInt(1,150);
        if (i != m-1) inf.readSpace();
    }
    inf.readEoln();
    for (int i = 0; i < k; i++){
        total += inf.readInt(1,150);
        if (i != k-1) inf.readSpace();
    }
    inf.readEoln();
    ensure(total >= q);
    inf.readEof();
    return 0;
}