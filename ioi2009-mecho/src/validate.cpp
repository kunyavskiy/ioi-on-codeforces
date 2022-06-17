#include <iostream>
#include "testlib.h"

using namespace std;

string s[810];

bool dfsD, dfsH;
int n;

const int dx[4] = {0,1,0,-1};
const int dy[4] = {-1,0,1,0};

void dfs(int x,int y){
    if (!(0 <= x && x < n) || !(0 <= y && y < n))
        return;
    if (s[x][y] == 'T') return;
    if (s[x][y] == 'D') {dfsD = true; return;}
    if (s[x][y] == 'H') {dfsH = true; return;}
    s[x][y] = 'T';
    for (int i = 0; i < 4; i++)
        dfs(x+dx[i],y+dy[i]);
}

int main(){
    registerValidation();
    n = inf.readInt(1,800);
    inf.readSpace();
    inf.readInt(1,1000);
    inf.readEoln();
    for (int i = 0; i < n; i++)
        s[i] = inf.readLine("[TGMDH]{"+vtos(n)+"}");
    
    bool start = 0,end = 0,bee = 0;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            if (s[i][j] == 'M'){
                if (start)
                    quitf(_fail,"Two M's");
                start = true;
            }
            else if (s[i][j] == 'D'){
                if (end)
                    quitf(_fail,"Two D's");
                end = true;
            } else if (s[i][j] == 'H'){
                bee = true;
            }

    if (!start) quitf(_fail,"No M");
    if (!end) quitf(_fail,"No D");
    if (!bee) quitf(_fail,"No H");

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            if (s[i][j] == 'M')
                dfs(i,j);

    if (!dfsD) quitf(_fail,"No D reachable");
    if (!dfsH) quitf(_fail,"No H reachable");


    inf.readEof();
    return 0;
}