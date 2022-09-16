#include <bits/stdc++.h>

using namespace std;

#define un unsigned
#define ll long long

un ll n, s, i = 1;

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n;
    
    while(i <= n)
    {
        s += i;
        i += 2;
    }

    cout << s;
    
    return 0;
}