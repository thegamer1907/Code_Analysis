#include<bits/stdc++.h>
#define ll long long
const int maxn=1000010;
using namespace std;
char c[100];
int main()
{
	int N,ans=0,i,j;
	scanf("%d",&N);
	for(i=1;i<=N;i++){
		scanf("%s",c);
		if(c[0]=='T') ans+=4;
		else if(c[0]=='C') ans+=6;
		else if(c[0]=='O') ans+=8;
		else if(c[0]=='D') ans+=12;
		else ans+=20;
	}
	printf("%d\n",ans);
	return 0;
}