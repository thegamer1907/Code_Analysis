#include <bits/stdc++.h>
using namespace std;
#define int long long

int n ;
bool mark[1000000];
int32_t main(){
	scanf("%lld" , &n);
	vector<int> v(n);
	for(int i = 0 ; i < n; i ++){
		scanf("%lld" , &v[i]);
	}
	sort(v.begin() , v.end());
	int ans = 0;
	int l = (n-1)/2;
	for(int j = n - 1 ; j >= 0 ; j--){
		if(mark[j]) break;;
		l = min(l , j);
		if(l > 0)
		while(!(2*v[l] <= v[j]) || l == j){
			l--;
		}
		if(l >= 0 && 2*v[l] <= v[j] && l != j){
			ans++;
			mark[l] = true;
			l--;
		}
	}
	printf("%d\n" , n - ans);
}