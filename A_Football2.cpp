// 96A 
// Author: REET

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
	string s;
	int cnt = 1;
	cin >> s;
	for(int i=0; i<s.size()-1; i++) {
		if(s[i]==s[i+1]) {
			cnt++;
			if(cnt>=7) {
				cout << "YES" << endl;
				return 0;
			}
		}
		else cnt = 1;
	}
	cout << "NO" << endl;
	return 0;
}