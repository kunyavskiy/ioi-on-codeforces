#include "testlib.h"

using namespace std;

bool done[1501][1501];

int main(){
	registerValidation();
	int n = inf.readInt(1, 1500);
	inf.readEoln();
	for (int i = 0; i < n * (n-1) / 2; i++) {
		int a = inf.readInt(0, n-1);
	    inf.readSpace();
	    int b = inf.readInt(0, n-1);
	    inf.readEoln();
	    ensure(a != b);
	    ensure(!done[a][b]);
        done[a][b] = done[b][a] = 1;
	}
	inf.readEof();
	return 0;
}
