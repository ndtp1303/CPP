#include <bits/stdc++.h>

using namespace std;

#define un unsigned
#define ll long long

un ll n;

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n;
    
    if(n <= 10)
    {
        cout << n * 4000;
    } else {
        cout << 40000 + ((n - 10) * 7000);
    }

    return 0;
}