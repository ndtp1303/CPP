#include <bits/stdc++.h>

using namespace std;

#define un unsigned
#define ll long long

un ll a, b, c = 0, r;

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> a >> b;
    
    while(a != b) {
        c++;
        if(a > b) a -= b;
        else b -= a;
    }
    
    cout << ++c;
    return 0;
}