#include<bits/stdc++.h>

using namespace std;

#define unll unsigned long long

unll n, c = -1;

vector <unll> a (10000000);

int main()
{
	cin >> n;
    
	while (true)
	{
		cin >> a[++c];
		if (a[c] == n) break;
	}
    
    for (int i = c; i > -1; i--)
	{
		if (a[i] == n) n--;
	}
    
	cout << n;
    
    return 0;
}