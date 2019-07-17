#include <bits/stdc++.h>
using namespace std;

#define ll long long int

vector<ll> p;

int BinarySearch(int l, int r, int n){
	int mid;
	while(l<=r){
		mid = (l+r)/2;
		if(p[mid]==n){
			return mid;
		}
		else if(p[mid]<n){
			l=mid+1;
		}
		else if(p[mid]>n){
			r=mid-1;
		}
	}
	if(p[mid]>n){
		return mid-1;
	}
	else{
		return mid;
	}
}

int main(){
	ll n, k, x;
	int m;
	cin>>n>>m>>k;
	int i;
	for(i=0;i<m;i++){
		cin>>x;
		p.push_back(x);
	}
	int j=1, r=-1, tmp=-1, ans=0;
	while(r<m-1){
		tmp=r;
		r = BinarySearch(r+1, m-1, k*j+r+1);
		if(r<tmp+1){
			j++;
		}
		else{
			ans++;
		}
	}
	cout<<ans;

	return 0;
}