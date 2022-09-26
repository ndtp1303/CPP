#include <bits/stdc++.h>

using namespace std;

#define ll long long

ll n, x, s;

vector <ll> a;

int main() {
    
	cin >> n;

    while (cin >> x) a.push_back(x);
    
	sort(a.begin(), a.end(), [](const auto a, const auto b) {
		return a > b;
	});
    
    for (auto c : a)
    {
        if (c > 0)
        {
            s += c;
            for(int j = 0; j < n; j++) {
                a[j]--;
            }
        }
    }
	
	cout << s;
    
    return 0;
}