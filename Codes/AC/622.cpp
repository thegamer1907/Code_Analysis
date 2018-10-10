#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
using namespace std;
typedef int_fast64_t lld;

inline bool isOK(lld);

int main(){
	ios_base::sync_with_stdio(0);cin.tie(0);
	int n, cnt = 0; cin>>n;
	lld i;
	for(i=19;cnt<n;i++){
		if(isOK(i)) cnt++;
	}
	cout << i-1 << '\n';
	return 0;
}

inline bool isOK(lld x){
	int tot = 0;
	while(x){
		tot += x%10;
		x/=10;
		if(tot > 10) return false;
	}
	return tot==10;
}