// 272A 
// Author: REET

#include <bits/stdc++.h>
using namespace std;

#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL)

typedef long long ll;

int main() {
    FAST_IO;

    int n;
    int sum = 0;
    int res = 0;
    int tmp;
    cin >> n;
    for(int i=0; i<n; i++) {
        cin >> tmp;
        sum += tmp;
    }
    for(int i=1; i<=5; i++) {
        if(((sum+i-1)%(n+1))!=0)
            res++;
    }
    cout << res;
    return 0;
}