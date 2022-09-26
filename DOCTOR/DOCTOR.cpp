#include <bits/stdc++.h>

using namespace std;

#define unll unsigned long long

unll n, x, y, t;

vector <unll> a, b;

int main()
{
    cin >> n;
    
    while(cin >> x >> y)
    {
        a.push_back(x);
        b.push_back(y);
    }
    
    for(int i = 0; i < n - 1; i++)
    {
        for(int j = i + 1; j < n; j++)
        {
            if(a[i] > a[j])
            {
                swap(a[i], a[j]);
                swap(b[i], b[j]);
            }
        }
    }
    
    for(int i = 0; i < n; i++)
    {
        if(a[i] > t) t = a[i] + b[i];
        else t += b[i];
    }
    
    cout << t;
    
    return 0;
}