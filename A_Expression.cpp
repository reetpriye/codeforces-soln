// 479A 
// Author: REET

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    int a;
    int b;
    int c;
    int tmp;
    vector<int> v;
    cin >> a >> b >> c;
    tmp = a*b*c;
    v.push_back(tmp);
    tmp = a+b+c;
    v.push_back(tmp);
    tmp = a*b+c;
    v.push_back(tmp);
    tmp = a*(b+c);
    v.push_back(tmp);
    tmp = a+b*c;
    v.push_back(tmp);
    tmp = (a+b)*c;
    v.push_back(tmp);
    cout << *max_element(v.begin(), v.end()) << "\n";
    return 0;
}