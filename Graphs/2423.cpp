//Code of C#oder Born_confused
#include <bits/stdc++.h>
using namespace std;

#define FOR(i,a,b) for(int i=a;i<b;++i)
#define FORD(i,a,b) for(int i=a;i>=b;--i)
#define pb push_back
#define mp make_pair
#define all(x) x.begin(),x.end()
#define ll long long int
#define s(x) scanf("%d", &x)
#define sd(x) scanf("%lf", &x)
#define sl(x) scanf("%lld", &x)
#define mod 1000000007
#define fi first
#define se second
#define p(x) printf("%d",x)
#define pl(x) printf("%lld", x)
#define pd(x) printf("%lf", x)
#define pn() printf("\n")
int ans[500+1];
int main()
{
	int n;
	cin>>n;
	int a[n];
	map<int,int>m;
	FOR(i,1,n+1){
		cin>>a[i];
		m[i]=a[i];
	}
	int vis[n+10]={0};
	int res=0,ind,c=0;
	for(int i=1;i<n+1;i++)
	{
		c=0;
		ind=i;
		while(a[ind]!=-1)
		{
			//cout<<i<<" "<<ind<<endl;
			c++;
			ind=m[ind];
		}
		res=max(c,res);
	}
	cout<<res+1<<endl;
	return 0;
}