#include"bits/stdc++.h"
#define F(i,j,n) for(register int i=j;i<=n;i++)
using namespace std;
char t[1000010];int z[1000010],n,l; 
int main(){
	#ifndef ONLINE_JUDGE
	freopen("article.in","r",stdin);
	freopen("article.out","w",stdout);
	#endif
	gets(t+1);n=strlen(t+1);
	F(i,2,n){
		z[i]=min(z[i-l+1],max(0,l+z[l]-i)); 
		while(i+z[i]<=n&&t[i+z[i]]==t[1+z[i]])z[i]++;
		if(z[i]+i-1>z[l]+l-1)l=i;
	}
	l=-1;
	F(i,1,n){if(i+z[i]==n+1&&l>=z[i]){puts(t+i);return 0;}l=max(l,z[i]);}
	puts("Just a legend");
	return 0;
}