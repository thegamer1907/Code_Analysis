#include <bits/stdc++.h>
using namespace std;

#define ll long long int

vector<ll> p;

ll GreatInt(ll a, ll b){
	if(a%b==0){
		return a/b;
	}
	else{
		return a/b+1;
	}
}

int BinarySearch(int l, int r, ll n){
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
	ll j=1;
	int r=-1, tmp=-1, ans=0;
	while(r<m-1){
		tmp=r;
		r = BinarySearch(r+1, m-1, k*j+r+1);
		if(r<tmp+1){
			j=GreatInt(p[r+1]-r-1,k);
			//cout<<j<<endl;
		}
		else{
			ans++;
		}
	}
	cout<<ans;

	return 0;
}