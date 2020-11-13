// 234B
// Author: REET

#include <bits/stdc++.h>
using namespace std;

int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int n,k;
    cin>>n>>k;
    pair<int,int> ar[1001];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&ar[i].first);
        ar[i].second=i;
    }
    sort(ar,ar+n);
    reverse(ar,ar+n);
    int mn=2000000000;
    for(int i=k-1;i>=0;i--)
    {
        mn=min(mn,ar[i].first);
    }
    cout<<mn<<endl;
    vector<int>v;
    for(int i=k-1;i>=0;i--)
    {
        v.push_back(ar[i].second+1);
    }
    sort(v.begin(),v.end());
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<"\n";
    return 0;
}