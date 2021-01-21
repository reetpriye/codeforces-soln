// 296A 
// Author: REET

#include <bits/stdc++.h>
using namespace std;

#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL)
#define mine(a) (*min_element((a).begin(), (a).end()))
#define maxe(a) (*max_element((a).begin(), (a).end()))

typedef long long ll;

int main() {
    FAST_IO;

    int n;
    int q;
    cin >> n;
    bool flag = 0;
    vector<int> hashTable(1001);
    vector<int> v(n);
    for(int i=0; i<n; i++) {
        cin >> v[i];
        hashTable[v[i]]++;
    }
    n&1 ? q=(n/2)+1 : q=n/2;
    for(int i=1; i<1001; i++) {
        if(hashTable[i]>q) {
            flag = 1;
            break;
        }
    }
    flag ? cout << "NO" : cout << "YES";
    return 0;
}