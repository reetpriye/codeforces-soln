//  
// Author: REET

#include <bits/stdc++.h>
using namespace std;

#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL)
#define mine(a) (*min_element((a).begin(), (a).end()))
#define maxe(a) (*max_element((a).begin(), (a).end()))

typedef long long ll;

int main() {
    FAST_IO;

    ll n;
    cin >> n;
    // string whoIsLast;
    bool firstIsLast;
    vector<ll> first;
    vector<ll> second;
    ll tmp;
    for(ll i=0; i<n; i++) {
        cin >> tmp;
        if(tmp<0)
            firstIsLast = false;
        else
            firstIsLast = true;
        tmp<0 ? second.push_back(abs(tmp)) : first.push_back(tmp);
    }
    ll Fsum = accumulate(first.begin(), first.end(), 0);
    ll Ssum = accumulate(second.begin(), second.end(), 0);
    if(Fsum!=Ssum)
        cout << (Fsum > Ssum ? "first" : "second");
    else {
        for(ll i=0; i<min(first.size(), second.size()); i++) {
            if(first[i]>second[i]) {
                cout << "first";
                return 0;
            }
            else if(second[i]>first[i]) {
                cout << "second";
                return 0;
            }
        }
        if(first.size()!=second.size())
            cout << (first.size() > second.size() ? "first" : "second");
        else 
            cout << (firstIsLast ? "first" : "second");
    }
    return 0;
}