/*input
1
1

*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll, ll> pll;
typedef vector<ll> vll;
#define pb push_back 
#define f first
#define s second
#define int ll
#define fr(j,n) for(int i=j;i<=n;i++)
#define reset(a) memset(a,0,sizeof(a))
#define minqueue priority_queue<int,vector<int>,greater<int> >
int const mod = 1e9+7;
int const inf = 2e18;


int power(int x, int y, int mod = inf)
{
    int ans = 1;
    x %= mod;
    while(y)
    {
        if(y&1)
            ans = (x * ans) % mod;

        x = (x * x) % mod;
        y >>= 1;
    }
    return ans;
}
int gcd(int a , int b)
{
	if(a==0)
	return b;
	return gcd(b%a,a);
}

int findparent(int parent[],int x )
{
	if(parent[x]==x)
		return x;
	return findparent(parent,parent[x]);
}
void unionn(int parent[],int x,int y)
{
	int x1 = findparent(parent,x);
	int y1 = findparent(parent,y);
	parent[x1]=y1;
}



signed main() {
	ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
	int n;
	cin>>n;
	int parent[n+1];
	for(int i=0;i<=n;i++)
		parent[i]=i;
	int a[n+1];
	for(int i=1;i<=n;i++){cin>>a[i];unionn(parent,i,a[i]);}

	set<int> s;
	for(int i=1;i<=n;i++)
	{
		s.insert(findparent(parent,i));
	}
	cout<<s.size();
return 0;
}
