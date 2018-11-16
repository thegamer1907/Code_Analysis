#pragma GCC optimize("O3")
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define mx 1000005
#define md ll(1000000007)

string s = "";
ll arr[mx] = {0};


int main(){
	
	ios :: sync_with_stdio(false); cin.tie(0); cout.tie(0);
		
	ll n = 0 , m = 0 ,k = 0, ans = 0;
	
	cin >> n >> m;
	for(int i = 1 ; i < n ; i++){	
		cin >> arr[i];
	}
	ll i = 1;
	while(1){
		//cout << i << endl;
		
		if(i == m){
			cout<< "YES" <<endl;
			return 0;
		}
		if(i == n){
			cout << "NO" <<endl;
			return 0;
		}
		i += arr[i];
	}
		
	
		
	return 0;
}
