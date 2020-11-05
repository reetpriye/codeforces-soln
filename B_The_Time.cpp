// 622B 
// Author: REET

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    string s;
    int ori_hr;
    int ori_mi;
    int hr;
    int mi;
    cin >> s;
    cin >> mi;
    // Extracting hours and minutes
    ori_hr = stoi(s.substr(0,2));
    ori_mi = stoi(s.substr(3,2));
    // Calculating minutes
    ori_mi += mi;
    // Calculating hours to be incremented
    hr = ori_mi/60;
    ori_mi %= 60;
    // Increment hour a/c to minutes
    ori_hr += hr;
    // Calculating hours
    ori_hr %= 24;
    printf("%02d:%02d\n", ori_hr, ori_mi);
    return 0;
}