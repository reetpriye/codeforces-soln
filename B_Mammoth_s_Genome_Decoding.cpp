// 747B 
// Author: REET

#include <bits/stdc++.h>
using namespace std;

#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL)

typedef long long ll;

int main() {
    FAST_IO;

    int n;
    string s;
    int cnt_a = 0;
    int cnt_g = 0;
    int cnt_c = 0;
    int cnt_t = 0;
    int cnt_q = 0;
    int maxi = INT_MIN;
    cin >> n;
    cin >> s;
    for(int i=0; i<n; i++) {
        if(s[i]=='A')
            cnt_a++;
        else if(s[i]=='G')
            cnt_g++;
        else if(s[i]=='C')
            cnt_c++;
        else if(s[i]=='T')
            cnt_t++;
        else cnt_q++;
    }
    maxi = max(cnt_a,max(cnt_g,max(cnt_c,cnt_t)));
    
    for(int i=0; i<n; i++) {
        
    }
    return 0;
}