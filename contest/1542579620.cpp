#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define inf 1e9
#define pb push_back
#define mp make_pair
#define Int long long
#define fs first
#define sc second
#define pll pair<Int,Int>
#define pii pair<int,int>
#define piiii pair<pii, pii>
#define MAX 100005
#define LOGN 20
#define gcd __gcd
#define optimise_stuff ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
Int modpow(Int a,Int b,Int m){Int c=1;while(b){if(b&1)c=(c*a)%m;b/=2;a=(a*a)%m;}return c;}

bool Hash[20];
vector<int> V;
int k;
bool check(int x){

	int cnt = __builtin_popcount(x), i, j, ind, c;

	for(i = 0; i < k; i++){

		j = x;
		ind = 0;
		c = 0;
		while(j){
			if(j&1){
				if((V[ind]&(1<<i)))
					c++;
			}
			j >>= 1;
			ind++;
		}
		if(c > cnt/2)
			return 0;
	}

	return 1;
}

int main(){

	optimise_stuff;
	int n, x, i, j, y;

	cin>>n>>k;
	for(i = 1; i <= n; i++){
		for(j  = 1, y = 0; j <= k; j++){
			cin>>x;
			y <<= 1;
			y |= x;
		}
		if(!Hash[y]){
			Hash[y] = 1;
			V.pb(y);
		}
	}
	int s = V.size();
	for(i = 1; i < (1<<s); i++){
		if(check(i)){
			cout<<"YES\n";
			return 0;
		}
	}

	cout<<"NO\n";
	return 0;
}