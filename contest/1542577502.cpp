#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
inline void readInt(int &x) {
	x=0;int f=1;char ch=getchar();
	while(!isdigit(ch)){if(ch=='-')f=-1;ch=getchar();}
	while(isdigit(ch))x=x*10+ch-'0',ch=getchar();
	x*=f;
}
inline void readLong(ll &x) {
	x=0;int f=1;char ch=getchar();
	while(!isdigit(ch)){if(ch=='-')f=-1;ch=getchar();}
	while(isdigit(ch))x=x*10+ch-'0',ch=getchar();
	x*=f;
}
/*================Header Template==============*/
int vis[500],c[5],n,k;
vector<int> vec;
inline int lowbit(int x){return x&(-x);}
inline int get(int x) {
	int res=0;
	while(x) {
		res++;
		x-=lowbit(x);
	}
	return res;
}
int main() {
	readInt(n);
	readInt(k);
	for(int i=1;i<=n;++i) {
		int s=0,v;
		for(int j=0;j<k;++j) {
			readInt(v);
			if(v)
				s|=(1<<j);
		}
		vis[s]=1;
	}
	int st=(1<<k);
	for(int i=0;i<st;++i)
		if(vis[i])
			vec.push_back(i);
	int n=vec.size();
	for(int i=0;i<(1<<n);++i)
		if(i!=0) {
			memset(c,0,sizeof c);
			for(int j=0;j<n;++j)
				if(i&(1<<j)) {
					int s=vec[j];
					for(int g=0;g<k;++g)
						if(s&(1<<g))
							c[g]++;
				}
			int flag=1;
			for(int j=0;j<k;++j)
				if(c[j]>get(i)/2)
					flag=0;
			if(flag) {
				printf("YES\n");
				return 0;
			}
		}
	puts("NO");
	return 0;
}