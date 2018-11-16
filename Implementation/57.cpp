#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define MAX 1000000007
#define pb push_back
#define mp make_pair
ll mini=1e9+7;


int main()
{   ios_base::sync_with_stdio(false);
		ll n,i,a,b,ans=0,pow=0,round=0;
		cin>>n>>a>>b;
		while(n>1)
		{
			pow+=1;
			n/=2;
		}
		//cout<<pow<<" ";
		while(a!=b)
		{
			if(a&1)a++;
			if(b&1)b++;
			a/=2;
			b/=2;
			round++;
		}
		if(round==pow)
		cout<<"Final!\n";
		else
		cout<<round<<'\n';
	}

