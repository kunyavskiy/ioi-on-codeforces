#include "testlib.h"

int main() {
  registerValidation();
  int m = inf.readInt(1, 1000000, "m");
  inf.readSpace();
  int n = inf.readInt(1, 1000000, "n");
  inf.readEoln();

  int b = inf.readInt(0, 2000000000, "B");
  inf.readEoln();
  int p = inf.readInt(1, 400000, "p");
  inf.readEoln();

  ensure(p <= 30000 || b == 0);

  for (int i = 0; i < p; i++) {
    int x1, y1, x2, y2;
    x1 = inf.readInt(1, m, "x1");
    inf.readSpace();
    y1 = inf.readInt(1, n, "y1");
    inf.readSpace();
    x2 = inf.readInt(1, m, "x2");
    inf.readSpace();
    y2 = inf.readInt(1, n, "y2");
    inf.readSpace();
    
    inf.readInt(1, 7000, "c");
    inf.readEoln();

    ensure(x1 <= x2);
    ensure(y1 <= y2);
  }
  inf.readEof();
  return 0;
}
