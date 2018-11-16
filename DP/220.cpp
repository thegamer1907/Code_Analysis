#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
	ll n,m;
	cin >> n ;
	ll a[n],fa[n];
	for(ll i=0;i<n;i++){
		cin >> a[i];
		fa[i]=0;
	}
	cin >> m;
	ll b[m],fb[m];
	for(ll i=0;i<m;i++){
		cin >> b[i];
		fb[i]=0;	
	}
	sort(a,a+n);
	sort(b,b+m);
	ll c=0;
	for(ll i=0;i<n;i++){
		for(ll j=0;j<m;j++){
			if(abs(a[i]-b[j]) <=1){
			b[j]=1000;
			c++;
			break;}
		}
	}
	cout << c << endl;
	return 0;
}
