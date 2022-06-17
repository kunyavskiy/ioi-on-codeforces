#include "testlib.h"

using namespace std;

int main(){
    registerValidation();
    int n = inf.readInt(1,20000);
    inf.readEoln();
    inf.readInt(1,n);
    inf.readEoln();
    for (int i = 0; i < n; i++){
        inf.readInt(0,64000);
        inf.readSpace();
        inf.readInt(0,64000);
        inf.readEoln();
    }
    inf.readEof();
    
    return 0;
}