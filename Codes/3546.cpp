#include<iostream>

using namespace std;

typedef long long ll;

bool calc(ll k, ll n){
	ll total=n;
	ll eat=0;
	while(n>=k){
		n-=k;
		eat+=k;
		n-=n/10;
	}
	if(n)
		eat+=n;
	if(eat>=(total+1)/2)
		return true;
	return false;
}

int main(){
	ll n;
	cin>>n;
	
	ll low=1,high=n,mid;
	bool flag;
	while(low<high){
		mid=(low+high)/2;
		//cout<<"mid "<<mid<<"\n";
		if(calc(mid,n))
			high=mid;
		else
			low=mid+1;
	}
	cout<<high;
	return 0;
}
	