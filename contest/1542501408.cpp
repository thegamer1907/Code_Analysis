#include<bitset>
#include<string>
#include<cstdio>
#include<cstring>
#include<algorithm>
#include<iostream>
#define rep(i,l,r) for (int i=(l); i<=(r); i++)
using namespace std;

const int N=16,M=1<<17;
string s;

int get(string s){
	int sz=s.size(),ans=0;
	for(int i=0; i<sz; i++)
	ans=(ans<<1) | (s[i]&1);
	return (1<<sz) | ans;
}

struct str{
	bitset<M> bk;
	string pre,suf;
	bool all;
	void upd(string s){
		int up=s.size();
		for(int len=1; len<=min(up,N); len++)
			for(int i=0; i+len<=up; i++)
				bk[get(s.substr(i,len))]=1;
	}
	void work(){
		if(pre.size()>N) pre=pre.substr(0,N),all=0;
		if(suf.size()>N) suf=suf.substr(suf.size()-N,N),all=0;
	}
	int que(){
		for(int i=N; i>=0; i--){
			int ok=1,up=1<<i;
			for(int j=0; j<up; j++)
			if(!bk[up | j]){ ok=0; break; }
			if(ok) return i;
		}
		return 0;
	}
}ac[210];

void solve(int now,int l,int r){
	ac[now].bk=ac[l].bk | ac[r].bk;
	if(ac[l].all) ac[now].pre=ac[l].pre+ac[r].pre,ac[now].all=1;
	else ac[now].pre=ac[l].pre;
	if(ac[r].all) ac[now].suf=ac[l].suf+ac[r].suf,ac[now].all=1;
	else ac[now].suf=ac[r].suf;
	ac[now].upd(ac[l].suf+ac[r].pre);
	ac[now].work();
}

int main(){
	ios::sync_with_stdio(0);
	int n,m,l,r; cin>>n;
	rep(i,1,n) cin>>s,ac[i].upd(s),ac[i].pre=ac[i].suf=s,ac[i].all=1,ac[i].work();
	cin>>m;
	rep(i,1,m) cin>>l>>r,solve(n+i,l,r),cout<<ac[n+i].que()<<endl;
	return 0;
}
