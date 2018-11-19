#include<map>
#include<cstdio>
#include<string>
#include<cstring>
#include<iostream>
#include<algorithm>
using namespace std;

#define len(x) ((int)x.length())
#define For(i,_beg,_end) for(int i=(_beg),i##end=(_end);i<=i##end;++i)
#define Rep(i,_beg,_end) for(int i=(_beg),i##end=(_end);i>=i##end;--i)

template<typename T>T Max(const T &x,const T &y){return x<y?y:x;}
template<typename T>T Min(const T &x,const T &y){return x<y?x:y;}
template<typename T>int chkmax(T &x,const T &y){return x<y?(x=y,1):0;}
template<typename T>int chkmin(T &x,const T &y){return x>y?(x=y,1):0;}
template<typename T>void read(T &x){
	T f=1;char ch=getchar();
	for(;ch<'0'||ch>'9';ch=getchar())if(ch=='-')f=-1;
	for(x=0;ch>='0'&&ch<='9';ch=getchar())x=x*10+ch-'0';
	x*=f;
}

typedef long long LL;
const int N=210;
int n,m,lc[N],rc[N];
LL cnt=0;
bool vis[N];
string s[N][2];
map<string,int>mp;

void Dfs(int x,int k){
	if(vis[x])return;
	vis[x]=true;
	if(!lc[x]){
		For(i,0,len(s[x][0])-k){
			string temp=s[x][0].substr(i,k);
			if(!mp.count(temp))mp[temp]=1,cnt++;
		}
		return;
	}
	string str=s[lc[x]][1]+s[rc[x]][0];
	For(i,0,Min(len(str)-k,len(s[lc[x]][1])-1)){
		string temp=str.substr(i,k);
		if(!mp.count(temp))mp[temp]=1,cnt++;
	}
	Dfs(lc[x],k);Dfs(rc[x],k);
}
bool check(int id,int k){
	mp.clear();cnt=0;
	memset(vis,0,sizeof vis);
	Dfs(id,k);
	return cnt==(1LL<<k);
}

int main(){
	read(n);
	For(i,1,n) cin>>s[i][0],s[i][1]=s[i][0];
	read(m);
	For(i,n+1,n+m){
		read(lc[i]);read(rc[i]);
		s[i][0]=s[lc[i]][0];
		if(len(s[i][0])<100)
			s[i][0]+=s[rc[i]][0].substr(0,Min(len(s[rc[i]][0]),100-len(s[lc[i]][0])));
		s[i][1]=s[rc[i]][1];
		if(len(s[i][1])<100)
			s[i][1]=s[lc[i]][1].substr(Max(0,len(s[lc[i]][1])+len(s[i][1])-100),100-len(s[i][1]))+s[i][1];
		int l=1,r=100,mid,ans=0;
		while(l<=r){
			mid=(l+r)>>1;
			if(check(i,mid))ans=mid,l=mid+1;
			else r=mid-1;
		}
		printf("%d\n",ans);
	}
	return 0;
}