
#include <bits/stdc++.h>

using namespace std;

float a, b, x;

int main()
{
    
    cin >> a >> b;
    
    x = (a / (b * b));
    
    printf("%0.1f", x);
    
    cout << "\n";
    
    if(x < 20)
    {
        cout << "Nguoi gay";
    } else if(x <= 30) {
        cout << "Nguoi li tuong";
    } else cout << "Nguoi beo";
    
    return 0;
}