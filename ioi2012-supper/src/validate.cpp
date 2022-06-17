#include <iostream>
#include "testlib.h"

using namespace std;


const int N[5] = {5000, 100000, 100000, 5000, 100000};
const int K[5] = {5000, 100000, 25000, 5000, 25000};
const int BITS[5] = {65000, 2000000, 1500000, 10000, 1800000};

int main(int argc, char **argv) {
    registerValidation(argc, argv);
    inf.readInt(1, 1, "mode");
    inf.readLine();
    int group = inf.readInt(1,5)-1;
    ensure(group + 1 == atoi(validator.group().c_str()));
    inf.readEoln();
    int n = inf.readInt(1,N[group]);
    inf.readSpace();
    inf.readInt(1,K[group]);
    inf.readSpace();
    inf.readInt(BITS[group],BITS[group]);
    inf.readEoln();
    for (int i = 0; i < n; i++){
        if (i) inf.readSpace();
        inf.readInt(0,n-1);
    }
    inf.readEoln();

    inf.readEof();
    return 0;
}