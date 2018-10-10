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

int main() {
	ios::sync_with_stdio(false);
	#ifdef READ_FROM_FILE
    freopen("input.in","r",stdin);
 	freopen("output.out","w",stdout);
	#endif

	long long NB, NS, NC;
	long long R, Y;

	string st;cin>>st;
	for(char &ch : st) {
		if(ch == 'B') B++;
		if(ch == 'S') S++;
		if(ch == 'C') C++;
	}

	cin>>NB>>NS>>NC;
	cin>>PB>>PS>>PC>>Y;

	ll s = 0, e = NB+NS+NC+Y, ham, ans = 0;
	while(s <= e) {
		ham = (s+e)/2;
		ll Br = B*ham;
		ll Sr = S*ham;
		ll Cr = C*ham;

		R = Y;

		bool possible = true;
		if(NB < Br) {
			if((Br-NB)*PB > R) possible = false;
			else R -= (Br-NB)*PB;
		}

		if(NS < Sr) {
			if((Sr-NS)*PS > R) possible = false;
			else R -= (Sr-NS)*PS;
		}

		if(NC < Cr) {
			if((Cr-NC)*PC > R) possible = false;
			else R -= (Cr-NC)*PC;
		}

		if(possible) ans = ham, s = ham+1;
		else e = ham-1;
	}

	cout<<ans<<endl;

	return 0;
}
