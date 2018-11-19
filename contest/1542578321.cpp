#include<stdio.h>
#include<algorithm>
#include<math.h>
#include<string.h>
#include<string>
#include<vector>
#include<set>
#include<map>
#include<queue>
#include<time.h>
#include<numeric>
#include<assert.h>
#include<iostream>
using namespace std;
typedef long long LL;
typedef pair<int,int>pi;
#define ALL(A) A.begin(),A.end()
int n;
vector<string>v(200+200,"");
vector<string>suf(200+200,"");
vector<string>pre(200+200,"");
bool has[202][8][129];
int deg[222];
int cg(string &s){
	int ret=0;
	for(auto i=0;i<(int)s.size();i++){ret=ret<<1|(s[i]-'0');}
	return ret;
}
bool check(int idx,int now){
	for(int i=0;i<1<<now;i++){
		if(!has[idx][now][i])return 0;
	}
	return 1;
}
int main(){
	while(scanf("%d",&n)!=EOF){
		memset(has,0,sizeof has);
		memset(deg,0,sizeof deg);
		for(int i=0;i<n;i++){
			cin>>v[i];
			for(int len=1;len<=7;len++){
				for(int st=0;st+len-1<(int)v[i].size();st++){
					string tmp=v[i].substr(st,len);
					has[i][len][cg(tmp)]=1;
				}
			}
			int tmplen=min((int)v[i].size(),7);
			pre[i]=v[i].substr(0,tmplen);
			suf[i]=v[i].substr(v[i].size()-tmplen,tmplen);
			deg[i]=0;
			while(deg[i]<7&&check(i,deg[i]+1))deg[i]++;
		}
		int m;scanf("%d",&m);
		int cur=n;
		while(m--){
			int l,r;scanf("%d%d",&l,&r);
			l--,r--;
			for(int len=1;len<=7;len++)for(int i=0;i<128;i++)if(has[l][len][i]||has[r][len][i])has[cur][len][i]=1;
			for(int len=2;len<=7;len++){
				for(int x=1;x<=(int)suf[l].size()&&x<len;x++){
					int y=len-x;
					if(y>(int)pre[r].size())continue;
					auto tmpstr=suf[l].substr(suf[l].size()-x,x)+pre[r].substr(0,y);
					has[cur][len][cg(tmpstr)]=1;
				}
			}
			/*
			v[cur]=v[l]+v[r];
			for(int len=1;len<=7;len++){
				for(int st=0;st+len-1<(int)v[cur].size();st++){
					string tmp=v[cur].substr(st,len);
					has[cur][len][cg(tmp)]=1;
				}
			}
			for(int len=1;len<=7;len++){
				for(int st=0;st+len-1<(int)v[cur].size();st++){
					string tmp=v[cur].substr(st,len);
					has[cur][len][cg(tmp)]=1;
				}
			}
			*/
			/*
			puts("start");
			cout<<pre[l]<<endl<<suf[r]<<endl;
			for(int i=0;i<4;i++)printf("%d ",has[cur][2][i]);puts("");
			*/
			deg[cur]=0;
			while(deg[cur]<7&&check(cur,deg[cur]+1))deg[cur]++;
			if(suf[l].size()<7){
				pre[cur]=suf[l]+pre[r];
				if(pre[cur].size()>7)pre[cur]=pre[cur].substr(0,7);
			}
			else pre[cur]=pre[l];
			if(pre[r].size()<7){
				int nedlen=min(7-(int)pre[r].size(),(int)suf[l].size());
				suf[cur]=suf[l].substr(suf[l].size()-nedlen,nedlen)+pre[r];
			}
			else suf[cur]=suf[r];
			printf("%d\n",deg[cur]);
			cur++;
		}
	}
	return 0;
}
