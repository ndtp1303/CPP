#include <bits/stdc++.h>

using namespace std;

#define ll long long

ll n, x;

vector<ll> a;

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    cin >> n;
    
    while(cin >> x)
    {
        a.push_back(x);
    }
    
    cout << abs(*min_element(a.begin(), a.end()) - *max_element(a.begin(), a.end()));
    
    return 0;
}