#include <iostream>
#include <set>
#include "testlib.h"

using namespace std;

int main(){
    registerValidation();
    int n = inf.readInt(1,100);
    inf.readSpace();
    int m = inf.readInt(1,2000);
    inf.readEoln();
    for (int i = 0; i < n; i++){
        inf.readInt(1,100);
        inf.readEoln();
    }
    for (int i = 0; i < m; i++){
        inf.readInt(1,10000);
        inf.readEoln();
    }
    set<int> s1,s2;
    for (int i = 0; i < 2*m; i++){
        int a = inf.readInt(-m,m);
        inf.readEoln();
        ensure(a != 0);
        if (a > 0){
            ensure(s2.find(a) == s2.end());
            s2.insert(a);
            s1.insert(a);
        } else {
            ensure(s1.find(-a) != s1.end());
            s1.erase(-a);
        }
    }
    ensure(s1.empty());
    ensure((int)s2.size() == m);

    inf.readEof();
    return 0;
}