#include <bits/stdc++.h>
#define INF 2000000000
#define ff first
#define ss second
#define pb push_back

using namespace std;


bool check(long long n, long long k){
	long long aux = n;
	long long vasya  = 0;
	while(aux > 0){
		long long cut = min(k,aux);
		vasya += cut;
		aux -= cut;
		aux -= aux / 10;
	}
	return vasya*2 >= n;
}



int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	long long n;
	cin >> n;
	long long L = 1, R = 1000000000000000000;
	long long ans = 1000000000000000000;
	while(L <= R){
		long long mid = (L+R) / 2;
		if(check(n,mid)){
			ans = min(ans,mid);
			R = mid-1;
		}
		else L = mid+1;
	}
	cout << ans << endl;	
	return 0;
}