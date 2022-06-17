#include <iostream>
#include "testlib.h"

using namespace std;

int main(){
    registerValidation();
    int N = inf.readInt(1,2000);
    inf.readSpace();
    int T = inf.readInt(1,2000);
    inf.readSpace();
    inf.readInt(1,N);
    inf.readEoln();
    for (int i = 0; i < N; i++){
        for (int j = 0; j < T; j++){
            if (j) inf.readSpace();
            inf.readInt(0,1);
        }
        inf.readEoln();
    }

    inf.readEof();
    return 0;
}