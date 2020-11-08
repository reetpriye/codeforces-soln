// 876A 
// Author: REET

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
/*
Firstly, he is in the Rabbit's house
*/
int main() {
    int n;
    int i = 0;
    vector<int> v(3);
    // v[0] -> Rabbit's and Owl's
    // v[1] -> Rabbit's and Eeyore's
    // v[2] -> Owl's and Eeyore's
    ll dis = 0;
    cin >> n;
    cin >> v[0] >> v[2] >> v[1];
    sort(v.begin(), v.begin()+1);
    
    while(--n) {
        if(i==3)
            i = 0;
        dis += v[i];
        i++;
    }
    cout << dis << "\n";
    return 0;
}