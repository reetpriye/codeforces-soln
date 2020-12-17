    // 1011A 
    // Author: REET

    #include <bits/stdc++.h>
    using namespace std;

    #define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL)

    typedef long long ll;

    int main() {
        FAST_IO;

        int n;
        int k;
        string s;
        int z = 1; // For while loop
        int res = 0; // Result sum
        vector<bool> v(27);
        cin >> n >> k;
        cin >> s;
        sort(s.begin(), s.end());
        for(int i=0; i<n; i++) {
            if(!v[s[i]-97])
                v[s[i]-97+1] = true;
        }
        while(z<27) {
            if(v[z] && k) {
                res += z;
                k--;
            }
            z++;
        }
        k>0 ? cout << -1 : cout << res;
        return 0;
    }
