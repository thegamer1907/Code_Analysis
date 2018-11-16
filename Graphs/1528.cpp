#include <bits/stdc++.h>

using namespace std;

int nxt[100000];

int main() {
	int n, t;
	cin >> n >> t;
	for(int i = 1; i < n; i ++)
		cin >> nxt[i];
	int x = 1;
	while(x < t)
	{
		x = nxt[x] + x;	
	}	
	if(x == t)
	{
		cout << "YES";
	}
	else
		cout << "NO";
	return 0;
}







