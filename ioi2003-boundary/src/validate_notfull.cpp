//Don't check if polygons are correct and not touching

#include "testlib.h"

using namespace std;

const int MAXN = 500000;
const int MAXR = 30000;

int main(){
    registerValidation();
    int N = inf.readInt(1,MAXN,"N");
    inf.readSpace();
    int R = inf.readInt(1,MAXR,"R");
    inf.readEoln();
    inf.readInt(1,N);
    inf.readSpace();
    inf.readInt(1,N);
    inf.readEoln();
    for (int i = 0; i < R; i++){
       int k = inf.readInt(3,20);
       inf.readEoln();
       for (int j = 0; j < k; j++){
          inf.readInt(1,N);
          inf.readSpace();
          inf.readInt(1,N);
          inf.readEoln();
       }
    }                  
    inf.readEof();
    return 0;     
}