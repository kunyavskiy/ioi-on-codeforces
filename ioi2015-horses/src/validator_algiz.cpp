#include "testlib.h"
#include <string>

using std::string;

int loN[]={-1, 1, 1, 1, 1, 1};
int hiN[]={-1, 10, (int)1e3, (int)5e5, (int)5e5, (int)5e5};

int loM[]={-1, 0, 0, 0, 0, 0};
int hiM[]={-1, 0, (int)1e3, (int)1e5, (int)1e4, (int)1e5};

int _9 = (int)1e9;

int loX[]={-1, 1, 1, 2, 1, 1};
int hiX[]={-1, 10, _9, _9, _9, _9};

int loY[]={-1, 1, 1, 1, 1, 1};
int hiY[]={-1, 10, _9, _9, _9, _9};

int X[(int)5e5];
int Y[(int)5e5];

int main(int argc, char* argv[])
{
	registerValidation(argc, argv);
	string group = validator.group();
	
	int g = group[0] - '0';
	if(g < 1 || g > 5) g = 5;
	
	int N, M;
	N = inf.readInt(loN[g], hiN[g], "N");
	inf.readEoln();
	for(int i = 0; i < N; ++i){
		if(i > 0)inf.readSpace();
		X[i] = inf.readInt(loX[g], hiX[g], format("X[%d]", i));
	}
	
	if(g == 1){
		long long product = 1;
		
		for(int i = 0; i < N; ++i){
			product *= X[i];
			if(product > 1000)
				break;
		}
		ensuref(product <= 1000, "product of X is out of range");		
	}
	
	inf.readEoln();
	for(int i = 0; i < N; ++i){
		if(i > 0)inf.readSpace();
		Y[i] = inf.readInt(loY[g], hiY[g], format("Y[%d]", i));
	}
	inf.readEoln();
	M = inf.readInt(loM[g], hiM[g], "M");
	for(int i = 0; i < M; ++i){
		inf.readEoln();
		int type, pos, val;
		type = inf.readInt(1, 2, format("%d-th query wrong format", i));
		inf.readSpace();
		pos = inf.readInt(0, N - 1, format("%d-th query wrong position", i));
		inf.readSpace();
		val = inf.readInt(type == 1 ? loX[g] : loY[g], type == 1 ? hiX[g] : hiY[g], format("val for %d-th query", i));
	}	
	inf.readEoln();
	inf.readEof();
	return 0;
}

