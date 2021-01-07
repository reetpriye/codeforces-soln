#include<iostream>
using namespace std;int main(){int q=5;int tmp;int sum=0;while(q--){cin >> tmp;sum += tmp;}cout<<(!(sum%5)&&sum?sum/5:-1);}