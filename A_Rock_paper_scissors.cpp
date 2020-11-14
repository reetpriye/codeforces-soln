// 48A 
// Author: REET

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    bool isPaperPresent = false;
    bool isRockPresent = false;
    bool isScissorPresent = false;
    vector<string> v(3);
    cin >> v[0] >> v[1] >> v[2];
    if(v[0]==v[1] && v[1]==v[2]) {
        cout << "?\n";
        return 0;
    }
    for(int i=0; i<3; i++) {
        if(v[i]=="rock")
            isRockPresent = true;
        else if(v[i]=="scissors")
            isScissorPresent = true;
        else isPaperPresent = true;
    }
    for(int i=0; i<3; i++) {
        if(isRockPresent && isPaperPresent && isScissorPresent) {
            cout << "?\n";
            return 0;
        }
        else if(isRockPresent && isScissorPresent) {
            if(v[i]=="rock")
                v[i]="2";
            else 
                v[i]="1";
        }
        else if(isScissorPresent && isPaperPresent) {
            if(v[i]=="scissors")
                v[i]="2";
            else 
                v[i]="1";
        }
        else if(isPaperPresent && isRockPresent) {
            if(v[i]=="paper")
                v[i]="2";
            else 
                v[i]="1";
        }
    }
    if(v[0]>v[1] && v[0]>v[2]) {
        cout << "F\n";
    }
    else if(v[1]>v[0] && v[1]>v[2]) {
        cout << "M\n";
    }
    else if(v[2]>v[0] && v[2]>v[1]) {
        cout << "S\n";
    }
    else cout << "?\n";
    
}
// Rock > Scissors
// Scissors > Paper
// Paper > Rock