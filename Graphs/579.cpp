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
	int n,t;
	string s;
	cin >> n >> t >> s;
	while(t--)
	{
		for (int i = 0; i < n-1; ++i)
		{
			if (s[i] == 'B' && s[i+1] == 'G')
			{
				swap(s[i], s[i+1]);
				i++;
			}
		}
	} 	
	cout << s << "\n";
	return 0;
}