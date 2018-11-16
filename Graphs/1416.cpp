#include <bits/stdc++.h>
using namespace std;
const int M = 3e4 + 5;
int A[M], vis[M]; 

void dfs(int i)
{
	if(!vis[i])
	{
		vis[i] = 1;
		dfs(i + A[i]);
	}
}

int main() 
{
    	#ifndef ONLINE_JUDGE
    		freopen("input.txt", "r", stdin);
	    	freopen("output.txt", "w", stdout);
	#endif
    	ios_base::sync_with_stdio(0);   cin.tie(0);     cout.tie(0);
    	int n, t;	cin >> n >> t;
    	for(int i = 1; i <= n; i++)	cin >> A[i];
    	dfs(1);
    	cout << (vis[t] == 1 ? "YES" : "NO");
	return 0;
}