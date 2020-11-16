// 616A 
// Author: REET

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int aidx = 0;
    int bidx = 0;
    string a;
    string b;
    cin >> a >> b;
    for(int i=0; i<a.size(); i++) {
        if(a[i]=='0') {
            aidx++;
        }
        else break;
    }
    for(int i=0; i<b.size(); i++) {
        if(b[i]=='0') {
            bidx++;
        }
        else break;
    }
    a.erase(a.begin(), a.begin()+aidx);
    b.erase(b.begin(), b.begin()+bidx);
    if(a.size()>b.size())
        cout << ">";
    else if(a.size()<b.size())
        cout << "<";
    else {
        for(int i=0; i<a.size(); i++) {
            if(a[i]>b[i]) {
                cout << ">";
                return 0;
            }
            else if(a[i]<b[i]) {
                cout << "<";
                return 0;
            }
        }
        cout << "=";
    }
    return 0;
}