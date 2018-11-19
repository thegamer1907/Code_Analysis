#include <iostream>
#include <cstdio>
#include <cstdlib>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

const int MAXN=1000;

int n,k,a[16],x[5];
int exp2[10];

void init(){
	exp2[1]=1;
	exp2[2]=2;
	exp2[3]=4;
	exp2[4]=8;
	exp2[5]=16;
	scanf("%d%d",&n,&k);
	for(int i=1;i<=n;i++){
		int tmp=0;
		for(int j=1;j<=k;j++){
			scanf("%d",&x[j]);
			tmp+=x[j]*exp2[j];
		}
		a[tmp]++;
	}
	for(int i=0;i<exp2[k+1];i++){
		for(int j=0;j<exp2[k+1];j++){
			if((i&j)==0){
				if(a[i]!=0 && a[j]!=0){
					printf("YES\n");
					return ;
				}
			}
		}
	}
	printf("NO\n");
}

int main(int argc, char** argv) {
	init();
	return 0;
}
