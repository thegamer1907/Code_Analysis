#include<bits/stdc++.h>
using namespace std;

#define maxn 500006

string g[maxn];

bool cmp(string & a, string & b, int i, int j)
{
	for(; i <= j; i++)
		if(a[i] < b[i])
			return true;
			
	return false;
}

string f(string & a, string & b)
{
	int l = 0, r = min( (int)a.size(), (int)b.size() ) - 1;
	
	while(l <= r)
	{
		int mid = (l+r)/2;
		if(cmp(a, b, l, mid)) r = mid-1;
		else l = mid+1;
	}
	
	return string(b.begin(), b.begin()+l);
}


int main()
{
	cin.sync_with_stdio(0), cin.tie(0);
	//~ freopen("in", "r", stdin);
	
	int n;
	cin>>n;
	
	for(int i = n-1 ; i >= 0; i--){
		cin>>g[i];
		g[i].erase(g[i].begin());
	}
	
	for(int i = 0; i < n-1; i++)
	{
	
		if(g[i] > g[i+1])	continue;
		else g[i+1] = f(g[i], g[i+1]);
	}
	
	for(int i = n-1; i >= 0; i--)
		cout<<'#'<<g[i]<<endl;
}
