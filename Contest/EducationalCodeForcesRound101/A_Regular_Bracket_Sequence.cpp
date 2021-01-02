//  
// Author: REET

#include <bits/stdc++.h>
using namespace std;

#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL)

typedef long long ll;

int main() {
    FAST_IO;

    int T;
    cin >> T;
    while(T--) {
        string s;
        cin >> s;
        int flag = 0;
        int o = 0;
        int c = 0;
        int ques = 0;
        stack<int> st;
        if((s.size()%2)!=0) {
            cout << "NO\n";
            continue;
        }
        for(int i=0; i<s.size(); i++) {
            if(s[i]=='(') {
                o++;
                st.push(0);
            }
            else if(s[i]==')') {
                c++;
                if(st.empty()) {
                    flag = 1;
                }
                else
                    st.pop();
            }
            else {
                ques++;
                if(st.empty())
                    st.push(0);
                else
                    st.pop();
            }
        }
        if((ques+o) == c) {
            cout << "YES\n";
        }
        else if((ques+c) == o) {
            cout << "YES\n";
        }
        else if((flag==1) || (!st.empty()))
            cout << "NO\n";
        else
            cout << "YES\n";
    }
    return 0;
}