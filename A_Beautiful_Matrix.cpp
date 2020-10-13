// 263A 
// Author: REET

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    int index_i;
    int index_j;
    int v[5][5];
    for(int i=0; i<5; i++) {
        for(int j=0; j<5; j++) {
            cin>>v[i][j];
        }
    }
    for(int i=0; i<5; i++) {
        for(int j=0; j<5; j++) {
            if(v[i][j]==1) {
                index_i = i;
                index_j = j;
                break;
            }
        }
    }
    cout << abs(index_i-2)+abs(index_j-2) << endl;
    return 0;
}