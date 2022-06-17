#include <iostream>
#include "testlib.h"

using namespace std;

int main(){
    registerValidation();
    int n = inf.readInt(1,100000);
    inf.readSpace();
    int c = inf.readInt(1,n-1);
    inf.readSpace();
    vector<int> rs;
    rs.push_back(inf.readInt(0,n-1));
    inf.readEoln();
    for (int i = 0; i < n-1; i++){
        rs.push_back(inf.readInt(0,n-1));
        inf.readEoln();
    }
    sort(rs.begin(),rs.end());
    ensure(unique(rs.begin(),rs.end()) == rs.end());
    
    for (int i = 0; i < c; i++){
        int L = inf.readInt(0,n-1);
        inf.readSpace();
        int R = inf.readInt(L+1,n-1);
        inf.readEoln();
        n -= (R - L);
    }
    ensure(n == 1);

    inf.readEof();
    return 0;
}