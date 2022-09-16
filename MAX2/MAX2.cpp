#include <bits/stdc++.h>

using namespace std;

#define un unsigned
#define ll long long

un ll n, x;

vector<un ll> a;

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n;
    
    while(cin >> x)
    {
        a.push_back(x);
    }
    
    sort(a.begin(), a.end());
    
    cout << a[n - 2];
    
    return 0;
}