#include <bits/stdc++.h>
using namespace std;

#define MEM(arr,val)memset((arr),(val), sizeof (arr))
#define PI (acos(0)*2.0)
#define FASTER ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define ALL(v)v.begin(),v.end()
#define PB(v)push_back(v)

typedef long long ll;
typedef pair<int,int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;

ll gcd(ll a,ll b){return b == 0 ? a : gcd(b,a%b);}
ll lcm(ll a,ll b){return a*(b/gcd(a,b));}

/**
 * __builtin_popcount(int d) // count bits
 * __builtin_popcountll(long long d)
 * strtol(s, &end, base); // convert base number
 */
//----------------------------------------------------------------------//

int main(){
	FASTER;


	string W;
	cin >> W;
	int n;cin >> n;
	vector<string> words;

	bool let1 = false;
	bool let2 = false;
	for (int i = 0; i < n; ++i) {
		string s;cin >> s;
		words.PB(s);
		char a = s[0];
		char b = s.back();

		if(a == W[1])
			let1=true;
		if(b == W[0])
			let2=true;
		if(s == W)
			let1=let2 =true;
	}
	if(let1 && let2){
		cout << "YES\n";
	}else{
		cout << "NO\n";
	}
	return 0;
}
