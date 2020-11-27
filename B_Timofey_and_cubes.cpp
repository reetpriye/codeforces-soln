// 764B 
// Author: REET

#include <bits/stdc++.h>
using namespace std;

#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL)

typedef long long ll;

int main() {
    FAST_IO;

    int i;
    int j;
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i=0; i<n; i++)
        cin >> v[i];
    i = 0;
    j = n-1;
    while(i<floor(n/2)) {
        if((i+1)%2!=0)
            swap(v[i], v[j]);
        i++;
        j--;
    }
    for(auto i:v)
        cout << i << " ";
    return 0;
}

/*
floor(n/2)+1 exchanges

7 - 4 Exchanges
[2, 3, 9, 6, 7, 1, 4]
[4, 1, 7, 6, 9, 3, 2]
[4, 3, 9, 6, 7, 1, 2]
[4, 3, 7, 6, 9, 1, 2]

[4, 3, 7, 6, 9, 1, 2]
[4, 3, 9, 6, 7, 1, 2]
[4, 1, 7, 6, 9, 3, 2]
[2, 3, 9, 6, 7, 1, 4]

8 - 5 Exchanges
[2, 1, 6, 2, 5, 4, 9, 6]
[6, 9, 4, 5, 2, 6, 1, 2]
[6, 1, 6, 2, 5, 4, 9, 2]
[6, 1, 4, 5, 2, 6, 9, 2]
[6, 1, 4, 2, 5, 6, 9, 2]

[6, 1, 4, 2, 5, 6, 9, 2]
[6, 1, 4, 5, 2, 6, 9, 2]
[6, 1, 6, 2, 5, 4, 9, 2]
[6, 9, 4, 5, 2, 6, 1, 2]
[2, 1, 6, 2, 5, 4, 9, 6]
*/