#include<bits/stdc++.h>
using namespace std;
const int mx=13;
char s[1007];
struct str{
	char L[55],R[55];
	int len;
	std::bitset<8211>b[mx];
	void read(){
		for(int i=0;i<mx;++i)b[i].reset();
		scanf("%s",s);
		len=strlen(s);
		for(int i=0;i<len;++i){
			int v=0;
			for(int j=0;j<mx&&i+j<len;++j){
				v=v<<1|(s[i+j]-'0');
				b[j].set(v);
			}
		}
		for(int i=0;i<len&&i<mx;++i)L[i]=s[i],R[i]=s[len-1-i];
		if(len>mx)len=mx;
	}
	str operator+(const str&w){
		str r;
		r.len=min(len+w.len,mx);
		for(int i=0;i<mx;++i)r.b[i]=b[i]|w.b[i];
		for(int i=0;i<len;++i)r.L[i]=L[i];
		for(int i=0;i<w.len;++i)r.L[i+len]=w.L[i];
		for(int i=0;i<w.len;++i)r.R[i]=w.R[i];
		for(int i=0;i<len;++i)r.R[i+w.len]=R[i];
		for(int i=0;i<len;++i){
			int v=0;
			for(int j=i;j>=0;--j)v=v<<1|(R[j]-'0');
			for(int j=0;j<w.len&&i+j+1<mx;++j){
				v=v<<1|(w.L[j]-'0');
				r.b[i+j+1].set(v);
			}
		}
//		for(int i=0;i<r.len;++i)putchar(r.L[i]);printf("...");
//		for(int i=0;i<r.len;++i)putchar(r.R[r.len-1-i]);puts("");
		return r;
	}
	void pr(){
		for(int i=0;i<mx;++i){
			if(b[i].count()<(2u<<i)){
				printf("%d\n",i);
				return;
			}
		}
	}
}ss[207];
int n,m;
int main(){
	scanf("%d",&n);
	for(int i=1;i<=n;++i){
		ss[i].read();
	}
	scanf("%d",&m);
	for(int i=0,a,b;i<m;++i){
		scanf("%d%d",&a,&b);
		ss[++n]=ss[a]+ss[b];
		ss[n].pr();
	}
	return 0;
}
