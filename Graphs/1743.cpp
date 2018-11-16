#include<bits/stdc++.h>
using namespace std;
bool f[30001];int n,t;
int main()
{
	cin>>n>>t;
	f[1]=1;
	for(int i=1;i<n;i++)
	{
		int a;cin>>a;
		f[i+a]|=f[i];
	}
	puts(f[t]?"YES":"NO");
}