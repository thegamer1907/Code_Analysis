#include<cstdio>
#include<cstring>
#include<iostream>
#include<algorithm>
using namespace std;

const int N=20;
int n,k;
bool ex[N];

int main(){
	scanf("%d%d",&n,&k);
	for(int i=1, tmp, c; i<=n; ++i){
		tmp = 0;
		for(int j=0; j<k; ++j){
			scanf("%d",&c);
			if(c) tmp += 1<<k-j-1;
		}
		if(tmp==0){ printf("YES"); return 0; }
		ex[tmp] = true;
	}
	for(int i=0, j; i<N; ++i) if(ex[i]){
		for(j=0; j<N; ++j) if(ex[j] && i!=j){
			if((i&j)==0){ printf("YES"); return 0; }
		}
	}
	printf("NO");
	return 0;
}
