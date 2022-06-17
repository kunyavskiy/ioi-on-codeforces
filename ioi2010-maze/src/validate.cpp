#include <iostream>
#include "testlib.h"

using namespace std;

const int N[10] = {6,100,100,100,100,11,20,20,11,200};
const int M[10] = {10,100,100,100,100,11,20,20,21,200};

int main(){
    registerValidation();
    int test = inf.readInt(0,9);
    inf.readLine();

    for (int i = 0; i < N[test]; i++)
        inf.readLine("[#X]{"+vtos(M[test])+"}");
    inf.readInt(test, test);
    inf.readEoln();
    inf.readEof();
    return 0;
}