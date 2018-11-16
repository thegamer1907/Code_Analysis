//Malfurion_Drake
#include<bits/stdc++.h>
#define Maxn 100005
using namespace std;

int n,ver[Maxn<<1],head[Maxn],dis[Maxn],Pair,tot,Next[Maxn<<1];

template<typename Drake>
void read(Drake &x){
	x=0;char ch=getchar();bool f=1;
	while(!isdigit(ch)){
		if(ch=='-')f^=1;
		ch=getchar();
	}
	while(isdigit(ch)){
		x=(x<<1)+(x<<3)+(ch^48);
		ch=getchar();
	}
	x*=(2*f-1);
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

void addedge(int u,int v){
	++tot;
	ver[tot]=v;
	Next[tot]=head[u];head[u]=tot;
}

void init(){
	read(n);
	int u,v;
	tot=0;
	memset(head,0,sizeof head);
	for(int i=1;i<=n;++i){
		read(v);
		addedge(i,v);
		addedge(v,i);
	}
}

void Dfs(int Node){
	for(int i=head[Node];i;i=Next[i])
	if(dis[ver[i]]==0){
		dis[ver[i]]=1;
		Dfs(ver[i]);
	}
}

int main(){
	init();
	memset(dis,0,sizeof dis);
	Pair=0;
	for(int i=1;i<=n;++i)
	if(dis[i]==0){
		Pair++;
		Dfs(i);
	}
	writeln(Pair);
	return 0;
}
