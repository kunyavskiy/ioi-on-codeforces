#include "testlib.h"

using namespace std;

int main(){
	registerValidation();
	int n = inf.readInt(1, 100000);
	inf.readEoln();
	for (int i = 0; i < n; i++) {
		if (i) inf.readSpace();
		inf.readInt(1, 1000000);
	}
	inf.readEoln();
	for (int i = 1; i < n; i++) {
		inf.readInt(0, i-1);
		inf.readSpace();
		inf.readInt(0, 2);
		if (i != n - 1) inf.readSpace();
	}
	inf.readEoln();
	inf.readEof();
}