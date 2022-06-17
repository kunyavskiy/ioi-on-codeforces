#include "testlib.h"

using std::vector;

void readGraph(int n) {
  vector<vector<bool> > mat(n, vector<bool>(n));
  for (int a = 0; a < n; a++) {
    for (int b = 0; b < n; b++) {
      int x = inf.readInt(0, 1);
      mat[a][b] = x;
      if (b + 1 < n) inf.readSpace();
      else inf.readEoln();
    }
  }
  for (int a = 0; a < n; a++)
    ensure(!mat[a][a]);
  for (int a = 0; a < n; a++)
  for (int b = 0; b < n; b++)
    ensure(mat[a][b] == mat[b][a]);
}

int main() {
  registerValidation();

  int m = inf.readInt(3, 4, "m");
  inf.readSpace();
  int n = inf.readInt(3, 1000, "n");
  inf.readEoln();
  readGraph(m);
  readGraph(n);
  inf.readEof();
  return 0;
}
