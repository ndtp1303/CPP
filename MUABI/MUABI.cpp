#include <bits/stdc++.h>

using namespace std;

#define ll long long

ll n, k, m, x, y, s;

int main(){
    
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);
    cout.tie(NULL);

    cin >> n >> m;
    
    pair <ll, ll> a[m + 5];
    
    for(int i = 0; i < m; i++)
    {
        cin >> a[i].first >> a[i].second;
    }
    
    sort(a, a + m, [](const auto a, const auto b) {
        return a.second > b.second;
    });
    
 	for(int i = 0; i < m; i++){
        ll r = min(n, a[i].first);
        n -= r; 
        s += r * a[i].second;
        if(n <= 0) break;
    }
    
    cout << s;
    
    return 0;
}