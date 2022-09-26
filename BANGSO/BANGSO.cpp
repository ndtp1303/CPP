#include <bits/stdc++.h>

using namespace std;

#define unll unsigned long long

unll n, m, c, i;

int main()
{
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    cin >> n >> m;
    
    for(i = 1; i <= n; i++)
    {
        if(i * n >= m && m % i == 0) c++;
    }   

    cout << c;
    
    return 0;
}