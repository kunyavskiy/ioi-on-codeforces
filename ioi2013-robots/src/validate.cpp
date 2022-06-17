#include "testlib.h"

using namespace std;

int main(){
    registerValidation();
    int a = inf.readInt(0, 50000);
    inf.readSpace();
    int b = inf.readInt(0, 50000);
    inf.readSpace();
    int T = inf.readInt(1, 1000000);
    inf.readEoln();

    for (int i = 0; i < a; i++){
        if (i) inf.readSpace();
        inf.readInt(1, 2000000000);
    }
    inf.readEoln();

    for (int i = 0; i < b; i++){
        if (i) inf.readSpace();
        inf.readInt(1, 2000000000);
    }
    inf.readEoln();

    for (int i = 0; i < T; i++){
        inf.readInt(1, 2000000000);
        inf.readSpace();
        inf.readInt(1, 2000000000);
        inf.readEoln();
    }                  

    inf.readEof();
    return 0;
}