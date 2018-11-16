#include <bits/stdc++.h>
#define in(n, arr) for (int i = 0; i < n; ++i) cin >> arr[i]
#define out(n, arr) for (int i = 0; i < n; ++i) cout << arr[i] << " "
 
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	#ifndef ONLINE_JUDGE
	freopen("in.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
	#endif
	int n;
	cin >> n;
	int x = 0,y = 0,z = 0;
	for (int i = 0; i < n; ++i)
	{
		int a,b,c;
		cin >> a >> b >> c;
		x += a;
		y += b;
		z += c;
	}	 	
	//cout << x << " " << y << " " << z << "\n";
	if (x || y || z)
		cout << "NO\n";
	else
		cout << "YES\n";
	return 0;
}