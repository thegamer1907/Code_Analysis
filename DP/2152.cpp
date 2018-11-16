#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void fastio(){
	 ios_base::sync_with_stdio(false);
	 cin.tie(0);
	 cout.tie(0);
}
bool vis[100001];
int main() {
	fastio();
	ll n,x;
	cin>>n>>x;

	ll ar[n],s[n];
	for(int i=1;i<=n;i++){
	cin>>ar[i];
	vis[ar[i]]=false;
	s[i]=0;
	}
	s[n]=1;
	vis[ar[n]]=true;
	
	for(int i=n-1;i>=1;i--)
	{
		if(!vis[ar[i]])
		s[i]=s[i+1]+1;
		else
		s[i]=s[i+1];
		vis[ar[i]]=true;
	}
        for(int i=0;i<x;i++)
        {
        	ll give;
        	cin>>give;
        	
        	cout<<s[give]<<'\n';
        }
      
	return 0;
}