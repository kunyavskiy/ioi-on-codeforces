#include "testlib.h"

int main() {
  registerValidation();
  int n = inf.readInt(2, 1000000, "n");
  inf.readEoln();
  for (int i = 0; i < n; i++) {
    int from = i + 1;
    int to = inf.readInt(1, n, "to[i]");
    inf.readSpace();
    inf.readInt(1, 100000000, "l[i]");
    inf.readEoln();
    ensure(to != from);
  }
  inf.readEof();
  return 0;
}
