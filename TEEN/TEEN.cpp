#include <bits/stdc++.h>

using namespace std;

string s;

int t, e, n;

int main()
{
    getline(cin, s);
    
    for(int i = 0; i < s.length(); i++)
    {
        if(s[i] == 'T') t++;
        else if(s[i] == 'E') e++;
        else if(s[i] == 'N') n++;
    }
    
    if(t > n) t = n;
    if(t > (e / 2)) t = e / 2;
    
    cout << t;
    
    return 0;
}