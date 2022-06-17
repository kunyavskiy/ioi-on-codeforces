#include <iostream>
#include "testlib.h"

using namespace std;

int main(){
    registerValidation();
    int r = inf.readInt(1,3000);
    inf.readSpace();
    int c = inf.readInt(1,3000);
    inf.readSpace();
    inf.readInt(1,r);
    inf.readSpace();
    inf.readInt(1,c);
    inf.readEoln();

    for (int i = 0; i < r; i++){
        for (int j = 0; j < c; j++){
            if (j) inf.readSpace();
            inf.readInt();
        }
        inf.readEoln();
    }

    inf.readEof();
    return 0;
}