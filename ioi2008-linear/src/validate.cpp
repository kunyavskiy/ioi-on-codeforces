#include "testlib.h"

using std::string;
using std::min;
using std::max;

int main() {
  registerValidation();
  int n = inf.readInt(1, 1000000, "n");
  inf.readEoln();
  inf.readInt(7, 10000000, "m");
  inf.readEoln();

  string s = inf.readLine("[LP]{1,1000000}");
  ensure(s.length() == n);

  int minBal = 0, maxBal = 0;
  int curBal = 0;
  for (int i = 0; i < n; i++) {
    if (s[i] == 'L') curBal++;
    else curBal--;
    minBal = min(minBal, curBal);
    maxBal = max(maxBal, curBal);
  }
  if (maxBal - minBal > 2) {
    quitf(_fail, "Garden is unbalanced");
  }

  inf.readEof();
  return 0;
}