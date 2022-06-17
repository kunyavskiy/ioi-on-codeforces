#include "testlib.h"

using namespace std;

int main(){
    registerValidation();
    int R = inf.readInt(1, 1000000000);
    inf.readSpace();
    int C = inf.readInt(1, 1000000000);
    inf.readSpace();
    int N = inf.readInt();
    inf.readEoln();
    int nu = 0, ng = 0;
    for (int i = 0; i < N; i++){
        int ty = inf.readInt(1, 2);
        if (ty == 1){
            inf.readSpace();
            inf.readInt(0, R-1);
            inf.readSpace();
            inf.readInt(0, C-1);
            inf.readSpace(); 
            inf.readLong(0, 1000000000000000000LL);
            inf.readEoln();
            ++nu;
            ensure(nu <= 22000);
        } else {
            ++ng;
            inf.readSpace();
            inf.readInt(0, R-1);
            inf.readSpace();
            inf.readInt(0, C-1);
            inf.readSpace();                       
            inf.readInt(0, R-1);
            inf.readSpace();
            inf.readInt(0, C-1);
            inf.readEoln();
            ensure(ng <= 250000);
        }
    }

    inf.readEof();
    return 0;
}