#include <bits/stdc++.h>
#define loop(i,a,b) for(ll i=a;i<=b;i++)
#define mod 1000000007
#define  F first
#define  S second
#define mp make_pair
#define pb push_back
#define fast_io std::ios::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)

using namespace std;

int st[15]={0};
int main(){
	fast_io;
	int n,k;
	cin>>n>>k;
	int a=0,b=0,c=0,d=0;

	bool flag=false;
	for (int i = 0; i < n; ++i)
	{
		if(k==1)
			cin>>a;
		else if(k==2)
			cin>>a>>b;
		else if(k==3)
			cin>>a>>b>>c;
		else
			cin>>a>>b>>c>>d;

		int num =  8*a + 4*b + 2*c + d;
		st[num]=1;
	}	
	
	if(st[0]==1)
		flag=true;

	for(int i=0;i<15;i++)
	{
		for(int j=i+1;j<15;j++)
		{
			if(st[i]==1 && st[j]==1 && (i&j)==0)
				flag=true;
		}
	}

	if(flag)
		cout<<"YES";
	else
		cout<<"NO";


	return 0;
}
