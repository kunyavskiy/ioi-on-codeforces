#include <iostream>
#include "testlib.h"
#include <algorithm>
#define pb push_back

using namespace std;

vector<int> g[1100];
vector<int> g2[1100];

bool used[1100];

void dfs(int v,int p){
    used[v] = true;
    for (int i = 0; i < (int)g[v].size(); i++){
        int to = g[v][i];
        if (to == p) continue;
        if (used[to]) quitf(_fail,"not a tree");
        dfs(to,v);
    }
}

int main(){
    registerValidation();
    int n = inf.readInt(1,1000);
    inf.readSpace();
    int m = inf.readInt(1,5000);
    inf.readEoln();
    for (int i = 0; i < m; i++){
        int a = inf.readInt(1,n) - 1;
        inf.readSpace();
        int b = inf.readInt(1,n) - 1;
        ensure(a != b);
        inf.readSpace();
        int c = inf.readInt(0,10000);
        inf.readEoln();
        if (c == 0){
            g[a].pb(b);
            g[b].pb(a);
        }
        g2[a].pb(b);
        g2[b].pb(a);
    }

    for (int i = 0; i < n; i++){
        ensure(g2[i].size() <= 10);
        sort(g2[i].begin(),g2[i].end());
        ensure(unique(g2[i].begin(),g2[i].end()) == g2[i].end());
    }

    dfs(0,-1);
    for (int i = 0; i < n; i++)
        if (!used[i])
            quitf(_fail,"not a tree");
    inf.readEof();
    return 0;
}