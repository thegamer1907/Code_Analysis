#include<bits/stdc++.h>
using namespace std;
long long  b,s,c;
long long nb,ns,nc;
long long pb,ps,pc;
long long rr,sm;
string ss;
bool check(long long tot){
	long long bb=(tot*b-nb)*pb;
	long long ss=(tot*s-ns)*ps;
	long long cc=(tot*c-nc)*pc;
	if(bb<0) bb=0;
	if(ss<0) ss=0;
	if(cc<0) cc=0;
	sm=bb+ss+cc;
	if(sm<=rr) return true;
	return false;
	
}
int main(){
	cin>>ss;
	for(int i=0;i<ss.size();i++){
		if(ss[i]=='B') b++;
		else if(ss[i]=='S') s++;
		else c++;
	}
	cin>>nb>>ns>>nc;
	cin>>pb>>ps>>pc;
	cin>>rr;
	long long l=1;
	long long r=1e14;
	long long ans=0;
	while(l<=r){
		long long mid=(l+r)>>1;
		if(check(mid)){
			ans=mid;
			l=mid+1;
		}
		else r=mid-1;
	}
	cout<<ans;
	return 0;
}