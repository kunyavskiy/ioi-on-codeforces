#include <iostream>
#include "testlib.h"
#include <set>

using namespace std;

int main(){
    registerValidation();
    int n = inf.readInt(1,100000);
    inf.readEoln();
    set<pair<int,int> > s;
    for (int i = 0; i < n; i++) {
        int x = inf.readInt(1,(1u<<31)-1);
        inf.readSpace();
        int y = inf.readInt(1,(1u<<31)-1);
        inf.readEoln();
        if (s.find(make_pair(x,y)) != s.end()) quitf(_fail,"Twice (%d,%d)",x,y);
        s.insert(make_pair(x,y));
    }

    inf.readEof();
    return 0;
}