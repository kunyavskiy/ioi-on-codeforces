#include "testlib.h"
#include <vector>
int const MAXLEN[] = {100, 20, 20, 100, 100, 100, 5000, 200000};
int const MAXK[] =   {100,  1, 20, 100, 100, 100,  100,    100};

int main(int argc, char **argv) {
  registerValidation(argc, argv);
  int group = atoi(validator.group().c_str());
  std::string s = inf.readToken(format("[X_.]{1,%d}", MAXLEN[group]), "s");
  int n = (int) s.length();
  inf.readEoln();
  int k = inf.readInt(1, MAXK[group], "k");
  if (group >= 1 && group <= 3) {
    ensuref(pattern(format("[.]{1,%d}", MAXLEN[group])).matches(s), "s has to consist of only '.' characters");
  }
  if (group == 4) {
    ensuref(pattern(format("[._]{1,%d}", MAXLEN[group])).matches(s), "s has to consist of characters '.' and '_'"); 
  }
  using std::vector;
  vector<int> c(k);
  for (int i = 0; i < k; i++) {
    inf.readSpace();
    c[i] = inf.readInt(1, n, format("c[%d]", i));
    ++c[i];
  }
  vector<vector<int> > dp(n + 2, vector<int> (k + 1));
  dp[0][0] = true;
  for (int i = 1; i <= n + 1; i++) {
    for (int j = 0; j <= k; j++) {
      dp[i][j] = dp[i - 1][j];
      if (j > 0 && i - c[j - 1] >= 0) {
        dp[i][j] |= dp[i - c[j - 1]][j - 1];
      }
    }
  }
  ensuref(dp[n + 1][k], "Puzzle has to have at least one valid solution");
  inf.readEoln();
  inf.readEof();
}
