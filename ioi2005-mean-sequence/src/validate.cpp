#include <iostream>
#include "testlib.h"

using namespace std;

int main(){
    registerValidation();
    int n = inf.readInt(1,5000000);
    inf.readEoln();
    for (int i = 0; i < n; i++)
        inf.readInt(0,1000000000),inf.readEoln();

    inf.readEof();
    return 0;
}