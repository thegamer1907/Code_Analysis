#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
#define bitcount __builtin_popcountll
#define ull unsigned long long int
#define mod 1000000007
#define pii pair<int,int> 
#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define s(n) scanf("%d",&n)
#define sll(n) scanf("%lld",&n)
#define all(v) v.begin(),v.end()
#define p(x) printf("%d ",x)
#define pll(x) printf("%lld",x)
#define debug(x) cout << "> " << #x << " : " << x << "\n";
#define gur_chella ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define N 201010
#define LN 14
#define infinity 4123456789123456789ll
ll powfi(ll x, ll y, ll p)
{
    ll res = 1;
    x = x % p;
    while (y > 0){
        if (y & 1)
            res = ((res%p)*(x%p)) % p;
        y = y>>1;
        x = (x*x) % p;
    }
    return res%p;
}
int arr[105];
int main()
{
	gur_chella;
	int n, m, i, j, k, total=0, maxe=-2;
	cin>>n;
	cin>>m;
	total=m;
	for(i=1;i<=n;i++)
	{
		cin>>arr[i];
		total+=arr[i];
		maxe=max(maxe,arr[i]);
	}
	int might=(total/n + ((total%n)!=0));
	if(might<=maxe)
		might=maxe;
	cout<<might<<" "<<maxe+m<<"\n";


}