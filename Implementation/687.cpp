#include<stdio.h>
#include<iostream>
#include<algorithm>
#include<cstring>
#include<string>
using namespace std;

int cmp(int a,int b){return a>b;}

int num[51];

int main(){
	int n,k;
	scanf("%d%d",&n,&k);
	
	int ans=n;
	for (int i=1; i<=n; ++i){
		scanf("%d",&num[i]);
		if (num[i]<=0) ans--;
	}
	
	if (ans>k){ 
		while (num[k]==num[k+1]) k++;
		printf("%d",k);	
	}
	else printf("%d",ans);	
	return 0;
}