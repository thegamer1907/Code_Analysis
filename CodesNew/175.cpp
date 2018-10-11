#include <bits/stdc++.h>
#define T top()
#define P pop()
#define E end()
#define S size()
#define B begin()
#define X first 
#define Y second
#define RE resize
#define mP make_pair
#define pB push_back
#define ST setprecision
typedef long long ll;
typedef long double lb;
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	int n,m,maxx=0;
	vector <int> a;
	cin>>n>>m;
	a.RE(n+1);
	a[0]=0;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		a[i]+=a[i-1];
	}
	for(int i=1;i<=n;i++)
	{
		auto low=upper_bound(a.B,a.E,m+a[i-1]);
		maxx=max(int(low-a.B-i),maxx);
	}
	cout<<maxx;
	return 0;
}
