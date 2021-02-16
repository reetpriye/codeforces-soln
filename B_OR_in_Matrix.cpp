// 486B 
// Author: REET

#include <bits/stdc++.h>
using namespace std;

#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL)
#define mine(a) (*min_element((a).begin(), (a).end()))
#define maxe(a) (*max_element((a).begin(), (a).end()))

typedef long long ll;

void print(vector<vector<int>> v) {
    cout << "YES\n";
    for(int i=0; i<v.size(); i++) {
        for(int j=0; j<v[i].size(); j++) {
            cout << v[i][j] << " ";
        }
        cout << "\n";
    }
}

// bool compare(vector<vector<int>> a, vector<vector<int>> b) {
//     for(int i=0; i<a.size(); i++) {
//         for(int j=0; j<a[i].size(); j++) {
//             if(a[i][j]!=b[i][j])
//                 return false;
//         }
//     }
//     return true;
// }

int main() {
    FAST_IO;

    int n;
    int m;
    int tmp;
    cin >> n >> m;
    vector<vector<int>> v(n);
    vector<vector<int>> r(n, vector<int> (m, 1));
    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {
            cin >> tmp;
            v[i].push_back(tmp);
        }
    }
    // If we encounter 0 make all the 
    // row and column elements as 0
    int y;
    int z;
    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {
            z = 0;
            y = 0;
            if(v[i][j]==0) {
                while(z<m) {
                    r[i][z++] = 0;
                }
                while(y<n) {
                    r[y++][j] = 0;
                }
            }
        }
    }
    // Build o from r and cross check with v
    vector<vector<int>> o(n, vector<int> (m));
    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {
            z = 0;
            y = 0;
            if(r[i][j]==1) {
                while(z<m) {
                    o[i][z++] = 1;
                }
                while(y<n) {
                    o[y++][j] = 1;
                }
            }
        }
    }
    if(o==v)
        print(r);
    else cout << "NO";
    return 0;
}