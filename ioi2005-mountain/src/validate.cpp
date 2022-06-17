#include <iostream>
#include "testlib.h"

using namespace std;

int main(){
    registerValidation();
    int lines = 1;
    int n = inf.readInt(1,1000000000);
    inf.readEoln();
    while (true){
        ++lines;
        char c = inf.readChar();
        if (c == 'E'){
            inf.readEoln();
            break;
        }
        if (c == 'Q'){
            inf.readSpace();
            inf.readInt(0,1000000000);
            inf.readEoln();
            continue;
        }
        if (c == 'I'){
            inf.readSpace();
            int a = inf.readInt(1,n);
            inf.readSpace();
            inf.readInt(a,n);
            inf.readSpace();
            inf.readInt(-1000000000,1000000000);
            inf.readEoln();
            continue;
        }
        quitf(_fail,"Unknown command %c",c);
    }

    inf.readEof();
    return 0;
}