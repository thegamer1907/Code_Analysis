#pragma GCC optimize("O3")
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define mx 1000005
#define md ll(1000000007)

ll arr[mx] = {0};
ll brr[mx] = {0};
ll crr[mx] = {0};

int main(){
	
	ios :: sync_with_stdio(false); cin.tie(0);
	
	ll n;
	cin >> n;
	
	for(int i = 1 ; i <= n ; i++){
		cin >> arr[i];
	}
	
	for(int i = 1 ; i <= n ; i++){
		arr[i] += arr[i-1];
	}	
	
	if(arr[n] %3 != 0){
		cout <<0 <<endl;
		return 0;
	}
	
	ll l = arr[n]/3;
	ll ans = 0;
	
	if(l == 0){
		ll x = 0;
		for(int i = 1 ; i <=n ; i++){
			if(arr[i] == 0){
				x++;
			}
		}
		ans = (x-1)*(x-2)/2 ;
		cout << ans << endl;
		return 0;
	}
	
	for(int i = n ; i >0 ; i--){
		if(arr[i] == 2*l){
			crr[i] = crr[i+1] + 1;
		}else{
			crr[i] = crr[i+1];
		}
		
	}
	
	for(int i = 1 ; i <=n ; i ++){
		if(arr[i] == l){
			ans += crr[i];
		}
	}
	cout << ans <<endl;
	
	return 0;
}
