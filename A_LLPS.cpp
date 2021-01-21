// 202A
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
    int cnt = 0;
    cin >> s;
    char a = 'a';
    for(int i=0; i<s.size(); i++) {
        if(s[i]>a)
            a = s[i];
    }
    for(int i=0; i<s.size(); i++) {
        if(s[i]==a)
            cnt++;
    }
    while(cnt--)
        cout << a;
    return 0;
}