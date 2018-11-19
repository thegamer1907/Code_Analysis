//Sagar Kaushal
#include<bits/stdc++.h>
using namespace std;
#define fwd(i,a,b) for(i=a;i<b;i++)
#define rev(i,a,b) for(i=a;i>b;i--)
#define ll long long 
#define vll vector< long long > 
#define vi vector<int> 
#define pb push_back
#define pii pair<int,int> 
#define pll pair< ll , ll >
#define vpll vector< pll >
#define sp(x) x.F>>x.S 
#define F first
#define S second
#define dbl long double
#define str string
#define pdbl pair<dbl,dbl>
#define PI 3.14159265358979323846 
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()
#define sd(t) scanf("%d",&t)
#define pd(t) printf("%d\n",t)
#define slld(t) scanf("%lld",&t)
#define plld(t) printf("%lld\n",t)
#define MOD 1000000007
#define EPS 1e-9
#define gc getchar_unlocked 
#define pc putchar_unlocked
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	ll n,m,f,i,x,z,y,j,k,l,t;
	str a,b;
	cin>>x>>y>>z>>n>>m;
	if(n>m)
		swap(n,m);
	ll cl1=0,cl2=0;
	bool flag=true;
	if(z==0&&y==0)
	{
		if(x==n||x==m)
			flag=false;
		if(x>n&&x<m)
			cl1++;
		else 
			cl2++;
		if(n==12||m==12)
			flag=false;
		cl2+=2;
	}
	else
	{
		if(x>=n&&x<m)
			cl1++;
		else 
			cl2++;
		if(y==0)
			y=60;
		k=y%5;
		y=y/5;
		if(y==0)
			y=12;
		if(k==0&&z==0)
		{
			if(y==n||y==m)
				flag=false;
			if(y>n&&y<m)
				cl1++;
			else 
				cl2++;		
		}			
		else
		{
			if(y>=n&&y<m)
				cl1++;
			else 
				cl2++;	
		}
		if(z==0)
			z=60;
		k=z%5;
		z=z/5;
		if(z==0)
			z=12;
		if(k==0)
		{
			if(z==n||z==m)
				flag=false;
			if(z>n&&z<m)
				cl1++;
			else 
				cl2++;		
		}			
		else
		{
			if(z>=n&&z<m)
				cl1++;
			else 
				cl2++;	
		}
	}
	if(flag==true)
	{
		if(cl1==3||cl2==3)
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
	}
	else
		cout<<"NO"<<endl;	

	return 0;	
}	