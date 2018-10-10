//Garvit Gupta
//MNNIT Allahabad
//gg_14
#include<bits/stdc++.h>
using namespace std;
#define MOD 1000000007
#define inf 1000000009
#define infl 100000000000000000
#define ll long long
#define pb push_back
#define mp make_pair
int main(){
	string str;
	cin >> str;
	int b,s,c;
	b=s=c=0;
	int n=str.length();
	for(int i=0;i<n;i++){
		if(str[i]=='B')
			b++;
		else if(str[i]=='S')
			s++;
		else
			c++;
	}
	// printf("b=%d s=%d c=%d\n",b,s,c);
	int nb,ns,nc,pb,ps,pc;
	scanf("%d%d%d%d%d%d",&nb,&ns,&nc,&pb,&ps,&pc);
	ll r;
	scanf("%lld",&r);
	ll ans=0;
	int tb,ts,tc;
	if(b!=0)
		tb=nb/b;
	else 
		tb=inf;
	if(s!=0)
		ts=ns/s;
	else 
		ts=inf;
	if(c!=0)
		tc=nc/c;
	else 
		tc=inf;
	ll temp=min(min(tb,ts),tc);
	ans+=temp;
	nb-=temp*b;
	ns-=temp*s;
	nc-=temp*c;
	while((b!=0 && nb!=0) || (s!=0 && ns!=0) || (c!=0 && nc!=0)){
		// printf("ans=%lld\n",ans);
		if(nb<b){
			r=r-(b-nb)*pb;
			nb=b;
		}
		if(ns<s){
			r=r-(s-ns)*ps;
			ns=s;
		}
		if(nc<c){
			r=r-(c-nc)*pc;
			nc=c;
		}
		// printf("r=%lld\n",r);
		if(r>=0){
			nb-=b;
			ns-=s;
			nc-=c;
			ans++;
		}else
			break;
	}	
	if((b==0 || nb==0) || (s==0 || ns==0) || (c==0 || nc==0)){
		int ham=b*pb+s*ps+c*pc;
		ans+=r/ham;
	}
	printf("%lld\n",ans);
	return 0;
}