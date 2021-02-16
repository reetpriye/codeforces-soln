//  
// Author: REET
 
#include <bits/stdc++.h>
using namespace std;
 
#define mine(a) (*min_element((a).begin(), (a).end()))
#define maxe(a) (*max_element((a).begin(), (a).end()))
 
typedef long long ll;
 
int main() {
 
    int n;
    cin >> n;
    vector<int> v(n);
    int z = 0;
    while(z<100 && z<n) {
        cout << "? " << z+1;
        cout << endl;
        cout.flush();
        cin >> v[z];
        if(n==1)
            cout << "! " << z+1 << endl;
        if(n==2 && z==1) {
            if(v[0]>v[1]) {
                cout << "! 2" <<endl; 
            }
            else cout << "! 1" << endl;
        }
        if(z>3) {
            if(v[z-2]<min(v[z-1], v[z-3])) {
                cout << "! " << z-1 << endl;
                break;
            }
        }
        z++;
    }
    
    return 0;
}