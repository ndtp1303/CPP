#include <bits/stdc++.h>

using namespace std;

#define un unsigned
#define ll long long

un ll n, k, x, d = 1, z;

vector<bool> a(1000000000, false);

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    cin >> n >> k;
    
    while(cin >> x) a[x] = true;
    
    for(int i = 1; i <= 1e7; i++)
    {
        if(!a[i])
        {
            if(d == k)
            {
                cout << i;
                break;
            } else d++;   
        }
    }

    return 0;
}