#include <iostream>
#include "testlib.h"

using namespace std;

int main(){
    registerValidation();
    int n = inf.readLine("[.\\\\/]{1,30}").size();
    for (int i = 1; i < n; i++)
        inf.readLine("[.\\\\/]{"+vtos(n)+"}");
    inf.readEof();
    return 0;
}