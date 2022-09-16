#include <bits/stdc++.h>

using namespace std;

#define un unsigned
#define ll long long

un ll n;

un ll fib(un ll n)
{
    un ll a1 = 1, a2 = 1;
    
    if (n == 1 || n == 2)
        return 1;
    un ll i = 3, a;

    while (i <= n)
    {
        a = a1 + a2;
        a1 = a2;
        a2 = a;
        i++;
    }
    
    return a;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    cin >> n;
    
    cout << fib(n);
    return 0;
}