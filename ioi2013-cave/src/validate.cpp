#include <iostream>
#include "testlib.h"

using namespace std;

int main(){
   registerValidation();
   int n = inf.readInt(1, 5000);
   inf.readEoln();
   for (int i = 0; i < n; i++){
      if (i) inf.readSpace();
      inf.readInt(0, 1);
   }
   inf.readEoln();
   vector<int> v(n);
   for (int i = 0; i < n; i++){
      if (i) inf.readSpace();
      v[i] = inf.readInt();
   }
   inf.readEoln();
   sort(v.begin(), v.end());
   for (int i = 0; i < n; i++)
       if (v[i] != i)
           quitf(_fail, "it's not a premutation!");
   inf.readEof();
   return 0;
}