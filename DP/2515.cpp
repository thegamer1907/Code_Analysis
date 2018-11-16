//Malfurion_Drake
#include<bits/stdc++.h>
#define Maxn 100005
using namespace std;

int n,a[Maxn];

template<typename Drake>
void Read(Drake &x){
	x=0;char ch=getchar();int f=1;
	while(!isdigit(ch)){
		if(ch=='-')f=-f;
		ch=getchar();
	}
	while(isdigit(ch)){
		x=(x<<1)+(x<<3)+(ch^48);
		ch=getchar();
	}
	x=x*f;
}

template<typename Drake>
void write(Drake x){
	if(x<0){x=-x;putchar('-');}
	if(x>9)write(x/10);
	putchar(x%10+'0');
}

template<typename Drake>
void writeln(Drake x){
	write(x);
	puts("");
}

/*template<typename Drake>
inline Drake max(Drake Cmp1,Drake Cmp2){
	return(Cmp1>Cmp2 ? Cmp1 : Cmp2);
}

template<typename Drake>
inline Drake min(Drake Cmp1,Drake Cmp2){
	return(Cmp1<Cmp2 ? Cmp1 : Cmp2);
}

void addedge(int u,int v){
	++tot;
	ver[tot]=v;
	Next[tot]=head[u];head[u]=tot;
}*/

void init(){
	Read(n);
	for(int i=1;i<=n;++i)
	Read(a[i]);
}

int main(){
	init();
	int las=1,len=1;
	for(int i=2;i<=n;++i)
	if(a[i-1]>=a[i]){
		len=max(len,i-las);
		las=i;
	}
	len=max(len,n-las+1);
	writeln(len);
	return 0;
}
