#include <algorithm>
#include <cstdio>
#include <functional>
#include <iostream>
#include <cfloat>
#include <climits>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <map>
#include <unordered_map>
#include <unordered_set>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <time.h>
#include <vector>
using namespace std;

typedef long long ll;
typedef pair<int, int> pii;
typedef pair<long long, long long> pll;

const long double pi = 3.141592653589793;

#define debug(x) cout << #x << " = " << (x) << endl;
#define rep(i, n) for(int i = 0;i < n;i++)
#define pb push_back
#define mp make_pair
#define mod 1000000007

//#define READ_FROM_FILE

long long B = 0, S = 0, C = 0;
long long PB, PS, PC;
long long cost = 0;

ll solve(ll NB, ll NS, ll NC, ll R) {
	if(NB < B) {
		if((B-NB)*PB > R) return 0;
		R -= (B-NB)*PB;
		NB = B;
	}

	if(NS < S) {
		if((S-NS)*PS > R) return 0;
		R -= (S-NS)*PS;
		NS = S;
	}

	if(NC < C) {
		if((C-NC)*PC > R) return 0;
		R -= (C-NC)*PC;
		NC = C;
	}

	NB -= B;
	NC -= C;
	NS -= S;

	if((B == 0 or (B != 0 and NB == 0)) and
       (S == 0 or (S != 0 and NS == 0)) and
       (C == 0 or (C != 0 and NC == 0))) {
		   return 1+R/cost;
	   }

	return 1+solve(NB, NS, NC, R);
}

int main() {
	ios::sync_with_stdio(false);
	#ifdef READ_FROM_FILE
    freopen("input.in","r",stdin);
 	freopen("output.out","w",stdout);
	#endif

	long long NB, NS, NC;
	long long R;

	string s;cin>>s;
	for(char &ch : s) {
		if(ch == 'B') B++;
		if(ch == 'S') S++;
		if(ch == 'C') C++;
	}

	cin>>NB>>NS>>NC;
	cin>>PB>>PS>>PC>>R;
	cost = B*PB+S*PS+C*PC;

	//debug(cost);

	cout<<solve(NB, NS, NC, R)<<endl;


	return 0;
}
