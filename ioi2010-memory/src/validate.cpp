#include <iostream>
#include "testlib.h"

using namespace std;

int main(){
    registerValidation();
    string s = inf.readLine("[A-Y]{50}");
    sort(s.begin(),s.end());
    for (int i = 0; i < 50; i++)
        ensure(s[i] == 'A' + i/2);

    inf.readEof();
    return 0;
}