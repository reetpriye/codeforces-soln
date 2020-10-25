// 760A 
// Author: REET

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    vector<float> md = {31,30,31,30,31,30,31,31,30,31,30,31};
    // Monday to Sunday
    float m;
    float d;
    cin >> m >> d;
    cout << ceil((md[m-1]+(d-1))/7) << endl;
    return 0;
}