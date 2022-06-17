#include "testlib.h"
#include <cassert>
#include <iostream>
using namespace std;

int N, KMIN, KMAX;

int main(int argc, char **argv) {
  registerValidation(argc, argv);
  N = 10000000;
  if (validator.group() == "1")
    N = 1000;
  if (validator.group() == "2")
    N = 1000;
  if (validator.group() == "3")
    N = 10;
  if (validator.group() == "4")
    N = 1000;
  if (validator.group() == "5")
    N = 1000000;
  if (validator.group() == "6")
    N = 10000000;

  int n = inf.readInt(0, (int)N);
  bool compressed = false;
  if (n == 0) {
    inf.readSpace();
    compressed = true;
    n = inf.readInt(1, (int)N);
  }
  KMIN = 1;
  KMAX = n;
  if (validator.group() == "2")
    KMIN = KMAX = n;
  if (validator.group() == "1")
    KMIN = KMAX = 1;
  if (validator.group() == "5")
    KMAX = 3000;

  inf.readSpace();
  int k = inf.readInt(KMIN, (int)KMAX);
  inf.readSpace();
  int l = inf.readInt(1, (int)1e9);
  inf.readEoln();
  int prev = 0;
  for (int i = 0; i < n; ++i) {
    int x = inf.readInt(0, l - 1);
    if (compressed) { 
        x += prev;
        ensure(0 <= x && x <= l - 1);
    }
    assert(prev <= x);
    prev = x;
    if (i < n - 1)
      inf.readSpace();
  }
  inf.readEoln();
  inf.readEof();
  return 0;
}
