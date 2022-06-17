#include "testlib.h"

using namespace std;

int main(){
    registerValidation();
    int n = inf.readInt(1,50);
    inf.readSpace();
    int p = inf.readInt(1,8);
    inf.readEoln();
    for (int i = 0; i < n; i++){
        for (int j = 0; j < p; j++){
            inf.readToken("X|Y|Z");
            if (j != p-1)
               inf.readSpace();
        }
        inf.readEoln();
    }
    inf.readEof();
    return 0;
}