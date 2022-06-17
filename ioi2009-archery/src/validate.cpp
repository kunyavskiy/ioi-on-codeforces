#include <iostream>
#include "testlib.h"

using namespace std;

int main(){
    registerValidation();
    int n = inf.readInt(1,200000);
    inf.readSpace();
    inf.readInt(2*n,1000000000);
    inf.readEoln();
    vector<int> v;
    for (int i = 0; i < 2*n; i++){
        v.push_back(inf.readInt(1,2*n));
        inf.readEoln();
    }
    sort(v.begin(),v.end());
    ensure(unique(v.begin(),v.end()) == v.end());
    inf.readEof();
    return 0;
}