#pragma GCC optimize("O3")
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define N 1000005
#define md ll(1000000007)

string s = "";
ll arr[N] = {0};


int main(){
	
	ios :: sync_with_stdio(false); cin.tie(0); cout.tie(0);
		
	ll n = 0 , m = 0 ,k = 0, ans = 0;
	
	cin >> s;
	ll sz = s.size();
	ll i = 1;
	ll len = 0;
	ll mx = 0;
	while(i < sz){
		if(s[i] == s[len]){
			len++;
			arr[i] = len;
			i++;
		}else{
			if(len > 0){
				len = arr[len-1];
			}else{
				arr[i] = 0;
				i++;
			}
		}
	}
	
	for(int i = 0 ; i < sz-1 ; i++){
		mx = max(mx,arr[i]);
	}
	ll z = arr[sz-1];
	
	while(z != 0){
		if(mx >= z){
			for(int j = 0; j <z ; j++){
				cout << s[j];
			}
			cout <<endl;
			return 0;
		}else{
			z = arr[z-1];
		}
	}
	cout <<"Just a legend"<<endl;
	
		
		
	return 0;
}
