    // 469B 
    // Author: REET

    #include <bits/stdc++.h>
    using namespace std;

    #define F first
    #define S second
    #define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL)
    #define mine(a) (*min_element((a).begin(), (a).end()))
    #define maxe(a) (*max_element((a).begin(), (a).end()))

    typedef long long ll;

    bool checkOverlap(vector<pair<int, int>> x, vector<pair<int, int>> z) {
        for(int i=0; i<z.size(); i++) {
            for(int j=0; j<x.size(); j++) {
                if(x[j].F>z[i].S)
                    break;
                if(x[j].F>=z[i].F && x[j].F<=z[i].S)
                    return true;
                if(x[j].S>=z[i].F && x[j].S<=z[i].S)
                    return true;
                if(x[j].F<=z[i].F && x[j].S>=z[i].S)
                    return true;
            }
        }
        return false;
    }

    int main() {
        FAST_IO;

        int p;
        int q;
        int l;
        int r;
        cin >> p >> q >> l >> r;
        vector<pair<int, int>> z(p);
        vector<pair<int, int>> x(q);
        for(int i=0; i<p; i++) {
            cin >> z[i].F >> z[i].S;
        }
        for(int i=0; i<q; i++) {
            cin >> x[i].F >> x[i].S;
        }
        int res = 0;
        vector<pair<int, int>> orix;
        orix = x;
        for(int pos=l; pos<=r; pos++) {
            x = orix;
            for(int j=0; j<x.size(); j++) {
                x[j].F += pos;
                x[j].S += pos;
            }
            if(checkOverlap(x, z)) {
                res++;
            }
        }
        cout << res;
        return 0;
    }