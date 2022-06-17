#include <iostream>
#include "testlib.h"

using namespace std;

bool used[1000010];

int main(){
    registerValidation();
    int n = inf.readInt(1,1000000);
    inf.readEoln();
    for (int i = 0; i < n; i++){
        int p = inf.readInt(1,n);
        if (i != n-1) inf.readSpace();
        if (used[p])
            quitf(_fail,"twice %d\n",p);
        used[p] = true;
    }
    inf.readEoln();
    inf.readEof();
    return 0;
}