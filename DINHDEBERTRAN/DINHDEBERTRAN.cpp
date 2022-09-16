#include <bits/stdc++.h>

using namespace std;

#define un unsigned
#define ll long long

un ll n, c = 0;

bool isPrime(un ll n)
{
    if(n < 2) return false;
    
    for(int i = 2; i <= sqrt(n); i++)
    {
        if(n % i == 0) return false;
    }
    
    return true;
}

int main() {
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    cin >> n;
    
    for(int i = n + 1; i <= (2 * n) - 1; i++)
    {
        if(isPrime(i)) c++;
    }
    
    cout << c;

    return 0;
}


