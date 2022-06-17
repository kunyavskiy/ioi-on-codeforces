#include <iostream>
#include "testlib.h"

using namespace std;

vector<int> g[110];
int used[110];

void dfs(int v){
    if (used[v] == 1)
        quitf(_fail,"rivers are cyclic?");
    if (used[v] == 2) return;
    used[v] = 1;
    for (int i = 0; i < (int)g[v].size(); i++)
        dfs(g[v][i]);
    used[v] = 2;
}

int main(){
    registerValidation();
    int n = inf.readInt(1,100);
    inf.readSpace();
    inf.readInt(1,50);
    inf.readEoln();

    for (int i = 0; i < n; i++){
        inf.readInt(0,10000);
        inf.readSpace();
        int v = inf.readInt(0,n)-1;
        inf.readSpace();
        inf.readInt(1,10000);
        inf.readEoln();
        if (v != -1)
            g[i].push_back(v);
    }

    for (int i = 0; i < n; i++)
        dfs(i);

    inf.readEof();
    return 0;
}