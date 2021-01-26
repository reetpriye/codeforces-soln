// 451B 
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
    int st, en;
    int sti, eni;
    int z;
    bool found = true;
    bool alreadySorted = true;
    cin >> n;
    vector<int> v(n);
    vector<int> s(n);
    for(int i=0; i<n; i++)
        cin >> v[i];
    s = v;
    sort(s.begin(), s.end());
    for(int i=0; i<n; i++) {
        if(v[i]!=s[i])
            alreadySorted = false;
    }
    if(alreadySorted) {
        cout << "yes\n1 1";
        return 0;
    }
    for(int i=0; i<n; i++) {
        if(v[i]!=s[i]) {
            st = i;
            sti = i+1;
            z = i+1;
            while(v[z]!=s[i] && z<n) {
                z++;
            }
            en = z;
            eni = z+1;
            while(en>=i) {
                if(v[en]!=s[st]) {
                    found = false;
                    goto end;
                }
                en--;
                st++;
            }
            goto end;
        }
    }
    end: found ? cout << "yes\n" << sti << " " << eni : cout << "no\n";
    return 0;
}