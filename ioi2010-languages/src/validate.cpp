#include <iostream>
#include <set>
#include <string>
#include "testlib.h"

using namespace std;

int main(){
    registerValidation();
    set<string> names;
    for (int i = 0; i < 10000; i++){
        string name = inf.readToken("[a-z][a-z]");
        names.insert(name);
        for (int j = 0; j < 100; j++){
            inf.readSpace();
            inf.readInt(0,(1<<16)-1);
        }
        inf.readEoln();
    }
    ensure(names.size() == 56);

    inf.readEof();
    return 0;
}