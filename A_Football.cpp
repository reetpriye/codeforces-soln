// 43A
// Author: REET

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	int k = 0;
	int max = 1;
	string res;
	string tmp;
	cin >> n;
	vector<pair<int, string>> v;
	for(int i=0; i<n; i++) {
		cin >> tmp;
		if(v.size()==0)
			v.push_back(make_pair(1,tmp));
		for(int j=0; j<v.size(); j++) {
			if(v[j].second==tmp) {
				v[j].first++;
				if(v[j].first>max) {
					max = v[j].first;
					res = v[j].second;
				}
				break;
			}
			else v.push_back(make_pair(1,tmp));
		}
	}
	cout << res << "\n";
	return 0;
}