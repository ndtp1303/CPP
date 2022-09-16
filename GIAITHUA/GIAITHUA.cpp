#include <bits/stdc++.h>

using namespace std;

#define un unsigned
#define ll long long

un ll n, s = 1;

un ll gt(un ll n)
{
    return (n == 1 || n == 0) ? 1 : n * gt(n - 1);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    cin >> n;
    
    cout << gt(n);
    
    return 0;
}