// 1138A 
// Author: REET

#include <bits/stdc++.h>
using namespace std;

#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL)

typedef long long ll;

int main() {
    FAST_IO;

    int n;
    int i = 0;
    int cnt_a;
    int cnt_b;
    int comp;
    cin >> n;
    int max = INT_MIN;
    vector<int> v(n);
    for(int i=0; i<n; i++)
        cin >> v[i];
    while(i<n-1) {
        cnt_a = 0;
        cnt_b = 0;
        while(v[i]==v[i+1] && i<n-1) {
            cnt_a++;
            i++;
        }
        cnt_a++;
        i++;
        while(v[i]==v[i+1] && i<n-1) {
            cnt_b++;
            i++;
        }
        cnt_b++;
        i++;
        cnt_a > cnt_b ? comp = cnt_b : comp = cnt_a;
        if(comp>max)
            max = comp;
    }
    cout << 2*max;
    return 0;
}