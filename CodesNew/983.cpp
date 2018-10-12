#include<bits/stdc++.h>
#define maxn 1005 
using namespace std;
int n,m; 
string sn[maxn] , sm[maxn]; 
set<string> vis; 
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
	int cnt = 0; 
    cin >> n >> m;
	for(int i=0;i<n;i++)
	    cin >> sn[i] , vis.insert(sn[i]);
	for(int i=0;i<m;i++)
	{ 
	    cin >> sm[i]; 
    	if(vis.count(sm[i])) 
		    cnt++;
	} 
	int fix = cnt&1;
	if(n-cnt+fix > m-cnt)
	    cout << "YES" << endl;
	else
	    cout << "NO" << endl; 
	return 0;
}

