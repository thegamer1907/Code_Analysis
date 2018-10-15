#include<bits/stdc++.h>
using namespace::std;

const int N = 100+5;

int n,m;
int a[N];
int minimo;
int maximo;

void LinearSolve(){
	// Solve in O(m*n)
	// Distribute one by one trying to set all
	// benches to the same value if possible
	int left = m;
	for(int i=1; i<=maximo and left > 0; i++){
		for(int j=0; j<n and left > 0; j++){
			if(a[j] < i){
				if(a[j] + left >= i){
					left -= i-a[j];
					a[j] = i;
				}
				else{
					a[j] += left;
					left = 0;
				}
			}
		}
	}
	minimo = 0;
	for(int i=0; i<n; i++){
		minimo = max(minimo,a[i]);
	}	
}

int needed(int x){
	int ans = 0;
	for(int i=0; i<n; i++){
		ans += max(0,x-a[i]);
	}
	return ans;
}

void LogSolve(){
	// Solve in O(nlog(maximo))
	int lo = 0, hi = maximo;
	while(lo < hi){
		int mi = lo + (hi-lo+1)/2;
		if(needed(mi) <= m) lo = mi;
		else hi = mi-1;
	}
	// If we need all m then all will end in lo
	// else we must put the rest in some of them, thus 
	// maximum is lo+1 as minimum one
	// Check for values that are already greater than
	// minimo.
	minimo = needed(lo)==m?lo:lo+1;
	for(int i=0; i<n; i++){
		if(a[i] > minimo) minimo = a[i];
	}
}

int main(){
	scanf("%d %d",&n,&m);
	for(int i=0; i<n; i++){
		scanf("%d",a+i);
		maximo = max(maximo,a[i]);
	}
	maximo += m;
	LinearSolve();
	printf("%d %d\n",minimo,maximo);
	return 0;
}