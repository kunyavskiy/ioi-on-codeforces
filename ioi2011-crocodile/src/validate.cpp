#include "testlib.h"
#include <set>


using namespace std;

int main(){
    registerValidation();
    int n = inf.readInt(1,100000);
    inf.readSpace();
    int m = inf.readInt(1,1000000);
    inf.readSpace();
    int k = inf.readInt(1,n);
    inf.readEoln();
    set<pair<int,int> > s;
    for (int i = 0; i < m; i++){
	int a = inf.readInt(0,n-1);
        inf.readSpace();
        int b = inf.readInt(0,n-1);
        inf.readSpace();
        inf.readInt(1,1000000000);
        inf.readEoln();
        if (a > b) swap(a,b);
        if (a == b) quitf(_fail,"LOOP!");
        if (s.find(make_pair(a,b)) != s.end()) quitf(_fail,"muultiple edge");
        s.insert(make_pair(a,b));
    }
    
    for (int i = 0; i < k; i++){
	inf.readInt(1,n);
        if (i != k-1)
           inf.readSpace();
    } 
    inf.readEoln();
    inf.readEof();
    return 0;
}