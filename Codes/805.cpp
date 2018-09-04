#include <bits/stdc++.h>
#include <string>
#define SYNC ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;
#define gc getchar_unlocked
#define fo(i,n) for(i=0;i<n;i++)
#define Fo(i,k,n) for(i=k;k<n?i<n:i>n;k<n?i+=1:i-=1)
#define ll long long
#define ull unsigned long long
#define si(x)	scanf("%d",&x)
#define sl(x)	scanf("%lld",&x)
#define ss(s)	scanf("%s",s)
#define pi(x)	printf("%d\n",x)
#define pl(x)	printf("%lld\n",x)
#define ps(s)	printf("%s\n",s)
#define deb(x) cout << #x << "=" << x << endl
#define deb2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << endl
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define all(x) x.begin(), x.end()
#define clr(x) memset(x, 0, sizeof(x))
#define sortall(x) sort(all(x))
#define tr(it, a) for(auto it = a.begin(); it != a.end(); it++)
#define PI 3.1415926535897932384626
#define INF 10000000000
#define in(a,b) ((b).find(a)!=(b).end())
#define fill(a,v) memset(a,v,sizeof(a))
#define rec(a,b) return !a ? b : gcd(b % a, a)
typedef pair<int, int>	pii;
typedef pair<ll, ll>	pl;
typedef vector<int>		vi;
typedef vector<ll>		vl;
typedef vector<pii>		vpii;
typedef vector<pl>		vpl;
typedef vector<vi>		vvi;
typedef vector<vl>		vvl;
typedef pair<int, int> iPair;

int main()
{
	SYNC
	ll n,k;
	cin>>n>>k;
	int i;
	for(i=1;i<=64;i++)
	{
		if(k&1)	{	cout<<i;	break;	}
		else
			k=k>>1;
	}
	return 0;
}