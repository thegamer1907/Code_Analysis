#pragma GCC optimize("O3")
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define mx 100005 
#define md ll(1000000007)

ll arr[mx] = {0};

int main(){
	
	ios :: sync_with_stdio(false); cin.tie(0);
	
	ll n ;
	cin >> n ;
	
	for(int i = 0 ; i <n ; i++ ){
		cin >> arr[i];
	}	
	
	int ans = 0 ;
	int t = 1;
	
	for(int i = 1 ; i < n ; i++){
		if(arr[i] > arr[i-1]){
			t++;
		}else{
			ans = max(ans , t);
			t = 1;
		}
	}
	
	cout << max(t,ans) << endl;
		
	return 0;
}
