#include <iostream>
#include <cstring>
#include <cstdio>
using namespace std;

int n,k; int bo[100];

int main(){
	scanf("%d%d",&n,&k);
	for(int i=1;i<=n;i++){
		int x=0,tp;
		for(int j=0;j<k;j++){
			scanf("%d",&tp);
			x+=tp<<j;
		}
		bo[x]=true;
	}
	bool flag=false;
	for(int i=0;i<16;i++){
		for(int j=0;j<16;j++){
			if((i&j)==0 && bo[i] && bo[j]){
				flag=true;
			}
		}
	}
	if(flag) puts("YES");
	else puts("NO"); 
}