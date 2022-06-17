/* Not checked if no three point on any line */

#include <iostream>
#include "testlib.h"

using namespace std;

const int MAXC = 2000000000;

struct point {
    int x, y;
    point(int x,int y):x(x), y(y){
    }
    point(){}
};

vector< point > v;


point readPoint(int lx, int rx, int ly, int ry){
    int x = inf.readInt(lx, rx);
    inf.readSpace();
    int y = inf.readInt(ly, ry);
    inf.readEoln();
    return point(x, y);
}

int readSet(int id){
    int n = inf.readInt(1, 50000);
    inf.readEoln();
    int s;
    if (id == 1){
        v.push_back(readPoint(0, 0, 0, 0));
        v.push_back(readPoint(1, MAXC, 0, 0));
        s = v.back().x;
    } else {
        v.push_back(readPoint(0, 0, 1, MAXC));
        s = v.back().y;
        v.push_back(readPoint(s, s, s, s));
    }
    for (int j = 2; j < n; j++)
        v.push_back(readPoint(1, s-1, 1, s-1));
    return s;
}

bool cmpxy(const point& a, const point& b){
    if (a.y != b.y) return a.y < b.y;
    return a.x < b.x;
}

inline long long operator*(const point& a, const point& b){
    return a.x * 1LL * b.y  - a.y * 1L * b.x;
}

inline bool cmpang(const point& a, const point& b){
    return a*b > 0;
}

int main(){
    registerValidation();
    int s = readSet(0);
    int s2 = readSet(1);
    ensure(s == s2);

    int n = v.size();

    /*for (int i = 0; i < n; i++){                     
        swap(*min_element(v.begin()+i, v.end(),cmpxy), v[i]);
        for (int j = i; j < n; j++)
           v[j].x -= v[i].x, v[j].y -= v[i].y;
        stable_sort(v.begin()+i+1, v.end(), cmpang);
        for (int j = i+2; j < n; j++)
            if (v[j-1] * v[j] == 0)
                quitf(_fail, "three points are colinear");
    }*/

    inf.readEof();
    return 0;
}