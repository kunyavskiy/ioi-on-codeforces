#include "testlib.h"

using namespace std;

const int MAXN[10] = {100, 100000, 100000, 100, 1000, 100000, 50, 50, 100000, 100000};
const int MAXC[10] = {-1, -1, 250000, -2, 5000, 250000, -3, 100, 250000, 1000000000};

int main(){
	registerValidation();
	int group = inf.readInt(1, 10);
	inf.readEoln();
	int maxn = MAXN[group-1];
	int maxc = MAXC[group-1];

	int n = inf.readInt(1, maxn);
	inf.readEoln();
	if (maxc == -1) maxc = n;
	else if (maxc == -2) maxc = n+1;
	else if (maxc == -3) maxc = n+3;

	vector<int> res(n);
	for (int i = 0; i < n; i++) {
		if (i) inf.readSpace();
		res[i] = inf.readInt(1, maxc);
	}
	inf.readEoln();
	inf.readEof();
	if (group == 1) {
		sort(res.begin(), res.end());
		ensure(unique(res.begin(), res.end()) == res.end());
	} 
	if (7 <= group && group <= 8)
		ensure(n >= 4);
	if (group == 8) {
		sort(res.begin(), res.end());
		ensure(res[n-4] <= n);
	}
}