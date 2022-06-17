#include "testlib.h"

using namespace std;

void readGrid(){
    int r,c;
    r = inf.readInt(1,20);
    inf.readSpace();
    c = inf.readInt(1,20);
    inf.readEoln();
    string temp;
    bool haveX = false;
    for (int i = 0; i < r; i++){
        temp = inf.readLine("[#X.]{"+vtos(c)+"}");
        for (int j = 0; j < c; j++)
            if (temp[j] == 'X'){
                if (haveX)
                    quitf(_fail,"Duplicate X");
                else
                    haveX = true;
            }
    }
    if (!haveX)
        quitf(_fail,"No X");
    int g = inf.readInt(0,10);
    inf.readEoln();
    for (int i = 0; i < g; i++){
        inf.readInt(1,r);
        inf.readSpace();
        inf.readInt(1,c);
        inf.readSpace();
        inf.readInt(2,4);
        inf.readSpace();
        inf.readToken("[NWSE]");
        inf.readEoln();
    }
}

int main(){
    registerValidation();
    readGrid();
    readGrid();
    inf.readEof();
    return 0;
}