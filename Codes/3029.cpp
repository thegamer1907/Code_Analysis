#include<cstdio>
#include<cstring>
using namespace std;

const int MaxN=1000005;

int N;
char S[MaxN];
int Next[MaxN],F[MaxN];

int main(){
	int i,k=0;
	scanf("%s",S+1);
	N=strlen(S+1);
	for(i=2;i<=N;i++){
		while(k&&S[k+1]!=S[i])
			k=Next[k];
		if(S[k+1]==S[i])
			k++;
		Next[i]=k;
	}
	for(i=2;i<N;i++)
		F[Next[i]]=1;
	k=Next[N];
	while(k&&!F[k])
		k=Next[k];
	if(!k)
		puts("Just a legend");
	else for(i=1;i<=k;i++)
		putchar(S[i]);
	return 0;
}