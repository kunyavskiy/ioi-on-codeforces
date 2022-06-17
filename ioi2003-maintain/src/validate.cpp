#include "testlib.h"

using namespace std;

int main(int argc, char**argv){
    registerValidation(argc, argv);
    int n = inf.readInt(1,200);
    inf.readSpace();
    int m = inf.readInt(1,6000);
    inf.readEoln();
    for (int i = 0; i < m; i++){
        int a = inf.readInt(1,n);
        inf.readSpace();
        int b = inf.readInt(1,n);
        if (a == b)
            quitf(_fail,"a == b");
        inf.readSpace();
        inf.readInt(1,10000);
        inf.readEoln();
    }
    inf.readEof();
    return 0;
}