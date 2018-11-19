#include<iostream>
#include<algorithm>
#include<cstdio>
#include<cstring>
using namespace std;
char pre[111],last[111],ap,al;
char ch;
int n;
int main(){
	scanf("%c%c",&ap,&al);
	ch=getchar();
	scanf("%d",&n);
	ch=getchar();
	for(int i=1;i<=n;++i){
		scanf("%c%c",&pre[i],&last[i]);
		ch=getchar();
		if(pre[i]==ap&&last[i]==al){
			printf("YES\n");
			return 0;
		}
	}
	for(int i=1;i<=n;++i){
		for(int j=1;j<=n;++j){
			if(pre[i]==al&&last[j]==ap){
				printf("YES\n");
				return 0;
			}
		}
	}
	printf("NO\n");
	return 0;
} 
