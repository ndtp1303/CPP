#include <bits/stdc++.h>

using namespace std;

#define ll long long

ll n, x, m, a[1000006], b[1000006];

int main()
{
    cin >> n;
    
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        b[i] = i;
    }
    
    for (int i = 1; i <= n; i++)
    {
        for (int j = i; j >= 1; j--)
        {
            if (a[i] > a[j]) b[i]--;
        }
    }
    
    for (int i = 1; i <= n; i++)
    {
        cout << b[i] << "\n";
    }
    
    return 0;
}