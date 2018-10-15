#include<bits/stdc++.h>
using namespace std;

int shoot(long long b[], long long a[], int n, long long &hit, long long arrow, int i){
	if(hit + arrow < a[i]){
		hit += arrow;
		return i;
	}
	int l = i, r = n;
	int res = 0;
	while(l<=r){
		int mid = (l+r)/2;
		if(b[mid] - b[i-1] - hit <= arrow){
			l = mid + 1;
			res = mid;
		}
		else r = mid - 1;
	}
	if(r==n){
		hit = 0;
		return 1;
	}
	res++;
	long long temp = b[res] - b[i-1] - hit - arrow;
	hit = a[res] - temp;
	return res;
}


int main(){
	int n, q;
	cin>>n>>q;
	long long a[n+3], b[n+3];
	for(int i=1; i<=n; i++){
		cin>>a[i];
		b[i] = b[i-1] + a[i];
	}	
	int res = 1;
	long long hit = 0;
	while(q--){
		long long x;
		cin>>x;
		res = shoot(b,a,n,hit,x,res);
		cout<<n-res+1<<endl;
	}
	return 0;
}
