#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> PI;
const int MAXL=16;
inline int binToDec(string s){
	int res=0;
	for(int i=0;i<(int)s.size();i++)
		res=(res<<1)|((s[i]-'0')&1);
	return res|=(1<<(int)s.size());
}
struct Status{
	bitset<1<<(MAXL+1)> dic;
	string prefix,suffix;
	bool all;
	inline void update(string s){
		int len=(int)s.size();
		for(int l=1;l<=min(len,MAXL);l++)
			for(int i=0;i+l-1<len;i++)
				dic[binToDec(s.substr(i,l))]=true;
	}
	inline void compress(){
		if((int)prefix.size()>MAXL) prefix=prefix.substr(0,MAXL),all=false;
		if((int)suffix.size()>MAXL) suffix=suffix.substr((int)suffix.size()-MAXL+1,MAXL),all=false;
	}
	inline int query(){
		for(int k=MAXL;k>=1;k--){
			int limit=1<<k;
			bool found=true;
			for(int s=0;s<limit && found;s++)
				if(!dic[s|(1<<k)]) found=false;
			if(found) return k;
		}
		return 0;
	}
} dic[210];
string s;
inline void merge(int cur,int lhs,int rhs){
	dic[cur].dic=dic[lhs].dic|dic[rhs].dic;
	dic[cur].all=false;
	if(dic[lhs].all) dic[cur].prefix=dic[lhs].prefix+dic[rhs].prefix,dic[cur].all=true;
	else dic[cur].prefix=dic[lhs].prefix;
	if(dic[rhs].all) dic[cur].suffix=dic[lhs].suffix+dic[rhs].suffix,dic[cur].all=true;
	else dic[cur].suffix=dic[rhs].suffix;
	dic[cur].update(dic[lhs].suffix+dic[rhs].prefix);
	dic[cur].compress();
	printf("%d\n",dic[cur].query());
}
int main(){
	int n,m,a,b;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>s;
		dic[i].prefix=dic[i].suffix=s;
		dic[i].all=true;
		dic[i].update(s);
		dic[i].compress();
	}
	cin>>m;
	for(int i=1;i<=m;i++){
		cin>>a>>b;
		merge(n+i,a,b);
	}
	return 0;
}