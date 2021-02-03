// 447B 
// Author: REET

#include <bits/stdc++.h>
using namespace std;

#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL)
#define mine(a) (*min_element((a).begin(), (a).end()))
#define maxe(a) (*max_element((a).begin(), (a).end()))

typedef long long ll;

int main() {
    FAST_IO;

    string s;
    vector<int> score(27);
    int res = 0;
    int maxi = INT_MIN;
    int k;
    int idx;
    int z = 0;
    cin >> s;
    cin >> k;
    score[0] = -1;
    for(int i=1; i<27; i++) {
        cin >> score[i];
        maxi = max(maxi, score[i]);
    }
    for(int i=0; i<s.size(); i++) {
        idx = (s[i]-'a'+1);
        res += (score[idx]*(i+1));
    }
    for(int i=s.size()+1; i<=s.size()+k; i++)
        res += (i*maxi);
    cout << res;
    return 0;
}