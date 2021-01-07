// 1176B
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
    while (T--) {
        int n;
        int tmp;
        int cnt = 0;
        int one = 0;
        int two = 0;
        cin >> n;
        for (int i = 0; i < n; i++) {
            cin >> tmp;
            if(tmp%3==0)
                cnt++;
            else if(tmp%3==1)
                one++;
            else
                two++;
        }
        cnt += min(one, two);
        one -= min(one, two);
        two -= min(one, two);
        if(one!=0) {
            cnt += (one/3);
        }
        if(two!=0) {
            cnt += ((two*2)/6);
        }
        cout << cnt << "\n";
    }
    return 0;
}