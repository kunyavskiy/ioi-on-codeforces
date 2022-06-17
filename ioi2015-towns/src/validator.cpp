#include "testlib.h"
#pragma comment(linker, "/STACK:640000000")
#include <algorithm>
#include <bitset>
#include <cassert>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <ctime>
#include <iostream>
#include <map>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <vector>

#define pb push_back
#define ppb pop_back
#define mp make_pair
#define all(x) (x).begin(), (x).end()
#define sz(x) (int)(x).size()
#define ll long long
#define bit __builtin_popcountll
#define sqr(x) (x) * (x)
#define forit(it, S)                                                           \
  for (__typeof((S).begin()) it = (S).begin(); it != (S).end(); it++)

using namespace std;

typedef pair<int, int> pii;

const double eps = 1e-9;
const double pi = acos(-1.0);

int g[222][222];

int main(int argc, char *argv[]) {

  registerValidation(argc, argv);

  int x;
  string group = validator.group();
  x = group[0] - '0';
  if (x < 0)
    x = 1; // if not a testset x = 1; to check on validator tests

  int sub = inf.readInt(x, x, "sub");

  inf.readSpace();

  int T = inf.readInt(1, 100, "test");

  inf.readEoln();

  while (T--) {
    int N = inf.readInt(6, 110, "N");
    inf.readEoln();
    for (int i = 0; i < N; i++) {
      for (int j = 0; j < N; j++) {
        if (j > 0)
          inf.readSpace();
        if (i == j) {
          g[i][j] = inf.readInt(0, 0, "diagonal is not equal to zero");
        } else {
          g[i][j] = inf.readInt(1, 2000 * (N - 1),
                                format("g[%d][%d] out of range", i, j));
        }
      }
      inf.readEoln();
    }
    for (int i = 0; i < N; i++) {
      for (int j = 0; j < N; j++) {
        ensuref(g[i][j] == g[j][i], "not symmetric");
      }
    }
    int n = N;
    vector<bool> removed(n);
    vector<vector<int>> dst(n, vector<int>(n));
    vector<vector<int>> adj(n, vector<int>(0));
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < n; j++) {
        dst[i][j] = g[i][j];
      }
    }
    int remaining = n;
    while (remaining > 1) {
      int f = -1;
      int s = -1;
      int max = 0;
      for (int i = 0; i < dst.size(); i++) {
        if (removed[i]) {
          continue;
        }
        for (int j = 0; j < i; j++) {
          if (!removed[j] && dst[i][j] > max) {
            max = dst[i][j];
            f = i;
            s = j;
          }
        }
      }
      int minDis = 1000000000;
      int at = -1;
      for (int i = 0; i < dst.size(); i++) {
        if (!removed[i] && i != f) {
          int cd = dst[f][i] + dst[s][i] - dst[f][s];
          ensuref(cd % 2 == 0, "Fractional edge");
          cd = dst[f][i] - cd / 2;
          if (cd < minDis) {
            minDis = cd;
            at = i;
          }
        }
      }
      bool found = false;
      for (int i = 0; i < dst.size(); i++) {
        if (!removed[i] && dst[f][i] == minDis) {
          found = true;
          for (int j = 0; j < dst.size(); j++) {
            ensuref(removed[j] || i == j || f == j ||
                        dst[f][j] == dst[f][i] + dst[i][j],
                    "Not a tree");
          }
          removed[f] = true;
          adj[f].push_back(i);
          adj[i].push_back(f);
          remaining--;
          break;
        }
      }
      if (found) {
        continue;
      }
      int nVer = dst.size();
      adj[f].push_back(nVer);
      dst.push_back(vector<int>(0));
      removed.push_back(false);
      adj.push_back(vector<int>(1, f));
      removed[f] = true;
      for (int i = 0; i < nVer; i++) {
        if (removed[i]) {
          dst[i].push_back(0);
          dst[nVer].push_back(0);
        } else {
          int nDst = dst[f][i] - minDis;
          dst[i].push_back(nDst);
          dst[nVer].push_back(nDst);
        }
      }
      dst[nVer].push_back(0);
    }
    for (int i = 0; i < adj.size(); i++) {
      ensuref(adj[i].size() != 2, "Town is not a leaf");
    }
    if (x == 4) {
      for (int i = 0; i < adj.size(); i++) {
        ensuref(adj[i].size() == 1 || adj[i].size() == 3,
                "Degree of city is not 3");
      }
    }
  }

  inf.readEof();

  return 0;
}
