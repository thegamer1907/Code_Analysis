#include <iostream>
#include <cstdlib>
#include <algorithm> 
using namespace std; 
int n,k,ans,cnt[333333]; 
int main(){
	ios_base::sync_with_stdio(false); 
	cin.tie(NULL); cout.tie(NULL); 
	cin >> n >> k; 
	for (int i = 0; i < n; i++){
		int here = 0;  
		for (int j = 0; j < k; j++){
			int val; 
			cin >> val; 
			here = here*2+val;  
		}
		cnt[here]++; 
	}
	if (cnt[0] > 0){
		ans = 1;  
	}
	for (int i = 0; i < (1<<k); i++){
		for (int j = 0; j < (1<<k); j++){
			if (cnt[i] == 0 || cnt[j] == 0){
				continue; 
			}
			if (i == j && cnt[i] < 2){
				continue; 
			}
			if (i & j){
				continue; 
			}
			ans = 1; 
		}
	}
	if (ans) cout << "YES" << endl; 
	else cout << "NO" << endl; 
	return 0; 
}
