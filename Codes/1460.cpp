#include<bits/stdc++.h>
using namespace std;

long long n, S;
long long a[100005];
long long c[100005];
long long l,r,mid,ans,anss;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0);
	cin >> n >> S;
	for(int i=1; i<=n; i++){
		cin >> a[i];
	}
	l=1, r=n, ans=anss=0;
	while(l<=r){
		long long s = 0;
		mid = (l+r)/2;
		for(int i=1; i<=n; i++){
			c[i] = a[i] + i*mid;
		}
		sort(c+1,c+n+1);
		for(int i=1; i<=mid; i++){
			s += c[i];
		}
		if(s<=S){
			if(mid>ans){
				ans = mid;
				anss = s;
			}
			l = mid+1;
		}
		else{
			r = mid-1;
		}
	}
	cout << ans << " " << anss << endl;
	return 0;
}