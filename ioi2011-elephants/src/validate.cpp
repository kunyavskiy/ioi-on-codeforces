#include <iostream>
#include "testlib.h"

using namespace std;

int MAXN[] = {150'000, 2, 100, 50'000, 70'000, 150'000};
int MAXM[] = {150'000, 100, 100, 50'000, 70'000, 150'000};

int main(int argc, char **argv){
    registerValidation(argc, argv);
    int group = atoi(validator.group().c_str());
    int n = inf.readInt(1, MAXN[group]);
    inf.readSpace();
    inf.readInt(1,1000000000);
    inf.readSpace();
    int m = inf.readInt(1, MAXM[group]);
    inf.readEoln();

    int last = 0;
    for (int i = 0; i < n; i++){
        last = inf.readInt(last,1000000000);
        inf.readEoln();
    }

    for (int i = 0; i < m; i++){
        inf.readInt(0, n-1);
        inf.readSpace();
        inf.readInt(0, 1000000000);
        inf.readEoln();
    }

    inf.readEof();
    return 0;
}