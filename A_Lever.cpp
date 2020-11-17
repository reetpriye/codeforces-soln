// 376A 
// Author: REET

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int i;
    int k = 1;
    int pivot = 0;
    ll left = 0;
    ll right = 0;
    string s;
    cin >> s;
    while(s[pivot]!='^') {
        pivot++;
    }
    i = pivot-1;
    while(i>=0) {
        if(s[i]!='=')
            left += ((int)(s[i]-48))*k;
        i--;
        k++;
    }
    i = pivot+1;
    k = 1;
    while(i<s.size()) {
        if(right>left) {
            cout << "right\n";
            return 0;
        }
        if(s[i]!='=')
            right += ((int)(s[i]-48))*k;
        i++;
        k++;
    }
    if(left==right)
        cout << "balance\n";
    else if(right>left)
        cout << "right\n";
    else 
        cout << "left\n";
    return 0;
}