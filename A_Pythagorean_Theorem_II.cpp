// 304A 
// Author: REET

#include <bits/stdc++.h>
using namespace std;

#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL)
#define mine(a) (*min_element((a).begin(), (a).end()))
#define maxe(a) (*max_element((a).begin(), (a).end()))

typedef long long ll;

int main() {
    FAST_IO;

    float n;
    cin >> n;
    float c;
    int cnt = 0;
    for(float a=1; a<n; a++) {
        for(float b=a; b<n; b++) {
            c = sqrt(((a*a)+(b*b)));
            if(c==floor(c) && c<=n)
                cnt++;
        }
    }
    cout << cnt;
    return 0;
}