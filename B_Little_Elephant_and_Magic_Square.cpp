// 259B 
// Author: REET

#include <bits/stdc++.h>
using namespace std;

#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL)
#define mine(a) (*min_element((a).begin(), (a).end()))
#define maxe(a) (*max_element((a).begin(), (a).end()))

typedef long long ll;

int main() {
    FAST_IO;

    int a1, a2, a3;
    int b1, b2, b3;
    int c1, c2, c3;
    int inc = 0;
    int sum = 0;
    cin >> a1 >> a2 >> a3;
    cin >> b1 >> b2 >> b3;
    cin >> c1 >> c2 >> c3;
    vector<int> v(3);
    v[0] = a1+a2+a3;
    v[1] = b1+b2+b3;
    v[2] = c1+c2+c3;
    int maxi = max(v[0], max(v[1], v[2]));
    v[0] = abs(maxi-v[0]);
    v[1] = abs(maxi-v[1]);
    v[2] = abs(maxi-v[2]);
    sum = accumulate(v.begin(), v.end(), 0);
    while(sum != maxi+inc) {
        inc++;
        v[0]++;
        v[1]++;
        v[2]++;
        sum += 3;
    }
    cout << v[0] << " " << a2 << " " << a3 << "\n";
    cout << b1 << " " << v[1] << " " << b3 << "\n";
    cout << c1 << " " << c2 << " " << v[2] << "\n";
    return 0;
}