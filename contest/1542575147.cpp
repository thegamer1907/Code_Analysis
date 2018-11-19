//Helmi bou 3a' on the mix yeah yeah
#include<iostream>
#include <functional>
#include <utility>
#include <numeric>
#include<set>
#include<map>
#include<list>
#include<string>
#include<iomanip>
#include<cmath>
#include<string>
#include<vector>
#include<queue>
#include<stack>
#include<string>
#include<complex>
#include<sstream>
#include<iostream>
#include<algorithm>
#include<valarray>
using namespace std;
#define ll long long
typedef unsigned long long   ull;
const ll OO = 1e8;
const ll OOL = 1e16;
const ll MOD = 1e9 + 7;
const double EPS = 1e-9;
#define pb                  push_back
#define all(v)  v.begin(),v.end()
#define MP                  make_pair
typedef long double       ld;
typedef vector<int>       vi;
typedef vector<double>    vd;
typedef pair<int, int>    pii;
typedef pair<ll, ll>      pll;
typedef vector<pair<int, int> > vii;
typedef vector< vi >      vvi;
typedef vector< vd >      vvd;
typedef vector<string>    vs;
typedef vector<ll>        vl;
typedef vector<vector<ll> >     vvl;
typedef vector<pair<ll, ll> >   vll;
#include<string.h>
#include<unistd.h>
#include <string>
ull gcd(ull a, ull b) { return (b == 0 ? a : gcd(b, a % b)); }
ull lcm(ull a, ull b) { return (a * (b / gcd(a, b))); }
ull power(ull a, ull b){ if (b == 0) return 1; ull ans = power(a, b / 2); ans = (ans * ans) % MOD; if (b & 1) ans = (ans * a) % MOD; return ans; }
void printVec(vector<int> v2)
{
	for (int i = 0; i < (int)v2.size(); ++i)
			cout<<v2[i]<<" ";
		cout<<"\n";
}

bool comp(const pair<ll,ll> &a,const pair<ll,ll> &b)
{
       return a.first>b.first;
}


int main(){
	string s,x;
	cin >> s;
	int i=0,n;
	cin >> n;
	vs t;
	for(int i=0;i<n;i++)
	{ cin >> x;
	if(!s.compare(x))
	{cout << "YES";
	return 0;
	}
	 t.pb(x);
	}
	
for(int i=0;i<n;i++)
for(int j=0;j<n;j++)
{ if(t[i][1] ==s[0] && t[j][0] ==s[1] )
{cout << "YES";
	return 0;
	}
}

cout << "NO";
	
return 0;
}