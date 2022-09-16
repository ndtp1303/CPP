#include <bits/stdc++.h>

using namespace std;

#define un unsigned
#define ll long long

un ll l, r, c;

vector<bool> x(1000000000, true);

un ll sum(un ll n)
{
    un ll v, s = 0;
    while (n != 0){
        v = n % 10;
        s += v;
        n /= 10;
    }
    
    return s;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
        
    cin >> l >> r;
    
    x[0] = x[1] = false;
    
    for(int i = 2; i*i <= 1e7; i++) {
        if (x[i]) {
            for(int j = i * i; j <= 1e7; j += i) {
                x[j] = false;
            }
        }
    }
    
    for(int i = l; i <= r; i++)
    {
        if(i > 10)
        {
            if(x[sum(i)]) {
                c++;
            }
        } else {
            if(x[i]) c++;
        }
    }
    
    cout << c;
    
    return 0;
}