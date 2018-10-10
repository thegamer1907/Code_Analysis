#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define ff first
#define se second
#define pb push_back
#define nn 200100
#define mt make_tuple
#define mp make_pair
#define ll long long int
#define db double
#define ld long double
#define inf 1000000000000000000ll
#define logn 20
#define mod 1000000007ll
#define mod1 mod
#define mod2 100000009ll
#define sqr(a) a*1ll*a
#define nullp mp(-1,-1)
#define set0(a) memset(a,0,sizeof a)
#define setm1(a) memset(a,-1,sizeof a)
#define cmp 1e-16
#define endl '\n'
 
using namespace std;
using namespace __gnu_pbds;

typedef pair<int,int> pii;
typedef pair<ll,int> pli;
typedef pair<int,ll> pil;
typedef pair<ll,ll> pll;
typedef pair<long double,long double> pdd;
template<class T>
using max_pq = priority_queue<T>;
template<class T>
using min_pq = priority_queue<T,vector<T>,greater<T>>;
typedef tree<int, null_type, less<int>, rb_tree_tag, 
tree_order_statistics_node_update> OST;

template<class T> T gcd(T a,T b){return (b==0)?a:gcd(b,a%b);}
ll power(ll a,ll p,ll m=mod)
{ll res=1;while(p>0){if(p&1)res=(res*a)%m;a=(a*a)%m;p>>=1;}
return res;}

const ld pi=3.141592653589793238462643383;

bool check(int num)
{
	int sum = 0;
	while(num)
	{
		sum += num%10;
		num /= 10;
	}
	if(sum == 10)
		return true;
	return false;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("out.txt","w",stdout);
    #endif
    
    int k;
    cin>>k;

    int count = 0;
    int num = 19;
    while(true)
    {
    	if(check(num))
    	{
    		count++;
    		if(count == k)
    		{
    			cout<<num;
    			return 0;
    		}
    	}
    	num++;
    }

    return 0;
}