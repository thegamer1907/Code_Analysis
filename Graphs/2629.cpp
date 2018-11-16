#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
int fa[10005];
int find(int x){
	if(fa[x]==x) return x;
	else return fa[x]=find(fa[x]);
}
void merge(int x,int y){
	int fx=find(x);
	int fy=find(y);
	if(fx!=fy) fa[fx]=fy;
}
int n;
int main(){
	int p;
	scanf("%d",&n);
	for(int i=1;i<=n;i++) fa[i]=i;
	for(int i=1;i<=n;i++){
		scanf("%d",&p);
		merge(i,p);
	}
	int cnt=0;
	for(int i=1;i<=n;i++){
		if(fa[i]==i) cnt++; 
	}
	printf("%d\n",cnt);
}