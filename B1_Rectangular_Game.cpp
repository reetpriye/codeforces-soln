// 177B1 
// Author: REET

#include <bits/stdc++.h>
using namespace std;

#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL)

typedef long long ll;

int main() {
    FAST_IO;

    ll n;
    ll sum = 0;
    int flag;
    cin >> n;
    sum += n;
    while(n!=1) {
        if(n%2==0) {
            n /= 2;
            sum += n;
        }
        else if(n%3==0) {
            n /= 3;
            sum += n;
        }
        else if(n%5==0) {
            n /= 5;
            sum += n;
        }
        else {
            flag = 0;
            for(int i=7; i*i<=n; i++) {
                if(n%i==0) {
                    flag = 1;
                    n /= i;
                    sum += n;
                    break;
                }
            }
            if(flag==0) {
                sum++;
                break;
            }
        }
    }
    cout << sum;
    return 0;
}