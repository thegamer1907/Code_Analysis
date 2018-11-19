#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<fstream>
#include<sstream>
#include<iomanip>
#include<cmath>
#include<complex>
#include<cstring>
#include<string>
#include<algorithm>
#include<assert.h>
#include<vector>
#include<stack>
#include <utility>
#include<set>
#include<bitset>
#include<queue>
#include<map>
#include<valarray>
#include<numeric>
using namespace std;
const int OO = 1 << 24;
const double PI = acos(-1.0);
const double EPS = (1e-9);
typedef long long ll;
typedef complex<double> point;
#define all(v) ((v).begin()),((v).end())
#define rall(v) ((v).end()),((v).begin())
#define rep(i,n) for(int(i)=0;(i)<(int)n;(i)++)
#define clr(v,idx) memset(v,idx,sizeof(v))
#define print(x) printf("%d",x)
#define printll(x) printf("%I64",x)
#define println(x) printf("%d\n",x)
#define printlln(x) printf("%I64\n",x)
#define vi vector<int>
#define vll vector<ll>
#define vs vector<string>
#define pii pair<int,int>
#define pll pair<ll,ll>
#define pis pair<int,string>
#define scl(x) scanf("%lld",&x)
#define sc(x)  scanf("%d",&x)
# define mark  cout << fixed<<setprecision(15);
#define max3(a,b,c) max(a,max(b,c));
#define min3(a,b,c) min(a,min(b,c));
#define MOD 1000000007;
//const int dx[] = {1,-1,0,0,1,-1,1,-1};
//const int dy[] = {0,0,1,-1,1,-1,-1,1};
//const int dxhorse[] = {-2,-2,-1,-1,1,1,2,2};
//const int dyhorse[] = {1,-1,2,-2,2,-2,1,-1};
void fast()
{
	std::ios_base::sync_with_stdio(0);
	cin.tie(NULL); cout.tie(NULL);
}


int main() {
	string s; cin >> s;
	int n; cin >> n;
	vector<string>v(n);
	rep(i, n)cin >> v[i];
	rep(i, n)
		for (int t = i; t < n; t++) {
			string a = v[i], b = v[t], tmp1 = a, tmp2 = b;
		// fuck sentence	if (a == s || b == s)continue;
			tmp1 += b;
			tmp2 += a;
			if (tmp1.find(s) != -1)return puts("YES");
			if (tmp2.find(s) != -1)return puts("YES");
		}
	puts("NO");
}