///Chefer

#include<bits/stdc++.h>
#define int long long int 
#define f first
#define s second

using namespace std;

typedef pair<int,int> pii;
const int maxn=1e6+5,mod=1e9+7;
int par[maxn];
int po[maxn];
int get(int l,int r)
{
	return (par[r]-(par[l-1]*po[r-l+1])%mod+mod)%mod;
}
main()
{
	ios_base::sync_with_stdio(false);
	string s;
	cin>>s;
	po[0]=1;
	for(int i=1;i<maxn;i++)
		po[i]=(32*po[i-1])%mod;
	par[0]=s[0]-'a';
	for(int i=1;i<s.size();i++)
		par[i]=(par[i-1]*32+s[i]-'a')%mod;
	int n=s.size()-1;
	for(int i=n-1;i>=0;i--)
	{
		if(get(0,i)==get(n-i,n))
		{
			int l=1,r=i+1;
			while(r<n)
			{
				if(get(0,i)==get(l,r))
				{
					for(int j=0;j<=i;j++)
						cout<<s[j];
					return 0;
				}
				l++;
				r++;
			}
		}
	}
	cout<<"Just a legend";
	return 0;	
}
