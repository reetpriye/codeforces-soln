// 445A 
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
    cin >> n >> m;
    vector<string> v(n);
    for(int i=0; i<n; i++)
        cin >> v[i];
    for(int i=0; i<n; i++)
        for(int j=0; j<m; j++)
            if(v[i][j]!='-') 
                !((i+j)&1) ? v[i][j] = 'B' : v[i][j] = 'W';
    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++)
            cout << v[i][j];
        cout << "\n";
    }
    return 0;
}