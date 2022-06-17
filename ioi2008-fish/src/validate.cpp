#include <iostream>
#include "testlib.h"

using namespace std;

bool have[500010];

int main(){
    registerValidation();
    int F = inf.readInt(1,500000);
    inf.readEoln();
    int K = inf.readInt(1,F);
    inf.readEoln();
    inf.readInt(1,30000);
    inf.readEoln();

    for (int i = 0; i < F; i++){
        inf.readInt(1,1000000000);
        inf.readSpace();
        have[inf.readInt(1,K)] = true;
        inf.readEoln();
    }
    for (int i = 1; i <= K; i++)
        if (!have[i])
            quitf(_fail,"no juwel %d",i);

    inf.readEof();
    return 0;
}