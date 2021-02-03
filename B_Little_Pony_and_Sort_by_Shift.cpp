// 454B 
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
    cin >> n;
    int idx, z , y;
    int a = 0;
    int cnt = 0;
    bool alreadySorted = true;
    bool flag = true;
    vector<int> v(n);
    vector<int> s(n);
    for(int i=0; i<n; i++)
        cin >> v[i];
    s = v;
    sort(s.begin(), s.end());
    for(int i=0; i<n-1; i++) {
        if(v[i+1]<v[i]) {
            alreadySorted = false;
            break;
        }
    }
    if(alreadySorted) {
        cout << "0";
        return 0;
    }
    for(int i=0; i<n-1; i++) {
        if(v[i+1]<v[i]) {
            z = i+1;
            y = i;
            cnt = n-z;
            while(z!=y) {
                if(s[a]!=v[z]) {
                    flag = false;
                    goto end;
                }
                a++;
                z++;
                if(z>n-1)
                    z = 0;
            }
        }
    }
    end:
        if(!flag) cout << "-1";
        else cout << cnt;
    return 0;
}