#include <bits/stdc++.h>

#include "testlib.h"

using namespace std;

using ll = long long;
using ld = long double;
using D = double;
using uint = unsigned int;

#ifdef WIN32
    #define LLD "%I64d"
#else
    #define LLD "%lld"
#endif

#define pb push_back
#define mp make_pair
#define all(x) (x).begin(),(x).end()
#define fi first
#define se second

const int ngroups = 8;
const int minC = 1;
const int maxC = 1000 * 1000 * 1000;
const int minL = 1;
const int maxL = 1000 * 1000 * 1000;
const int minD = 0;
const int maxD = 1000 * 1000 * 1000;

const int maxn[ngroups + 1] = {1000 * 1000, 10, 100, 250, 500, 3000, 100 * 1000, 300 * 1000, 1000 * 1000};

int n, C;

int main(int argc, char **argv)
{
	registerValidation(argc, argv);
	int group = (validator.group().empty()) ? 0 : atoi(validator.group().data());
	ensure(0 <= group && group <= ngroups);
	n = inf.readInt(2, maxn[group], "n");
	inf.readSpace();
	C = inf.readInt(minC, maxC, "C");
	inf.readEoln();
	for (int i = 0; i < n - 1; i++)
	{
		inf.readInt(minL, maxL, format("L0[%d]", i + 1));
		if (i + 2 < n) inf.readSpace();
		else inf.readEoln();
	}
	for (int i = 0; i < n; i++)
	{
		inf.readInt(minD, maxD, format("L[%d]", i + 1));
		if (i + 1 < n) inf.readSpace();
		else inf.readEoln();
	}
	inf.readEof();
	return 0;
}
