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
    bool flag;
    while(T--) {
        int q;
        int d;
        int tmp;
        cin >> q >> d;
        for(int i=0; i<q; i++) {
            cin >> tmp;
            if(tmp>=10*d)
                cout << "YES\n";
            else {
                flag = false;
                while(tmp>=d) {
                    if(tmp%10==d || tmp%d==0) {
                        flag = true;
                        break;
                    }
                    tmp -= d;
                }
                flag ? cout << "YES\n" : cout << "NO\n";
            }
        }
    }
    return 0;
}