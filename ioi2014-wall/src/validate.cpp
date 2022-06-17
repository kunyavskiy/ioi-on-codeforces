#include "testlib.h"

using namespace std;

int main(){
	registerValidation();
	int n = inf.readInt(1, 2000000);
	inf.readSpace();
	int k = inf.readInt(1, 500000);
	inf.readEoln();
	for (int i = 0; i < k; i++) {
		inf.readInt(1, 2);
		inf.readSpace();
		int lf = inf.readInt(0, n-1);
		inf.readSpace();
		int rg = inf.readInt(0, n-1);
		inf.readSpace();
		ensure(lf <= rg);
		inf.readInt(0, 100000);
		inf.readEoln();
	}
	inf.readEof();
}