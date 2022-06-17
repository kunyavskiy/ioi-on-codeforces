#include <iostream>
#include "testlib.h"

using namespace std;

int N,M;
int cx,cy;
int sx,sy;

char buf[200];

int check(int x,int y){
   int i,j;
   for (i = 0; i < 5; i++)
      for (j = 0; j < 5; j++)
        if ((i+j)%2 == 0){
            int lx,ly,rx,ry;
            lx = cx - (M/2) - 2*M + i*M;
            rx = lx + M - 1;
            ly = cy - (M/2) - 2*M + j*M;
            ry = ly + M - 1;
            if (lx <= x && x <= rx && ly <= y && y <= ry)
                return 1;
        }
   return 0;    
}


int main(){
    registerValidation();
    N = inf.readInt(1,2000000000);
    inf.readSpace();
    M = inf.readInt(3,N);
    ensure(M % 2 == 1);
    inf.readEoln();
    sx = inf.readInt(1,N);
    inf.readSpace();
    sy = inf.readInt(1,N);
    inf.readEoln();
    cx = inf.readInt(1,N);
    inf.readSpace();
    cy = inf.readInt(1,N);
    inf.readEoln();
    ensure(check(sx,sy));
    ensure(cx + (2LL*M + M/2) <= N);
    ensure(cy + (2LL*M + M/2) <= N);
    ensure(cx - (2LL*M + M/2) >= 1);
    ensure(cy - (2LL*M + M/2) >= 1);
    inf.readEof();
    return 0;
}