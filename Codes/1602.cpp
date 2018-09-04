#include <bits/stdc++.h>

#define f first
#define s second
#define sz size()
#define pb push_back
#define mem(a,s,b) for(int i=0 ; i<=s ; ++i) a[i]=b;
#define mem2(a,r,c,b) for(int i=0 ; i<=r ; ++i)    for(int j=0 ; j<=c ; ++j)    a[i][j]=b;
#define all(a) a.begin(),a.end()

typedef unsigned long long ull;
typedef long long ll;


const double pi=3.1415926536;
const int MAXN=1e5+10;

using namespace std;
using namespace __gnu_cxx;

int dx[]={0,1,0,-1,-1,-1,1,1};
int dy[]={1,0,-1,0,-1,1,-1,1};

int n,a[MAXN],it;
ll tmp[MAXN],s,ans;

bool OK(int x)
{
	ll ts=s;
	for(int i=1 ; i<=n ; ++i)	tmp[i]=1LL*a[i]+1LL*i*x;
	sort(tmp+1,tmp+n+1);
	for(int i=1 ; i<=n ; ++i)
	{
		ts-=tmp[i];
		if(ts<0)	return 0;
		if(i==x){
			ans=s-ts;
			return 1;
		}
	}
	return 1;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
//	freopen("Out.txt","w",stdout);

	cin >> n >> s;
	for(int i=1 ; i<=n ; ++i)	cin >> a[i];
	int st=1,ed=n;
	while(st<=ed)
	{
		int mid=st+(ed-st)/2;
		if(OK(mid))	it=mid,st=mid+1;
		else ed=mid-1;
	}
	cout << it << " " << ans << endl;
}
