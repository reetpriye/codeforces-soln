// 82A 
// Author: REET

#include <bits/stdc++.h>
using namespace std;

#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL)
#define mine(a) (*min_element((a).begin(), (a).end()))
#define maxe(a) (*max_element((a).begin(), (a).end()))

typedef long long ll;

int main() {
    FAST_IO;

    vector<string> v={"Sheldon", "Leonard", "Penny", "Rajesh", "Howard"};
    int n;
    cin >> n;
    int q = 5;
    int z = 5;
    int c = 1;
    while(q<n) {
        z *= 2;
        q += z;
        c *= 2;
    }
    q -= z;
    q++;
    cout << v[((n-q)/c)];
    return 0;
}