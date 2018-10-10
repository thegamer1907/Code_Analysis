#include <iostream>
#include <fstream>
#include <stdio.h>
#include <cstring>
#include <algorithm>
#include <cmath>
#include <iomanip>
#include <vector>
#include <map>
#include <set>

#define ll long long
#define ld long double
#define mp make_pair
#define pb push_back
#define pp pop_back
#define F first
#define S second

using namespace std;

const ll INF=1e18;
const ld EPS=1e-10;
const int N=1e5+1;
const int MOD=1e9+7;

ll n,s,a[N],b[N],k,t;

ll f(int v){
	ll q=0;
	for(int i=1;i<=n;i++){
		b[i]=a[i]+1ll*v*i;
	}
	sort(b+1,b+1+n);
	for(int i=1;i<=v;i++){
		q+=b[i];
	}
	return q;
}

int main(){
	cin>>n>>s;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	ll l=1,r=n,mid=0;
	while(r>l){
		mid=(l+r)/2;
		if(f(mid)>=s){
			r=mid;
		}
		else{
			l=mid+1;
		}
	}
	if(f(r)>s){
		r--;
	}
	cout<<r<<" "<<f(r);
	return 0;
}