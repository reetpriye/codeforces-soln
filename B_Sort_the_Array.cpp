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
    int start_idx;
    int end_idx;
    int start;
    int end;
    int tmp;
    int start_idx2;
    int end_idx2;
    cin >> n;
    vector<int> v(n);
    vector<int> s(n);
    bool isSorted = true;
    for(int i=0; i<n; i++)
        cin >> v[i];
    s = v;
    sort(s.begin(), s.end());
    for(int i=0; i<n; i++) {
        if(v[i]!=s[i]) {
            isSorted = false;
            break;
        }
    }
    if(isSorted) {
        cout << "yes\n1 1";
        return 0;
    }
    for(int i=0; i<n-1; i++) {
        if(v[i]>v[i+1]) {
            start = i+1;
            start_idx = i;
            start_idx2 = i;
            tmp = i;
            while(v[tmp]>v[tmp+1] && tmp<n-1) {
                tmp++;
            }
            end = tmp+1;
            end_idx = tmp;
            end_idx2 = tmp;
            while(end_idx>=start_idx2) {
                if(v[start_idx]!=s[end_idx]) {
                    isSorted = false;
                    goto end;
                }
                end_idx--;
                start_idx++;
            }
            break;
        }
    }
    for(int i=end_idx2+1; i<n; i++) {
        if(v[i]!=s[i]) {
            isSorted = false;
            goto end;
        }
    }
    isSorted = true;
    end:
        isSorted ? cout << "yes\n" << start << " " << end : cout << "no";
    return 0;
}