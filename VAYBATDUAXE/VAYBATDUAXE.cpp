#include <bits/stdc++.h>

using namespace std;

#define un unsigned
#define ll long long

un ll n, a, b;

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    cin >> n >> a >> b;
    
    cout << ((a * b) / __gcd(a, b)) % n;
    
    return 0;
}
