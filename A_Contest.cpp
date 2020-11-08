// 501A 
// Author: REET

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    float a, b, c, d;
    float mpts;
    float vpts;
    cin >> a >> b >> c >> d;
    mpts = max((3*a)/10,a-((a/250)*c));
    vpts = max((3*b)/10,b-((b/250)*d));
    if(mpts==vpts) {
        cout << "Tie\n";
        return 0;
    }
    mpts>vpts ? cout << "Misha\n" : cout << "Vasya\n";
    return 0;
}