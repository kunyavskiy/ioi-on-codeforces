#include <iostream>
#include "testlib.h"

using namespace std;


int main(){
    registerValidation();
    int n = inf.readInt(1,1000000);
    inf.readEoln();
    int ops = 0;
    for (int i = 0; i < n; i++){
        char c = inf.readChar();
        inf.readSpace();
        if (c == 'P')
            inf.readInt();
        else if (c == 'U')
            inf.readInt(1,ops++);
        else 
            inf.readToken("[a-z]"), ops++;
        inf.readEoln();
    }

    inf.readEof();
    return 0;
}