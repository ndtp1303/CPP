#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define pb push_back

ll n, k, x;

vector <ll> a;

int main()
{
    cin >> n >> k;
    
    while (cin >> x) a.pb(x);
    
    for (auto c : a)
    {
        if (c > 0) x = max(x, k - c);
        else x = max(x, abs(c));
    }
    
    cout << x;
    
    return 0;
}