#include<bits/stdc++.h>
using namespace std;
const int N=5e5+10;
int st[N],len[N],n,m,exi[N];
char ss[N],res[N];

int main(){
	int i,j,k,l,r,ql,rl;
	scanf("%d",&n);
	for(i=1;i<=n;++i){
		scanf("%s",res);
		m=strlen(res)-1;
		st[i]=st[i-1]+len[i-1];len[i]=m;
		for(j=1;j<=m;++j) 
		ss[j+st[i]-1]=res[j];
	}
	for(i=n;i>1;--i){
		for(k=0;k<min(len[i],len[i-1]) && ss[st[i]+k]==ss[st[i-1]+k];++k);
		if(k==len[i-1]) continue;
		if(k==len[i]){for(j=k;j<len[i-1];++j)exi[st[i-1]+j]=1;len[i-1]=len[i];continue;}
		if(ss[st[i-1]+k]<ss[st[i]+k]) continue;
		else{for(j=k;j<len[i-1];++j)exi[st[i-1]+j]=1;len[i-1]=k;continue;}
	}
	for(i=1;i<=n;++i){
		printf("#");k=st[i];
		for(j=0;j<len[i];++j) 
		printf("%c",ss[k+j]);
		printf("\n");
	}
}