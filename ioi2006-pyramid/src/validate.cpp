#include <iostream>
#include "testlib.h"

using namespace std;

int main(){
    registerValidation();
    int m = inf.readInt(1,1000);
    inf.readSpace();
    int n = inf.readInt(1,1000);
    inf.readSpace();
    int a = inf.readInt(1,m);
    inf.readSpace();
    int b = inf.readInt(1,n);
    inf.readSpace();
    inf.readInt(1,a-2);
    inf.readSpace();
    inf.readInt(1,b-2);
    inf.readEoln();

    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            inf.readInt(1,100);
            if (j != m-1) inf.readSpace();
        }
        inf.readEoln();
    }

    inf.readEof();
    return 0;
}