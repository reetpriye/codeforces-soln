//  
// Author: REET
 
#include <bits/stdc++.h>
using namespace std;
 
#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL)
#define mine(a) (*min_element((a).begin(), (a).end()))
#define maxe(a) (*max_element((a).begin(), (a).end()))
 
typedef long long int ll;
 
int main() {
    FAST_IO;
 
    int T;
    cin >> T;
    while(T--) {
        int n;
        int m;
        string s;
        string t;
        int start;
        int end;
        int x = 0;
        int res;
        int min = 0;
        int max = 0;
        cin >> n >> m;
        cin >> s;
        vector<pair<int, int>> v(m);
        for(int i=0; i<m; i++) {
            cin >> v[i].first >> v[i].second;
        }
        for(int i=0; i<m; i++) {
            res = 1;
            x = 0;
            t = s;
            min = 0;
            max = 0;
            start = v[i].first-1;
            end = v[i].second-v[i].first+1;
            t = t.erase(start, end);
            for(int j=0; j<t.size(); j++) {
                if(t[j]=='+') {
                    x++;
                    if(x>max) {
                        res++;
                        max = x;
                    }
                }
                else {
                    x--;
                    if(x<min) {
                        res++;
                        min = x;
                    }
                }
            }
            cout << res << "\n";
        }
    }
    return 0;
}