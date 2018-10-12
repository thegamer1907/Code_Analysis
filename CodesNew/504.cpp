/*input
7
2 3 5 7 11 4 8
2
8 10
2 123


*/
#include<bits/stdc++.h>
#define ull 		unsigned long long
#define ll 			long long
#define M 			1000000007
#define pb 			push_back
#define p_q 		priority_queue
#define pii         pair<ll,ll>
#define vi          vector<ll>
#define vii         vector<pii>
#define mi          map<ll,ll>
#define mii         map<pii,ll>
#define all(a)      (a).begin(),(a).end()
#define sz(x)       (ll)x.size()
#define endl        '\n'
#define gcd(a,b)    __gcd((a),(b))
#define lcm(a,b)    ((a)*(b)) / gcd((a),(b))
#define ios	    	ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define mp 			make_pair
#define lb 			lower_bound
#define ub			upper_bound
#define rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end)))
#define ini(a,n,b)	for(ll int i=0;i<n;i++) a[i]=0;
#define hell 		(ull)1e9
#define DB(x) cerr << __LINE__ << ": " << #x << " = " << (x) << endl
using namespace std;

#define MAX  (ll)1e7+1

bool prime[MAX];
int a[(ll)1e7+1],b[(ll)1e7+1];
void sieve() 
{          
	ll i,j;          
	for(i=0;i<MAX;i++) prime[i] = 1;          
	for(i=2;i<=(int)(MAX);i++)            
		if (prime[i])              
		{
			
			for(j=1;j*i<MAX;j++) 
			{
				b[i]+=a[i*j];
				prime[i*j] = 0;
			}
		}        
}

int main(void)
{
	ios
	
	int n;
	cin>>n;
	rep(i,0,n)
	{
		int x;
		cin>>x;
		a[x]++;
	}
	sieve();
	for(int i=1;i<(ll)1e7+1;i++)
		b[i]+=b[i-1];
	int m;
	cin>>m;
	rep(i,0,m)
	{
		ull l,r;
		cin>>l>>r;
		if(l>(ll)1e7)
		{
			cout<<0<<endl;
			continue;
		}
		if(r>(ll)1e7)
		{
			r=(ll)1e7;
		}
		cout<<b[r]-b[l-1]<<endl;
	}

}