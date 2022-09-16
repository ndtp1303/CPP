#include <bits/stdc++.h>

using namespace std;

#define un unsigned
#define ll long long

bool cp(un ll n)
{
    ll x = sqrt(n);
    
    return (x * x == n);
}

un ll n;

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n;

    cout << (cp(n) ? "Yes" : "No");
    
    return 0;
}