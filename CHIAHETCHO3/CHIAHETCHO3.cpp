
#include <bits/stdc++.h>

using namespace std;

#define un unsigned
#define ll long long

un ll n, a[3] = {0}, s = 0;

int main() {
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
        
    cin >> n;
    
    while(n--)
    {
       long long x;
       cin >> x;
        
       s += a[(3 - x % 3) % 3];
       a[x % 3]++;
    }
    
    cout << s;    
    return 0;
}