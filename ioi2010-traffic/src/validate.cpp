#include "testlib.h"

#include <iostream>
#include <sstream>
#include <fstream>
#include <iomanip>
#include <string>
#include <cstdlib>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <ctime>
#include <climits>
#include <cassert>
#include <vector>
#include <queue>
#include <stack>
#include <deque>
#include <set>
#include <map>
#include <bitset>
#include <utility>
#include <algorithm>

#define forn(i, n) for (int i = 0; i < int(n); i++)

using namespace std;

int leader(vector<int>& dsu, int idx)
{
    return dsu[idx] == idx ? dsu[idx] : (dsu[idx] = leader(dsu, dsu[idx]));
}

bool merge(vector<int>& dsu, int a, int b)
{
    a = leader(dsu, a);
    b = leader(dsu, b);
    if (a == b)
        return false;
    else
    {
        dsu[a] = b;
        return true;
    }
}

int main()
{
    registerValidation();

    int n = inf.readInt(1, 1000000, "n");
    inf.readEoln();

    long long total = 0;
    for (int i = 0; i < n; i++){
        if (i) inf.readSpace();
        total += inf.readInt();
    }
    inf.readEoln();

    ensure(total <= 2000000000);

    vector<int> dsu(n);
    forn(i, n)
        dsu[i] = i;

    set<pair<int,int> > edges;

    forn(i, n - 1)
    {
        int x = inf.readInt(0, n-1, "x_i")+1;
        inf.readSpace();
        int y = inf.readInt(0, n-1, "y_i")+1;
        inf.readEoln();

        ensuref(x != y, "Tree can't contain loops");
        ensuref(edges.count(make_pair(x, y)) == 0, "Tree can't contain multiple edges between a pair of vertices");

        edges.insert(make_pair(x, y));
        edges.insert(make_pair(y, x));

        ensuref(merge(dsu, x - 1, y - 1), "Tree can't contain cycles");
    }

    inf.readEof();
    return 0;
}
