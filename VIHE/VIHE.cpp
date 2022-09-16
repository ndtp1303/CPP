#include <bits/stdc++.h>

using namespace std;

#define ll long long

ll x, n;

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n;
    
    while(n > 0)
    {
        x++;
        n -= pow(x, 2);
    }
    
    cout << --x;
    
    return 0;
}