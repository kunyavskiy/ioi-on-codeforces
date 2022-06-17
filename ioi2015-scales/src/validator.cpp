#include "testlib.h"
#include <iostream>
#include <fstream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <set>
#include <map>
#include <stack>
#include <queue>
#include <cstdlib>
#include <cstdio>
#include <string>
#include <cstring>
#include <cassert>
#include <utility>
#include <iomanip>

using namespace std;

int tn;
int a[10];
set <int> st;

int main()
{
    registerValidation();
    
    tn = inf.readInt(1, 18, "tn");

    while (tn--) {
        inf.readEoln();

        st.clear();
        for (int i = 1; i <= 6; i++) {
            if (i > 1)
                inf.readSpace();
            a[i] = inf.readInt(1, 6, format("a[%d]", i));
            st.insert(a[i]);
        }

        ensuref((int) st.size() == 6, "Not all values are different");
    }

    inf.readEoln();
    inf.readEof();
    
    return 0;
}
