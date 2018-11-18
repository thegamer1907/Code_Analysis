#include <iostream>
#include <algorithm>
#include <string>
#include <climits>
#include <vector>
#include <map>
#include <cmath>
#include <iomanip> 
#define pb push_back
#define er erase
#define mp make_pair
#define fr first
#define sc second
#define bg begin()
#define ed end()
#define f(i,j,k) for(int i = j; i<k; i++)
#define _f(i,j,k) for(int i = j; i<=k; i++)
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef vector<int> vi;
typedef vector<ll> vll;
const ll M = 1000000007;

map<vi,int> memo;

bool p(vi a, vi b){
	bool r = true;
	f(i,0,a.size()) if (a[i] + b[i] == 2) {r = false; break;}
	return r;
}

int main(){
	int n,k; cin>>n>>k;
	vector<vi> a;

	f(i,0,n){
		vi tpv;
		int tpi;
		f(j,0,k){ cin >> tpi; tpv.pb(tpi); }
		if(memo.find(tpv)==memo.ed) { a.pb(tpv); memo.insert(mp(tpv,1)); }
	}

	bool r = false;

	f(i,0,a.size()){
		f(j,i+1,a.size()){
			if ( p(a[i],a[j]) ){ r = true; break; }
		}
		if (r) break;
	}

	if(a.size()==1){
		r = true;
		f(i,0,k) if(a[0][i]==1) r = false;
	}

	if (r) cout << "YES"; else cout << "NO";

}