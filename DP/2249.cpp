#pragma GCC optimize("O3")
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define mx 100005 
#define md ll(1000000007)

ll arr[mx] = {0};
ll pr[mx] = {0};
ll ans[mx] = {0};

int main(){
	
	ios :: sync_with_stdio(false); cin.tie(0);
	
	ll n , m;
	cin >> n >> m;
	
	for(int i = 1 ; i <= n ; i++){
		cin >> arr[i];
	}
	
	for(int i = n ; i >0 ; i--){
		if(pr[arr[i]] == 1){
			ans[i] = ans[i+1];
		}else{
			ans[i] = ans[i+1] + 1;
			pr[arr[i]] = 1;
		}
	}
	
	ll x;
	
	while(m--){
		cin >> x;
		cout << ans[x] <<endl;
	}	
	
	return 0;
}
