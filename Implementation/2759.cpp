#include <bits/stdc++.h>
using namespace std;

int main() 
{
    	#ifndef ONLINE_JUDGE
    		freopen("in.txt", "r", stdin);
	    	freopen("out.txt", "w", stdout);
	#endif
    	int n;		cin >> n;
    	int A[n], mx = 0, ans = 0;
    	for(int i = 0; i < n; i++)
    	{
    		cin >> A[i];
    		mx = max(mx, A[i]);
    	}
    	for(int i = 0; i < n; i++)
    		ans += (mx - A[i]);
    	cout << ans << endl;
    	return 0;
}