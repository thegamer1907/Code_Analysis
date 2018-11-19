#include<bits/stdc++.h>

using namespace std;

#define mp make_pair
#define F first
#define S second
#define pb push_back
#define fo(i, n) for(int i = 1; i <= n; ++i)

typedef long long ll;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;

const int N = 200200;
const int mod = 1e9 + 7 ;
int n,k, a[N][5];
int f[N], used[N];
int x;

int main()
{
	ios::sync_with_stdio(0); cin.tie(0);
	cin >>n>>k;
	fo(i,n)
	{
		fo(j,k)
		{                  
			cin>>x;
			f[i]=f[i]*2+x;
		}
		used[f[i]]=1;
		for(int j=0;j<(1<<k);++j)
		{
			if(used[j]&&((j&f[i])==0))
				return cout<<"YES",0;
		}
	}
	cout<<"NO";
	return 0;
}
               