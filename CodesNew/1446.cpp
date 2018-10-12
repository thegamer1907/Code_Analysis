#include<bits/stdc++.h>
#define ll long long
using namespace std;

int cntb,cnts,cntc;
int nb,ns,nc;
int pb,ps,pc;
ll sum;

bool judge(ll x){
	ll cost=0;
	if(x*cntb>nb) cost+=(x*cntb-nb)*pb;
	if(x*cnts>ns) cost+=(x*cnts-ns)*ps;
	if(x*cntc>nc) cost+=(x*cntc-nc)*pc;
	return cost>sum;
}

/**
C
100 100 100
1 1 1
1000000000000
*/


int main (){
	ios_base::sync_with_stdio(false);
	cin.tie(0),cout.tie(0);
	string str;
	cin>>str;
	cntb=0,cnts=0,cntc=0;
	int len=str.length();
	for(int i=0;i<len;i++)
		if(str[i]=='B') cntb++;
		else if(str[i]=='S') cnts++;
		else if(str[i]=='C') cntc++;
	cin>>nb>>ns>>nc;
	cin>>pb>>ps>>pc;
	cin>>sum;
	ll l=0,r=1e13+7,mid;
	while(r-l>1){
		mid=(l+r)/2;
		if(judge(mid)) r=mid;
		else l=mid;
	}
	cout<<l<<endl;
	return 0;
}
