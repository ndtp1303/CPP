#include <bits/stdc++.h>

using namespace std;

#define ll long long

ll n, x, m = 1e18;

vector <ll> a;

int main()
{
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    cin >> n;
    
    while(cin >> x) a.push_back(x);

    sort(a.begin(), a.end());
    
    m = min(m, a[0] * a[1]);
    m = min(m, a[0] * a[n - 1]);
    m = min(m, a[n - 1] * a[n - 2]);
    
    cout << m;
    
    return 0;
}