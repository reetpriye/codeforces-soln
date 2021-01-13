// 431B 
// Author: REET

#include <bits/stdc++.h>
using namespace std;

#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL)
#define mine(a) (*min_element((a).begin(), (a).end()))
#define maxe(a) (*max_element((a).begin(), (a).end()))

typedef long long ll;

int main() {
    FAST_IO;

    int tmp;
    vector<vector<int>> v(5);
    for(int i=0; i<5; i++) {
        for(int j=0; j<5; j++) {
            cin >> tmp;
            v[i].push_back(tmp);
        }
    }
    
    return 0;
}