// 160B 
// Author: REET

#include <bits/stdc++.h>
using namespace std;

#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL)
#define mine(a) (*min_element((a).begin(), (a).end()))
#define maxe(a) (*max_element((a).begin(), (a).end()))

typedef long long ll;

int main() {
    FAST_IO;

    int n;
    string s;
    int a;
    int b;
    bool flag = false;
    cin >> n;
    cin >> s;
    sort(s.begin(), s.begin()+n);
    sort(s.begin()+n, s.end());
    a = 0;
    b = n;
    if(s[a]==s[b])
        goto end;
    else if(s[a]>s[b]) {
        while(1) {
            if(a==n && b==2*n) {
                flag = true;
                goto end;
            }
            if(s[a]>s[b]) {
                a++;
                b++;
            }
            else break;
        }
    }
    else {
        while(1) {
            if(a==n && b==2*n) {
                flag = true;
                goto end;
            }
            if(s[a]<s[b]) {
                a++;
                b++;
            }
            else break;
        }
    }
    end: flag ? cout << "YES" : cout << "NO";
    return 0;
}