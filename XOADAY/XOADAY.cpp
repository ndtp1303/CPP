
#include <bits/stdc++.h>

using namespace std;

#define ll long long

ll n, z, s, x;

vector <ll> a;

int main()
{

    cin >> n;

    while (cin >> x)
    {
        a.push_back(x);
        s += x;
    }

    sort(a.begin(), a.end());

    while(s != 0)
    {
        z++;
        
        if(s < 0)
        {
            s -= a.front();
            a.erase(a.begin());
        } else {
            s -= a.back();
            a.pop_back();
        }

    }

    cout << z;

    return 0;
}
