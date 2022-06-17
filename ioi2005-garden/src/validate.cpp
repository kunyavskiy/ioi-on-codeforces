#include <iostream>
#include "testlib.h"

using namespace std;

int main(){
    registerValidation();
    int l = inf.readInt(1,250);
    inf.readSpace();
    int w = inf.readInt(1,250);
    inf.readEoln();
    int n = inf.readInt(1,5000);
    inf.readSpace();
    inf.readInt(1,n/2);
    inf.readEoln();
    for (int i = 0; i < n; i++){
        inf.readInt(1,l);
        inf.readSpace();
        inf.readInt(1,w);
        inf.readEoln();    
    }


    inf.readEof();
    return 0;
}