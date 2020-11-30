// 1418A 
// Author: REET

#include <bits/stdc++.h>
using namespace std;

#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL)

typedef long long ll;

int main() {
    FAST_IO;

    int T;
    cin >> T;
    while(T--) {
        int x;
        int y;
        int k;
        ll sticks_req;
        ll no_of_trades;
        cin >> x >> y >> k;
        sticks_req = k*y+y;
        no_of_trades = sticks_req/x;
        cout << no_of_trades+k+1 << "\n";
    }
    return 0;
}

/*
2 1 5
Item Req -> 5 Sticks And 5 Coals
Total Req Sticks -> 5+5*1 = 10
No. of Trades -> 10/2 = 5
Total No. of Trades -> 5+5 = 10

42 13 24
Item Req -> 24 Sticks And 24 Coals
Total Req Sticks -> 24+13*24 = 336
No. of Trades -> 336/42 = 8
Total No. of Trades -> 8+24 = 32

12 11 12
Item Req -> 12 Sticks And 12 Coals
Total Req Sticks -> 12+11*12 = 144
No. of Trades -> 144/12 = 12
Total No. of Trades -> 12+12 = 24
*/