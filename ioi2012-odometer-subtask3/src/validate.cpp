#include <iostream>
#include "testlib.h"

using namespace std;


const int SZ = 256;
const int MAX_STEP = 200000;

int grid[SZ][SZ];


int main(){
    registerValidation();
    inf.readInt(SZ, SZ);
    inf.readSpace();
    inf.readInt(MAX_STEP, MAX_STEP);
    inf.readEoln();
    int cnt0 = 0;
    int y0[2];
    while (!inf.eof()){
        int x = inf.readInt(0,SZ-1);
        inf.readSpace();
        int y = inf.readInt(0,SZ-1);
        inf.readSpace();
        int cnt = inf.readInt(1,15);
        inf.readEoln();
        if (grid[x][y] != 0) quitf(_fail,"twice (%d,%d)",x,y);
        grid[x][y] = cnt;
        ensure(x == 0);
        ensure(cnt0 <= 2);
        y0[cnt0++] = y;
    }

    ensure(cnt0 == 2 && (y0[0] + y0[1]) % 2 == 0);


    inf.readEof();
    return 0;
}