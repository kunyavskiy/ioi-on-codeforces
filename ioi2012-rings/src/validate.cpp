#include <iostream>
#include "testlib.h"
#include <set>

#define mp make_pair

using namespace std;

int main(){
    registerValidation();
    int n = inf.readInt(1,1000000);
    inf.readSpace();
    int q = inf.readInt(1,1000000);
    inf.readEoln();
    set<pair<int,int> > s;
    for (int i = 0; i < q; i++){
        int a = inf.readInt(-1,n-1);
        if (a == -1){
            inf.readEoln();
            continue;
        }
        inf.readSpace();
        int b = inf.readInt(0,n-1);
        inf.readEoln();
        if (a == b) quitf(_fail,"Loop");
        if (a > b) swap(a,b);
        if (s.find(mp(a,b)) != s.end()) quitf(_fail,"twice (%d,%d)",a,b);
        s.insert(mp(a,b));
    }

    inf.readEof();
    return 0;
}