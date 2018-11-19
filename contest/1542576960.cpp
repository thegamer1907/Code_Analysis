#include <bits/stdc++.h>

using namespace std;

#define repp(i,a,b) for(int i = (int)(a) ; i < (int)(b) ; ++i)
#define repm(i,a,b) for(int i = (int)(a) ; i > (int)(b) ; --i)

int n,k;
int p[16];

int halt(){
	printf("YES\n");
	return 0;
}

int main(){
	scanf("%d%d" , &n , &k);
	repp(i,0,n){
		int z = 0;
		repp(j,0,k){
			int a;
			scanf("%d" , &a);
			if(a) z += (1<<j);
		}
		++p[z];
	}
	repp(i,0,(1<<k)){
		repp(j,0,(1<<k)){
			if(i&j) continue;
			if(i != j && p[i] && p[j]) return halt();
			if(i == j && p[i] > 1) return halt();
		}
	}
	printf("%s\n" , n == 1 && p[0] == 1 ? "YES" : "NO");
	return 0;
}
