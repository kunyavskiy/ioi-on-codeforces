#include "testlib.h"

using namespace std;

int main(){
	registerValidation();
	int n = inf.readInt(1, 1000000);
	inf.readSpace();
	inf.readInt(0, n-1, "start");
	inf.readSpace();
	inf.readInt(1, 2*n + n/2, "d");
	inf.readEoln();
	for (int i = 0; i < n; i++) {
		if (i) inf.readSpace();
		inf.readInt(0, 1000000000);
	}		
	inf.readEoln();
	inf.readEof();
	return 0;
}