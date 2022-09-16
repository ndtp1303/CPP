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
    
    cout << (n * (n + 1)) / 2;
    
    return 0;
}