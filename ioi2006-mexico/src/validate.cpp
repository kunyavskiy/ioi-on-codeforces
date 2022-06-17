#include <iostream>
#include "testlib.h"
#include <set>

using namespace std;

int main(){
    registerValidation();
    int n = inf.readInt(1,1000);
    inf.readEoln();
    int m = inf.readInt();
    inf.readEoln();
    set<pair<int,int> > s;
    for (int i = 0; i < m; i++){
        int a = inf.readInt(1,n);
        inf.readSpace();
        int b = inf.readInt(1,n);
        inf.readEoln();
        if (a > b) swap(a,b);
        if (a == b) quitf(_fail,"Loop");
        if (s.find(make_pair(a,b)) != s.end())
            quitf(_fail,"Duplicate edge (%d, %d)",a,b);
        s.insert(make_pair(a,b));
    }                     
    inf.readEof();
    return 0;
}