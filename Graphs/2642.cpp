#include <stdio.h>
#define C 100001

int n, a, par[C], rank[C], i=1, w=0, x, y;

inline int find_par(int a){
	if (par[a]!=a)	par[a]=find_par(par[a]);
	return par[a];
}

void find_union(int a, int b){
	if (rank[a]>rank[b])	par[b]=a;
	else par[a]=b, rank[b]++;
}

int main(){
	while (i<C) {par[i]=i, i++;}
	
	i=1;
	scanf ("%d", &n);
	while (i<=n){
		scanf ("%d", &a);
		x=find_par(a), y=find_par(i);
		if (x!=y)	find_union(x, y);
		i++;
	}
	i=1;
	while (i<=n){
		if (par[i]==i)	w++;
		i++;
	}
	printf ("%d\n", w);
	
return 0;}