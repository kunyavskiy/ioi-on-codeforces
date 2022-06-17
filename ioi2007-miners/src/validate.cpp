#include <iostream>
#include "testlib.h"

using namespace std;

int main(){
    registerValidation();
    int n = inf.readInt(1, 100000);
    inf.readEoln();
    inf.readLine("[MFB]{"+vtos(n)+"}");
    inf.readEof();
    return 0;
}