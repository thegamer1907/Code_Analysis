//Code of C#oder Born_confused
#include <bits/stdc++.h>
using namespace std;
#define loop(n) for(int i=0;i<n;++i)
#define FORD(i,a,b) for(int i=a;i>=b;--i)
#define pb push_back
#define mp make_pair
#define all(x) x.begin(),x.end()
#define ll long long
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
#define vi(v) vector<int>v
#define vl(v) vector<long long int>v
#define pii pair<int,int>
#define pll pair<long long int,long long int>
#define len(s) s.length()
void input(int n,int a[]){loop(n)cin>>a[i];}
ll bin_expo(ll A, ll B, ll M){ll res = 1LL;while (B > 0){if(B % 2 == 1){res = (res * A) % M;}A = (A * A) % M; B = B / 2;}return res;}
int main()
{
	int n,k;
	cin>>n>>k;
	int a[n+5];
	for(int i=0;i<n;i++)
		cin>>a[i];
	int le=0,ri=-1,cnt=0;
	int fa=-1,ar=0,al=0;
	
	for(int i=0;i<n;i++)
	{
		while(ri<n && (cnt<k || a[ri+1]==1))
		{ 
			ri++;
			if(a[ri]==0)
				cnt++;
		}
		if(ri-i+1>fa)
		{
			fa=ri-i+1;
			ar=ri;
			al=i;
		}
		if(a[i]==0)
			cnt--;
	}
	cout<<min(fa,n)<<endl;
	for(int i=0;i<n;i++)
	{
		if(i>=al && i<=ar)
		{
			a[i]=1;
		}
		cout<<a[i]<<" ";
	}
	
	return 0;
}