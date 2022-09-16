
#include <bits/stdc++.h>

using namespace std;

#define un unsigned
#define ll long long

un ll n, d, x, c, p, q, a[10000000];

int main() {
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n >> d;
    
    for(int i = 1; i <= n; i++) cin >> a[i];
    
    sort(a + 1, a + 1 + n);
    
    p = 1;
    q = n;
    
    while(p < q)
    {
        c++;
        if(a[p] + a[q] <= d) 
        {
            p++;
            q--;
        } else q--;
    }
    
    cout << c;
    
    return 0;
}