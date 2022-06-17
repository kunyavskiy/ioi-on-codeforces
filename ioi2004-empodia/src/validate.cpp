#include "testlib.h"
using namespace std;

const int MaxN = 2000000;
int a[MaxN];
bool used[MaxN];

void _ensure(bool t) {
	if (!t) ensure(t);
}

int main(int argc, char ** argv) {
	registerValidation(argc, argv);
	int N;
	if (validator.group() == "1") N = 5000;
	else if (validator.group() == "2") N = 60000;
	else N = MaxN;
	int n = inf.readInt(1, N);
	inf.readEoln();
	for (int i = 0; i < n; ++i) {
		a[i] = inf.readInt(0, n - 1);
		if (i != n - 1) _ensure(a[i + 1] != a[i] + 1);
		_ensure(!used[a[i]]);
		used[a[i]] = true;
		inf.readEoln();
	}
	inf.readEof();
	_ensure(a[0] == 0);
	_ensure(a[n - 1] == n - 1);
	return 0;
}