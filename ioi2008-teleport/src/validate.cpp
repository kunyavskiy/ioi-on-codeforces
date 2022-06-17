#include "testlib.h"

using std::vector;

int main() {
  registerValidation();
  int n = inf.readInt(1, 1000000, "n");
  inf.readEoln();
  inf.readInt(1, 1000000, "m");
  inf.readEoln();

  vector<int> was;
  for (int i = 0; i < n; i++) {
    int a = inf.readInt(1, 2000000, "w[i]");
    inf.readSpace();
    int b = inf.readInt(1, 2000000, "e[i]");
    inf.readEoln();

    ensure(a < b);
    was.push_back(a);
    was.push_back(b);
  }
  sort(was.begin(), was.end());
  ensure(unique(was.begin(), was.end()) == was.end());
  inf.readEof();
  return 0;
}
