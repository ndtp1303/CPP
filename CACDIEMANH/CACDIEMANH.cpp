#include <bits/stdc++.h>

using namespace std;

#define un unsigned
#define ll long long

un ll n, x, a[10000000];

set<un ll> z;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    cin >> n;
    
    while(cin >> x)
    {
        a[x]++;
        z.insert(x);
    }
    
    cout << z.size() << "\n" << *max_element(a, a + n);
    
    return 0;
}