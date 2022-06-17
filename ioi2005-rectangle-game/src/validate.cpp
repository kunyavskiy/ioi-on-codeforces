#include <iostream>
#include "testlib.h"

using namespace std;

int main(){
    registerValidation();
    inf.readInt(); // seed
    inf.readSpace();
    inf.readInt(1,100000000);
    inf.readSpace();
    inf.readInt(1,100000000);
    inf.readEoln();

    inf.readEof();
    return 0;
}