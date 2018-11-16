#include <bits/stdc++.h>

using namespace std;

int b[110], g[110];

int main() {
	int p, d;
	cin >> p;
	for(int i = 0; i < p; i ++)
		cin >> b[i];
	cin >> d;
	for(int i = 0; i < d; i++)
		cin >> g[i];
	sort(g, g + d);
	sort(b, b + p);
	int x = 0, y = 0, ans = 0;
	while(x < p && y < d)
	{
		if(b[x] - g[y] < 2 && b[x] - g[y] > -2)
			ans++, x++, y++;
		else
		if(b[x] > g[y])
			y++;
		else
			x++;					
	}		
	cout << ans;
	
	
	
	return 0;
}
