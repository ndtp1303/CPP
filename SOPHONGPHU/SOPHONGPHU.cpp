
#include <bits/stdc++.h>

using namespace std;

#define un unsigned
#define ll long long

un ll l, r, c = 0;

bool spp(un ll n) {
    if (n == 1) return 0;
    un ll s = 1;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            s += i;
            s += (n / i != i ? (n / i) : 0);
        }
    }
    
    return s > n;
}

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    cin >> l >> r;
    
    for (int i = l; i <= r; i++) 
        if (spp(i)) c++;
    
    cout << c;
    return 0;
}