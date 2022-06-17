#include "testlib.h"
#include <iostream>
using namespace std;
const int maxn = (int)1e6;
int a[maxn];

int main(int argc, char* argv[]) {
	registerValidation(argc, argv);
	
	string g = validator.group();

	int MINN, MAXN,M,V1,V2;
	
  char taskType = g[0] - '1' + 'A';

	MINN = 1;
	if (taskType=='A')
	{
		MAXN = 5;
	}
	else if (taskType=='B')
	{
		MAXN = 100;
	}
	else if (taskType=='C')
	{
		MAXN = 100;
	}
	else if (taskType=='D')
	{
		MAXN = 500;
	}
	else if (taskType=='E')
	{
		MAXN = 2000;
		MINN = 6;
	}
	else if (taskType=='F')
	{
		MAXN = 200000;
		MINN = 6;
	}
	else exit(1);
    
	int n = inf.readInt(MINN, MAXN, "n");
	inf.readEoln();
	
	if (taskType=='A')
		M = n * n;
	else if (taskType=='B' || taskType=='C' || taskType=='D')
		M = 30 * n;
	else if (taskType=='E' || taskType == 'F')
		M = 3 * n;
    else exit(1);

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
		if (taskType=='A') {
			if (x!=0 || y!=0) quitf(_fail, "Wrong SubtaskA");
		} else if (taskType=='B') {
			if (x!=0 || y!=0) quitf(_fail, "Wrong SubtaskB");
		} else if (taskType=='C') {
			if (!(x==0&&y==1)) quitf(_fail, "Wrong SubtaskC");
		}
	}
	inf.readEof();
	return 0;
}
