#include <iostream>
#include "testlib.h"

using namespace std;

int main(){
    registerValidation();
    int s1 = inf.readInt(1,3000);
    inf.readSpace();
    int s2 = inf.readInt(1,3000000);
    inf.readEoln();
    inf.readLine("[a-zA-Z]{"+vtos(s1)+"}");
    inf.readLine("[a-zA-Z]{"+vtos(s2)+"}");

    inf.readEof();
    return 0;
}