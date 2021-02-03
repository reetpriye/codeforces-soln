// 508B 
// Author: REET
 
#include <bits/stdc++.h>
using namespace std;
 
#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL)
#define mine(a) (*min_element((a).begin(), (a).end()))
#define maxe(a) (*max_element((a).begin(), (a).end()))
 
typedef long long ll;
 
int main() {
    FAST_IO;
 
    string s;
    int digit;
    int swapIdx;
    cin >> s;
    bool isOdd = true;
    int lastEven;
    bool swapValueFound = false;
    for(int i=0; i<s.size(); i++) {
        digit = s[i]-'0';
        if(!(digit&1)) {
            lastEven = i;
            isOdd = false;
        }
        if(!swapValueFound && (!(digit&1)) && (digit<(s.back()-'0'))) {
            swapIdx = i;
            swapValueFound = true;
        }
    }
    if(isOdd) {
        cout << "-1";
        return 0;
    }
    if(swapValueFound) {
        swap(s.back(), s[swapIdx]);
        cout << s;
    }
    else {
        swap(s.back(), s[lastEven]);
        cout << s;
    }
    return 0;
}