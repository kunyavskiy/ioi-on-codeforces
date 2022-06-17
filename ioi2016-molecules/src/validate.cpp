/** Author: Sergey Kopeliovich (Burunduk30@gmail.com) */

#ifdef BURUNDUK
#  include "my_testlib.h"
#else
#  include "testlib.h"
#endif

#include <climits>
#include <algorithm>

#define forn(i, n) for (int i = 0; i < (int)(n); i++)
#define space(i, n) if ((i) == (n) - 1) inf.readEoln(); else inf.readSpace();
#define LEN(a) (int)(sizeof(a) / sizeof(a[0]))

const int MAX_N = 2e5;
const int MAX_C = (1U << 31) - 1;

const int N[] = {MAX_N, 100,   100,   100,   10000, int(1e4), MAX_N};
const int W[] = {MAX_C, 100,   1000,  1000,  10000, int(5e5), MAX_C};
const int D[] = {MAX_C, 0,     1,     MAX_C, MAX_C, MAX_C,    MAX_C};
const int U[] = {MAX_C, 1000,  1000,  1000,  10000, int(5e5), MAX_C};

// group 1 : integer division
// group 2 : iterate number of items of the first kind and number of items of the second kind in answer
// group 3 : DP in O(n*u)
// group 4 : DP in time O(n*u) and space O(n+u)
// group 5 : O(n^2) greedy or DP in O(u^{3/2}) or O(n*u/word_siize) = n*u/64
// group 6 : O(n) full solution

int main( int argc, char *argv[] ) {
	registerValidation(argc, argv);
	int group = (validator.group().empty()) ? 0 : atoi(validator.group().data());
	ensure(0 <= group && group < LEN(N));
	
	int n = inf.readInt(1, N[group], "n");
	inf.readSpace();
	int l = inf.readInt(1, U[group], "l");
	inf.readSpace();
	int u = inf.readInt(l, U[group], "u");
	inf.readEoln();
	
	int mi = INT_MAX, ma = INT_MIN;
	for (int i = 0; i < n; ++i) {
		int w = inf.readInt(1, W[group], "w[i]");
		mi = std::min(mi, w);
		ma = std::max(ma, w);
		space(i, n);
	}
	//printf("l=%d u=%d mi=%d ma=%d\n", l, u, mi, ma);
	ensure(ma - mi <= u - l);
	ensure(ma - mi <= D[group]);
	inf.readEof();
}
