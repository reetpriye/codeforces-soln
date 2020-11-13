// 801B 
// Author: REET

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
	string s1, s2, s3;
	cin >> s1 >> s2;
	for (int i = 0; i < s1.size(); i++){
		if (s2[i] > s1[i])return cout << -1 << endl, 0;
	}
	cout << s2 << endl;
	return 0;
}