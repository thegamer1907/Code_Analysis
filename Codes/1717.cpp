#include <bits/stdc++.h>
#define MAX 250000000011
#define LOG 20
using namespace std;
long long n,m,k;
long long  can(long long x){
	long long ans = 0;
	for(int i = 1; i <= m ; i++){
		if(i > x)break;
		int l = 1 , h = n ;
		while(h - l > 1){
			int mid = (l + h) >>1;
			if(x >= 1LL * i * mid)l = mid;
			else h = mid;
		}
		if(x >=1LL *  h * i)ans += h;
		else ans += l;
	}
	return ans;
}
int main(){ 
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);	
	
	cin>>n>>m>>k;
	if(n < m)swap(n,m);
	long long l = 1, h = MAX;
	while(h - l > 1){
		long long mid = (l + h)>>1;
		if(can(mid) >= k) h = mid;		
		else l = mid;
	}
	if(can(l) >= k)cout<<l;
	else cout<<h;
	return 0;
}