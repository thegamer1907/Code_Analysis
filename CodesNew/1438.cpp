#include <bits/stdc++.h>
#include <iostream>
#define fast std::ios::sync_with_stdio(false)
#define ll long long
#define MOD 1000000007
#define CAP 1000000
#define int long long
#define endl "\n"
#define itn int
using namespace std;
//#define inp(a) ll a;cin>>a


main() {
	
	string st;
	cin>>st;
	ll b=0,c=0,s=0,nb,ns,nc,pb,ps,pc,r;
	for(int i=0;i<st.size();i++){
		if(st[i]=='B') b++;
		if(st[i]=='C') c++;
		if(st[i]=='S') s++;
	}

	cin>>nb>>ns>>nc;
	cin>>pb>>ps>>pc;
	cin>>r;

	ll mul=1000000000000000000ll;
	if(b!=0&&mul>(nb/b)) mul=(nb/b);
	if(c!=0&&mul>(nc/c)) mul=(nc/c);
	if(s!=0&&mul>(ns/s)) mul=(ns/s);

	nb-=b*mul;
	ns-=s*mul;
	nc-=c*mul;
	ll cnt=mul;

	
	while(true){

		if(nc*c+nb*b+ns*s==0){
			ll p=s*ps+b*pb+c*pc;
			ll m=r/p;
			cnt+=m;
			break;
		}

		ll pr=0;
		if(nc<c) {pr+=(c-nc)*pc;nc=0;}
		else nc-=c;
		if(ns<s) {pr+=(s-ns)*ps;ns=0;}
		else ns-=s;
		if(nb<b) {pr+=(b-nb)*pb;nb=0;}
		else nb-=b;

		if(pr>r) break;
		cnt++;
		r-=pr;
		
	}
	cout<<cnt;
	return 0;
}