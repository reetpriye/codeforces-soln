// 285B 
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
    int s;
    int t;
    bool elfound = true;
    cin >> n >> s >> t;
    vector<int> v(n);
    for(int i=0; i<n; i++)
        cin >> v[i];
    if(s==t) {
        cout << "0";
        return 0;
    }
    int cnt = 0;
    while(1) {
        if(n==0) {
            elfound = false;
            break;
        }
        if(s==t)
            break;
        s = v[s-1];
        cnt++;
        n--;
    }
    cout << (elfound ? cnt : -1);
    return 0;
}