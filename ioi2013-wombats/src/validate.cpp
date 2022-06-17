#include "testlib.h"
#include <iostream>

using namespace std;

int main(){
   registerValidation();
   int R = inf.readInt(1, 5000);
   inf.readSpace();
   int C = inf.readInt(1, 200);
   inf.readEoln();
   if (C != 1){
      for (int i = 0; i < R; i++){
          for (int j = 0; j < C-1; j++){
              if (j) inf.readSpace();
              inf.readInt(0, 1000);
          }
          inf.readEoln();
      }
   }
   for (int i = 0; i < R-1; i++){
       for (int j = 0; j < C; j++){
           if (j) inf.readSpace();
           inf.readInt(0, 1000);
       }
       inf.readEoln();
   }
   int q = inf.readInt();
   inf.readEoln();
   int chcnt, escnt;
   chcnt = escnt = 0;
   for (int i = 0; i < q; i++){
      int ty = inf.readInt();
      inf.readSpace();
      if (ty == 1){
        chcnt++;
        inf.readInt(0, R - 1);
        inf.readSpace();
        inf.readInt(0, C - 2);
        inf.readSpace();
        inf.readInt(0, 1000);
      } else if (ty == 2){
        chcnt++;
        inf.readInt(0, R - 2);
        inf.readSpace();
        inf.readInt(0, C - 1);
        inf.readSpace();
        inf.readInt(0, 1000);
      } else {
        ensure(ty == 3);
        inf.readInt(0, C - 1);
        inf.readSpace();
        inf.readInt(0, C - 1);
        escnt++;
      }
      inf.readEoln();
      ensure(chcnt <= 500);
      ensure(escnt <= 200000);
   }
   inf.readEof();
   return 0;
}