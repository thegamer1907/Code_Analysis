#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N=2e7;
const ll M=1e9+7;
vector< pair <ll,ll> >v;
int main()
{
    ios_base::sync_with_stdio(NULL);cin.tie(NULL);cout.tie(NULL);
    ll n,m,q,x,y,cnt=0,ans=0,l,r,k,mid,sum=0,maxi=0,i,j=0,flag=1;
    cin>>n>>m;
    string a;
	set<string>s;
	for(int i=0;i<n;i++)
    {
		cin>>a;
		s.insert(a);
	}
	for(int i=0;i<m;i++)
	{
		cin>>a;
		s.insert(a);
	}
	if(n>m)cout<<"YES"<<endl;
	else
	if(n<m)cout<<"NO"<<endl;
	else
	{
		if(s.size()%2 == 0)
        cout<<"NO"<<endl;
		else cout<<"YES"<<endl;
	}
return 0;
}
