// 918A 
// Author: REET

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    int tmp = 0;
    int n;
    int i = 0;
    vector<int> v;
    vector<int> fs(1001);
    v.push_back(1);
    v.push_back(1);
    fs[1]++;
    fs[2]++;
    while(tmp<=1000) {
        tmp = v[i] + v[i+1];
        v.push_back(tmp);
        fs[tmp+1]++;
        i++;
    }
    i = 0;
    cin >> n;
    string s;
    for(int i=0; i<n; i++) {
        if(fs[i+1]==1)
            s += "O";
        else s += "o";
    }
    cout << s << endl;
    return 0;
}