// 514B 
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
    cin >> n;
    int ox, oy;
    int a, b;
    int xdiff, ydiff;
    bool diagleft=false; 
    bool diagright=false;
    bool yaxis=false; 
    bool xaxis=false;
    int res = 0;
    cin >> ox >> oy;
    for(int i=0; i<n; i++) {
        cin >> a >> b;
        xdiff = abs(a-ox);
        ydiff = abs(b-oy);
        // Diagonal cases
        if(a>ox && b>oy && xdiff==ydiff) {
            diagright = true;
        }
        else if(a<ox && b<oy && xdiff==ydiff) {
            diagright = true;
        }
        else if(a>ox && b<oy && xdiff==ydiff) {
            diagleft = true;
        }
        else if(a<ox && b>oy && xdiff==ydiff) {
            diagleft = true;
        }
        // X-axis cases
        else if(ydiff==0 && xdiff>0) {
            xaxis = true;
        }
        else if(ydiff==0 && xdiff<0) {
            xaxis = true;
        }
        // Y-axis cases
        else if(xdiff==0 && ydiff<0) {
            yaxis = true;
        }
        else if(xdiff==0 && ydiff>0) {
            yaxis = true;
        }
        else res++;
    }
    if(xaxis) res++;
    if(yaxis) res++;
    if(diagleft) res++;
    if(diagright) res++;
    cout << res;
    return 0;
}