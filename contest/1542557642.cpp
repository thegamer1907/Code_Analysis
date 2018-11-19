#include <bitset>
#include <cstdio>
#include <cstring>
#include <iostream>
#include <algorithm>

const int lim=10; 

using namespace std;

int n,m,len; 
char s[105]; 

struct Str{
	int l; 
	char L[15],R[15]; 
	bitset<2005> bt[15];
	friend Str operator + (Str A, Str B) {
		Str ret; 
		for(int i=1; i<=lim; ++i) ret.bt[i]=A.bt[i]|B.bt[i]; 
		ret.l=min(lim,A.l+B.l); 
		for(int i=1; i<=A.l; ++i) ret.L[i]=A.L[i]; 
		for(int i=A.l+1; i<=ret.l; ++i) ret.L[i]=B.L[i-A.l]; 
		for(int i=1; i<=B.l; ++i) ret.R[i]=B.R[i]; 
		for(int i=B.l+1; i<=ret.l; ++i) ret.R[i]=A.R[i-B.l]; 
		len=0; 
		for(int i=1; i<=A.l; ++i) s[++len]=A.R[A.l-i+1]; 
		for(int i=1; i<=B.l; ++i) s[++len]=B.L[i]; 
		for(int i=1; i<=ret.l; ++i) {
			int v=0; 
			for(int j=1; j<=ret.l && i+j-1<=len; ++j) {
				v=(v<<1)|(s[i+j-1]-'0'); 
				ret.bt[j].set(v); 
			}
		}
		return ret; 
	}
}nd[210]; 

void init(int x) {
	scanf("%s",s+1); 
	len=strlen(s+1); 
	for(int i=1; i<=lim; ++i) nd[x].bt[i].reset(); 
	nd[x].l=min(lim,len); 
	for(int i=1; i<=nd[x].l; ++i) nd[x].L[i]=s[i],nd[x].R[i]=s[len-i+1]; 
	for(int i=1; i<=len; ++i) {
		int v=0; 
		for(int j=1; j<=lim && i+j-1<=len; ++j) {
			v=(v<<1)|(s[i+j-1]-'0'); 
			nd[x].bt[j].set(v); 
		}
	}
}

void ask(int x) {
	for(int i=nd[x].l; i>=1; --i)
		if(nd[x].bt[i].count()==(1<<i)) {
			printf("%d\n",i); 
			return ; 
		}
	printf("0\n"); 
}

int main() {
	int a,b; 
	scanf("%d", &n); 
	for(int i=1; i<=n; ++i) init(i); 
	scanf("%d", &m); 
	for(int i=1; i<=m; ++i) {
		scanf("%d%d",&a,&b); 
		nd[++n]=nd[a]+nd[b]; 
		ask(n); 
	}
	return 0; 
}