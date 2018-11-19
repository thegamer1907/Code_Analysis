#include <iostream>
#include <cstring>
#include <cstdio>
#include <algorithm>
#include <vector>
using namespace std;

int vis[500],c[5],n,k;
vector<int> Q;

int Count(int x,int cc=0){
	while (x) cc++,x-=x&(-x); return cc;
}

int main(){
	scanf("%d%d",&n,&k);
	for (int i=1;i<=n;++i){
		int s=0,v;
		for (int j=0;j<k;++j){
			scanf("%d",&v);
			if (v) s|=(1<<j);
		}
		vis[s]=1;
	}
	
	int st=(1<<k);
	for (int i=0;i<st;++i) if (vis[i]) Q.push_back(i);
	
	int n=Q.size();
	for (int i=0;i<(1<<n);++i) if (i!=0){
		memset(c,0,sizeof c);
		for (int j=0;j<n;++j) if (i&(1<<j)){
			int s=Q[j];
			for (int g=0;g<k;++g) if (s&(1<<g)) c[g]++;
		}
		int flag=1;
		for (int j=0;j<k;++j) if (c[j]>Count(i)/2) flag=0;
		if (flag) return 0*printf("YES\n");
	}
	puts("NO");
	return 0;
}
