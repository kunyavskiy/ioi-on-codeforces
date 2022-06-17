#include <iostream>
#include "testlib.h"

using namespace std;

int main(){
    registerValidation();
    int n = inf.readInt(1, 500000);
    inf.readSpace();
    inf.readInt(1,10);
    inf.readSpace();
    inf.readInt(1,10);
    inf.readSpace();
    vector<int> pl;
    pl.push_back(inf.readInt(1,500001));
    inf.readEoln();

    for (int i = 0; i < n; i++){
        inf.readInt(1, 500000);
        inf.readSpace();
        pl.push_back(inf.readInt(1, 500001));
        inf.readSpace();
        inf.readInt(1, 4000);
        inf.readEoln();
    }

    sort(pl.begin(),pl.end());
    ensure(unique(pl.begin(),pl.end()) == pl.end());

    inf.readEof();
    return 0;
}