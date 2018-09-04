/*input
1
*/
#include <bits/stdc++.h>

using namespace std;

#define rep(i,a,b) for(int (i) = (a); (i) < (b); ++(i))
#define fi first
#define se second
#define pb push_back
#define mp make_pair
#define all(v) (v).begin(), (v).end()
#define sz(v) (int) (v).size()
#define fast() ios::sync_with_stdio(0);cin.tie(0);

typedef unsigned long long ull;
typedef long long ll;
typedef pair<int, int> pii;
typedef vector<int> vi;

const int inf = 0x3f3f3f3f;
const int neginf = 0xc0c0c0c0;
const int mod = 1000000007;

// 0 -> eq, 1 ( a > b), -1 ( a < b)
bool cmp(const double& a, const double& b, const double TOL = 1e-9){ return (a + TOL > b)? (b + TOL > a)? 0 : 1 : -1;}

ll powmod(ll a, ll b)
{
	ll res = 1;
	a %= mod;
	assert(b >= 0);
	for(;b;b>>=1)
    {
		if(b&1) res = (res*a)%mod;
		a = (a*a)%mod;
	} 
	return res;
}

inline bool digiSum(int x){
	int sum = 0;
	while(x != 0)
	{
		ll d = x % 10;
		sum += d;
		x /= 10;
	}
	return sum == 10;
}

const int ms = 1e4;
int nums[ms + 1];
int idx = 0;

int main()
{
	int n;
	rep(i,0, 10900000){
		if(digiSum(i)){
			nums[idx++] = i;
			if(idx == ms) break;
		}
	}
	scanf("%d",&n);
	printf("%d\n", nums[n - 1]);
	return 0;
}
