#include "testlib.h"
#include <vector>

using namespace std;

const int NS[] = {4,  8,   32,   32,   128,  128};
const int WS[] = {16, 256, 320,  1024, 1792, 896};
const int RS[] = {16, 256, 1024, 320,  1792, 896};

int main(int argc, char **argv) {
  registerValidation(argc, argv);
  int group = (validator.group().empty()) ? 0 : atoi(validator.group().data());
  int n = inf.readInt(NS[group], NS[group]);
  inf.readSpace();
  int w = inf.readInt(WS[group], WS[group]);
  inf.readSpace();
  int r = inf.readInt(RS[group], RS[group]);
  inf.readEoln();

  vector<int> perm(n);
  for (int i = 0; i < n; i++) {
  	perm[i] = inf.readInt(0, n - 1);
  	for (int j = 0; j < i; j++) {
  		ensuref(perm[i] != perm[j], "Not a permutation: p[%d] = p[%d] = %d", i, j, perm[i]);
  	}
  	if (i + 1 < n) {
  		inf.readSpace();
  	} else {
  		inf.readEoln();
  	}
  }
  if (group == 1) {
	int not_fixed = 0;
  	for (int i = 0; i < n; i++) {
  		if (perm[i] != i) {
  			not_fixed++;
  		}
  	}
  	ensuref(not_fixed <= 2, "More than 2 non-fixed points: %d", not_fixed);
  }
  inf.readEof();
}
