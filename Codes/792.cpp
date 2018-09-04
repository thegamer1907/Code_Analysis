#include <bits/stdc++.h>
#define MAXN 2000000
#define ll long long
#define ii pair <int, int>
#define f first
#define s second
#define debug_arr(arr, n) cout << #arr << " = "; for (int i=0; i<n; i++) cout << arr[i] << " \n"[i == n-1];
using namespace std;

bool isPot(ll num){
	ll pot = 1;
	if (num == 1) return true;

	while (pot < num){
		pot *= 2;
		if (pot == num) return true;
	}
	return false;
}


void solve(ll n, ll k){

	if (isPot(k)){
		printf("%lld\n", (ll) (log2(k) + 1));

	} else {
		int res = 1;
		
		while (!(k & 1)){
			k /= 2;
			res++;
		}

		printf("%d\n", res);
	}
}

int main(){
	ll n, k;
	cin >> n >> k;

	solve(n, k);

	return 0;
}