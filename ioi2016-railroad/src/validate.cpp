#include "testlib.h"

const int INF = (int) 1e9;
const int N[] = {8, 8, 16, 200000, 200000};
const int A[] = {1, 1,  1,      0,      1};

int main(int argc, char ** argv) {
	registerValidation(argc, argv);
	int g = atoi(validator.group().data());
	int n = inf.readInt(1, N[g], "n");
	inf.readSpace();
	inf.readInt(A[g], A[g], "need_answer");
	inf.readEoln();
	for (int i = 0; i < n; ++i) {
		inf.readInt(1, INF, "s");
		inf.readSpace();
		inf.readInt(1, INF, "t");
		inf.readEoln();
	}
	inf.readEof();
	return 0;
}
