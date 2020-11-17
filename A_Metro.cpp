// 1055A 
// Author: REET

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    int s;
    int flag = 0;
    cin >> n >> s;
    vector<int> a(n);
    vector<int> b(n);
    for(int i=0; i<n; i++)
        cin >> a[i];
    for(int i=0; i<n; i++)
        cin >> b[i];
    if(a[0]==0)
        cout << "NO\n";
    else if(a[s-1]==1)
        cout << "YES\n";
    else if(b[s-1]==1) {
        while(s<n) {
            if(a[s]==1 && a[s]==b[s]) {
                flag = 1;
                break;
            }
            s++;
        }
        flag == 1 ? cout << "YES\n" : cout << "NO\n";
    }
    else cout << "NO\n";
    return 0;
}