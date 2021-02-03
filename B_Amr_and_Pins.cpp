// 507B
// Author: REET

#include <bits/stdc++.h>
using namespace std;

#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL)
#define mine(a) (*min_element((a).begin(), (a).end()))
#define maxe(a) (*max_element((a).begin(), (a).end()))

typedef long long ll;

int main() {
    FAST_IO;

    double r, x, y, x1, y1;
    cin >> r >> x >> y >> x1 >> y1;
    double x_diff = abs(x1-x);
    double y_diff = abs(y1-y);
    double dis = sqrt(pow(x_diff, 2)+pow(y_diff, 2));
    cout << ceil(dis/(r*2));
    return 0;
}