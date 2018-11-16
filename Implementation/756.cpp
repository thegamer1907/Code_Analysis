#include<cstdio>
#include<cstring>
using namespace std;
char x[55];
int n,k;
void init(){
	scanf("%d%d%s",&n,&k,x);
	for (int i=1;i<=k;i++)
		for(int j=0;j<n;j++)
			if(x[j]-x[j+1]==-5){x[j]='G';x[j+1]='B';j++;}
	printf("%s\n",x);
}
int main(){
	init();return 0;
}