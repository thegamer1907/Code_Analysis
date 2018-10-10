#include<stdio.h>
#include<string.h>
#include<iostream>
using namespace std;
typedef unsigned long long LL;
const int N=1000010;
int n,nxt[N];bool tag[N];
char str[N];
int main(){
	//freopen("article.in","r",stdin);
	//freopen("article.out","w",stdout);
	scanf("%s",str+1);n=strlen(str+1);
	int j=0,ans;
	for(int i=2;i<=n;i++){
		while(j&&str[i]!=str[j+1])j=nxt[j];
		if(str[i]==str[j+1])j++;
		nxt[i]=j;if(i<n)tag[j]=1;
	}
	for(ans=n;ans;ans=nxt[ans])
		if(tag[ans])break;
	if(ans)for(int i=1;i<=ans;i++)printf("%c",str[i]);
	else puts("Just a legend");
	return 0;
}
