#include "testlib.h"
#include <vector>

using namespace std;
// Additional:               K=N  R=C       
const int NS[] = {100*1000,  50,  500,  500,  4000,      50*1000, 100*1000  };
const int KS[] = {100*1000,  50,  500,  500,  4000,      100,     100*1000  };
const int MS[] = {1000*1000, 100, 1000, 1000, 1000*1000, 1000000, 1000*1000 };

int main(int argc, char **argv) {
  registerValidation(argc, argv);
  int group = atoi(validator.group().c_str());
  int n = inf.readInt(1, NS[group]);
  inf.readSpace();
  int m = inf.readInt(1, MS[group]);
  inf.readSpace();
  int k = inf.readInt(1, std::min(n, KS[group]));
  inf.readEoln();

  if (group == 1) {
  	ensuref(n == k, "N and K should be the same: N = %d, K = %d", n, k);
  }
  
  for (int i = 0; i < n; i++) {
    int row = inf.readInt(0, m - 1);
    inf.readSpace();
    int column = inf.readInt(0, m - 1);
    inf.readEoln();
    if (group == 2) {
      ensuref(row == column, "Point #%d (%d, %d) is not on the main diagonal", i, row, column);
    }
  }
  inf.readEof();
}
