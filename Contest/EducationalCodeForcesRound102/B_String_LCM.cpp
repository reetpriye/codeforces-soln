//  
// Author: REET

#include <bits/stdc++.h>
using namespace std;

#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL)
#define mine(a) (*min_element((a).begin(), (a).end()))
#define maxe(a) (*max_element((a).begin(), (a).end()))

typedef long long ll;

// Recursive function to return gcd of a and b 
int gcd(int a, int b)
{
  if (b == 0)
    return a;
  return gcd(b, a % b);
}
 
// Function to return LCM of two numbers 
int lcm(int a, int b)
{
    return (a / gcd(a, b)) * b;
}

int main() {
    FAST_IO;

    int T;
    cin >> T;
    while(T--) {
        int l;
        string s;
        string s1;
        string t;
        string t1;
        cin >> s >> t;
        s1 = s;
        t1 = t;
        l = lcm(s.size(), t.size());
        // if((max(s.size(),t.size()))%(min(s.size(),t.size()))==0)
        //     l = max(s.size(),t.size());
        // else
        //     l = s.size()*t.size(); 
        while(l!=s.size())
            s += s1;
        while(l!=t.size())
            t += t1;
        s == t ? cout << s << "\n" : cout << "-1\n";
    }
    return 0;
}