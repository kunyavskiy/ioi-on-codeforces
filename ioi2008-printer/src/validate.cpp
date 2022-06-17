#include "testlib.h"
#include <set>

using std::set;
using std::string;

int main() {
  registerValidation();
  int n = inf.readInt(1, 25000, "n");
  inf.readEoln();

  set<string> was;
  for (int i = 0; i < n; i++) {
    string s = inf.readToken("[a-z]{1,20}", "word[i]");
    inf.readEoln();

    if (was.count(s))
      quitf(_fail, "Word '%s' occurs twice", s.c_str());
    was.insert(s);
  }
  inf.readEof();
  return 0;
}
