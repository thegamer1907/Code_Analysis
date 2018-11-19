#include <bits/stdc++.h>
#define ff first
#define ss second
#define pb push_back
#define MOD (1000000007LL)
#define LEFT(n) (2*(n))
#define RIGHT(n) (2*(n)+1)
 
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef pair<int, int> ii;
typedef pair<int, ii> iii;
 
ll pwr(ll base, ll p, ll mod = MOD){
ll ans = 1;while(p){if(p&1)ans=(ans*base)%mod;base=(base*base)%mod;p/=2;}return ans;
}
 
ll gcd(ll a, ll b){
    if(b == 0)  return a;
    return gcd(b, a%b);
}

typedef vector<double> VD;
typedef vector<VD> VVD;
typedef vector<int> VI;

string s;
int n;
string str;
int c1[50],c2[50];

int main()
{
	ios_base::sync_with_stdio(false);
	cin>>s>>n;
	int f = 0;
	for(int i=0;i<n;i++)
	{
		cin>>str;
		c1[str[0]-'a']++;
		c2[str[1]-'a']++;
		if(str == s)
			f = 1;
	}
	if(f)
		printf("YES\n");
	else if(c2[s[0]-'a'] != 0 && c1[s[1]-'a']++)
		printf("YES\n");
	else
		printf("NO\n");
	return 0;
}