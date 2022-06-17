#include "testlib.h"
#include <iostream>
using namespace std;
const int maxn = (int)1e6;
int a[maxn];

int main(int argc, char* argv[]) {
	registerValidation(argc, argv);
	
	string g = validator.testset();

	int MAXN,M;

	if (g[9] == '1') {
		MAXN = 20;
	} else if (g[9] == '2') {
		if (g[7] == '3') {
			MAXN = 1000;
		} else {
			MAXN = 500;
		}
	} else if (g[9] == '3') {
		MAXN = 10000;
	} else {
		MAXN = 100000;
	}	

	int n = inf.readInt(1, MAXN, "n");
	inf.readEoln();

	if (g[7] == '1') {
		M = n * n;
	} else if (g[7] == '2') {
		M = 30 * n;
	} else {
		M = 3 * n;
	}

	for (int i = 0; i < n; ++i) {
		if (i > 0) inf.readSpace();
		a[i] = inf.readInt(0, n - 1);
	}
	sort(a, a + n);
	for (int i = 0; i < n; ++i) 
		if (i != a[i]) quitf(_fail, "Not a permutation");

	inf.readEoln();
	int m = inf.readInt(M, M, "m");
	inf.readEoln();
	for (int i = 0; i < m; ++i) {
		int x = inf.readInt(0, n - 1);
		inf.readSpace();
		int y = inf.readInt(0, n - 1);
		inf.readEoln();
		if (g[7] == '1') {
			if (x != 0 || y != 0) quitf(_fail, "Wrong Subtask1");
		} else if (g[7] == '2') {
			if (x != 0 || y != 1) quitf(_fail, "Wrong SubTask2");
		}
	}
	inf.readEof();
	return 0;
}
