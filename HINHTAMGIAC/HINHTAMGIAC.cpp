#include <bits/stdc++.h>

using namespace std;

float a, b, c, p, x;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> a >> b >> c;
    
    p = (a + b + c);

    printf("%0.1f\n", p);
    
    p /= 2;
    
    x = sqrt(p * (p - a) * (p - b) * (p - c));
    
    printf("%0.1f", x);
    
    return 0;
    
}