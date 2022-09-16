 #include <bits/stdc++.h>

using namespace std;

#define un unsigned
#define ll long long

un ll n, m, x;

un ll ucln(ll a, ll b)
{
    ll r;
    
    while(b > 0)
    {
        r = a % b;
        a = b;
        b = r;
    }
    
    return a;
}

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n >> m;
    
    x = ucln(n, m);
    
    cout << x << "\n" << n / x << " " << m / x;
    
    return 0;
}