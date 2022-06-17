#include "testlib.h"

using namespace std;

int main(){
	registerValidation();
	inf.readInt(1, 4);
	inf.readEoln();
	int n = inf.readInt(1, 5000);
	inf.readEoln();
	for (int i = 0; i < n; i++){
		inf.readInt(1, 2);
		inf.readSpace();
		inf.readInt(0, 999999);
		inf.readEoln();
	}
	inf.readEof();
	return 0;
}