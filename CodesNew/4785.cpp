// KALAM

#include<bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef long double ld;
const int N = 5e5 + 5;
const int MOD = 1e9 + 7;
const int inf = 1e9;
int n,a[N],l,r;

bool F(int x){
	// 0 to x - 1 = start
	// n - x to n - 1 = finish
	if(x > n / 2)return false;
	for(int i = 0;i < x;i++){
		if(a[i] * 2 > a[n + i - x])return false;
	}
	return true;
}


int main(){
	ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	cin >> n;
	for(int i = 0;i < n;i++)cin >> a[i];
	sort(a,a + n);
	l = 0,r = n ;
	while(r - l > 1){
		int mid = (l + r) / 2;
		if(F(mid)){
			l = mid;
		}
		else{
			r = mid;
		}
	} 
	cout << n - l;
	return 0;
}
