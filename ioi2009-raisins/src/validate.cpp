#include <iostream>
#include "testlib.h"

using namespace std;

int main(){
    registerValidation();
    int n = inf.readInt(1,50);
    inf.readSpace();
    int m = inf.readInt(1,50);
    inf.readEoln();
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            if (j) inf.readSpace();
            inf.readInt(1,1000);
        }
        inf.readEoln();
    }

    inf.readEof();
    return 0;
}