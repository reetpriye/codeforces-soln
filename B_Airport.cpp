// 218B 
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
    int m;
    int q;
    int max = 0;
    int min = 0;
    int z = 0;
    cin >> n;
    cin >> m;
    vector<int> v(m);
    vector<int> t(m);
    for(int i=0; i<m; i++)
        cin >> v[i];
    t = v;
    sort(v.begin(), v.end());
    q = n;
    while(1) {
        if(q==0)
            break;
        while(v[z]!=0) {
            if(q==0)
                break;
            min += v[z];
            v[z]--;
            q--;
        }
        z++;
    }
    v = t;
    sort(v.begin(), v.end(), greater<int>());
    vector<int> hashTable(1001);
    for(int i=0; i<m; i++) {
        for(int j=1; j<=v[i]; j++) {
            hashTable[j]++;
        }
    }
    q = n;
    while(1) {
        if(q==0)
            break;
        for(int i=1000; i>=1; i--) {
            if(q==0)
                break;
            while(hashTable[i]!=0) {
                if(q==0)
                    break;
                max += i;
                hashTable[i]--;
                q--;
            }
        }
    }
    cout << max << " " << min;
    return 0;
}