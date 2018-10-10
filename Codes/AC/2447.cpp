#include<bits/stdc++.h>
 
typedef long long int ll;
typedef unsigned long long int ull;
 
#define fast ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define endl '\n'
#define f first
#define s second
#define pb push_back
#define mp make_pair
#define full(a) a.begin(),a.end()
#define mem(a,x) memset(a,x,sizeof(a))
 
const int MAXN = 1e7+5;
const int MOD = 1e9+7;
 
using namespace std;

bool isPrime[MAXN];
ll ans[MAXN];
int n;
int counter[MAXN];

void sieve() {
	mem(isPrime,true);
	isPrime[0] = isPrime[1] = false;
	for(int i=2;i<MAXN;i++) {
		if(isPrime[i]){
			ans[i]+=(counter[i]);
			for(int j=2*i;j<MAXN;j+=i) {
				isPrime[j] = false;
				ans[i]+=(counter[j]);
				
			}
		}
	}
	for(int i=2;i<MAXN;i++) {
		ans[i]+=(ans[i-1]);
	}
}	

int main() {
	fast;
	cin >> n;
	for(int i=1;i<=n;i++) {
		int x;
		cin >> x;
		counter[x]++;
	}
	sieve();
	int q;
	cin >> q;
	for(int i=1;i<=q;i++) {
		int l ,r;
		cin >> l >> r;
		if(l>=MAXN) {
			cout << 0 << endl;
		}
		else if(r>=MAXN) {
			cout << ans[MAXN-1] - ans[l-1] << endl;
		}
		else {
			cout << ans[r] - ans[l-1] << endl;
		}
	}
}