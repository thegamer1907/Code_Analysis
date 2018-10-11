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

	// cout<<cnt<<endl;
	// cout<<b<<" "<<s<<" "<<c<<endl;
	
	while(true){

		if(nc*c+nb*b+ns*s==0){
			ll p=s*ps+b*pb+c*pc;
			ll m=r/p;
			cnt+=m;
			break;
		}

		if((nc*c+ns*s==0)&&b!=0&&nb>=b){
			ll mu=nb/b;
			ll p=c*pc+s*ps;
			mu=min(mu,r/p);
			r-=p*mu;
			cnt+=mu;
			nb%=b;
		}

		if((nb*b+ns*s==0)&&c!=0&&nc>=c){
			ll mu=nc/c;
			ll p=b*pb+s*ps;
			mu=min(mu,r/p);
			r-=p*mu;
			cnt+=mu;
			nc%=c;
		}

		if((nc*c+nb*b==0)&&s!=0&&ns>=s){
			ll mu=ns/s;
			ll p=c*pc+b*pb;
			mu=min(mu,r/p);
			r-=p*mu;
			cnt+=mu;
			ns%=s;
		}

		if(c+b==0){
			ll p=r/ps;
			p/=s;
			cnt+=p;
			break;
		}
		if(c+s==0){
			ll p=r/pb;
			p/=b;
			cnt+=p;
			break;
		}
		if(s+b==0){
			ll p=r/pc;
			p/=c;
			cnt+=p;
			break;
		}

		if(b==0&&s!=0&&c!=0){
			ll mul = min(ns/s,nc/c);
			ll pr = mul*s*ps+mul*c*pc;
			if(pr<=r){
				r-=pr;
				cnt+=mul;
			}
		}

		if(b!=0&&s==0&&c!=0){
			ll mul = min(nb/b,nc/c);
			ll pr = mul*b*pb+mul*c*pc;
			if(pr<=r){
				r-=pr;
				cnt+=mul;
			}
		}

		if(b!=0&&s!=0&&c==0){
			ll mul = min(ns/s,nb/b);
			ll pr = mul*s*ps+mul*b*pb;
			if(pr<=r){
				r-=pr;
				cnt+=mul;
			}
		}

		if(b!=0&&s!=0&&c!=0){
			ll mul=min(min(ns/s,nc/c),nb/b);
			ll pr = mul*(s*ps+b*nb+c*nc);
			if(pr<=r){
				r-=pr;
				cnt+=mul;
			}
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
		// cout<<"$"<<pr<<endl;
		// cout<<"#"<<cnt<<" "<<r<<endl;
		// cout<<"##"<<nb<<" "<<ns<<" "<<nc<<endl;
		
	}
	cout<<cnt;
	return 0;
}