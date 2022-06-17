#include <iostream>
#include <set>
#include "testlib.h"

using namespace std;


int main(){
    registerValidation();
    int n,m;
    n = inf.readInt(1,1000);
    inf.readSpace();
    m = inf.readInt();
    set<pair<int,int> > s;
    inf.readSpace();
    inf.readInt(1,36);
    inf.readEoln();
    for (int i = 0; i < m; i++){
        int a = inf.readInt(0,n-1);
        inf.readSpace();
        int b = inf.readInt(0,n-1);
        inf.readEoln();
        if (a == b) quitf(_fail,"LOOP");
        if (a > b) swap(a,b);
        if (s.find(make_pair(a,b)) != s.end()) quitf(_fail,"multiple edge");
        s.insert(make_pair(a,b));
    }
    inf.readEof();
    return 0;
}