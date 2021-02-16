//  
// Author: REET

#include <bits/stdc++.h>
using namespace std;

#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL)
#define mine(a) (*min_element((a).begin(), (a).end()))
#define maxe(a) (*max_element((a).begin(), (a).end()))

typedef long long ll;

int main() {
    FAST_IO;

    int T;
    cin >> T;
    while(T--) {
        int n;
        cin >> n;
        if(n&1) {
            int rep = ((n*(n-1))/2);
            for(int i=0; i<rep; i++) {
                if(i%2==0)
                    cout << "1 ";
                else cout << "-1 ";
            }
            cout << "\n";
        }
        else {
            vector<pair<int, int>> vp;
            int num = (n-2)/2;
            int rep = ((n*(n-1))/2);
            vector<int> hash(101, num);
            int x = 1;
            int z;
            while(x<n) {
                z = x+1;
                while(z<=n) {
                    vp.push_back(make_pair(x, z));
                    z++;
                }
                x++;
            }
            int a = 1, b = n/2+1;
            for(int i=0; i<vp.size(); i++) {
                if(vp[i].first==a && vp[i].second==b) {
                    cout << "0 ";
                    a++;
                    b++;
                }
                else if(hash[vp[i].first]>0) {
                    cout << "1 ";
                    hash[vp[i].first]--;
                }
                // else if(hash[vp[i].second]>0) {
                else {
                    cout << "-1 ";
                    hash[vp[i].second]--;
                }
            }
            cout << "\n";
        }
    }
    return 0;
}