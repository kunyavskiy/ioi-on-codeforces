#include "testlib.h"

using namespace std;

int main(){
   registerValidation();
   int n = inf.readInt(1,1000);
   inf.readSpace();
   int m = inf.readInt(1,1000);
   inf.readEoln();
   for (int i = 0; i < n+m; i++){
        inf.readToken("[A-Z]{1,8}");
        inf.readSpace();
        inf.readChar('=');
        inf.readSpace();
        inf.readToken("[A-Z]{1,8}");
        inf.readSpace();
        inf.readChar('+');
        inf.readSpace();
        inf.readToken("[A-Z]{1,8}");
        inf.readEoln();
   }
   inf.readEof();
   return 0;
}