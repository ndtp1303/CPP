#include <bits/stdc++.h>

using namespace std;

#define un unsigned
#define ll long long

un ll n;

bool isPrime(un ll n)
{
    if(n < 2) return false;
    
    for(int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0) return false;
    }
    
    return true;
}

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n;
    
    if(isPrime(n)) cout << 1;
    else if(n % 2 == 0) cout << 2;
    else if(isPrime(n - 2)) cout << 2;
    else cout << 3;

    return 0;
}