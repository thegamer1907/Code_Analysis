#include<iostream>
#include<cstring>
#include<cstdio>
#include<algorithm>
#define MAXN 150
using namespace std;
char str[5];
char s[5];
bool hh[MAXN];
bool kk[MAXN];
int n;

int main(){
	scanf("%s",str+1);
	scanf("%d ",&n);
	int tmp1=str[1];
	int tmp2=str[2];
	for(int i=1;i<=n;i++){
		scanf("%s",s+1);
		int Tmp1=s[1];
		hh[Tmp1]=1;
		int Tmp2=s[2];
		kk[Tmp2]=1;
		if(tmp1==Tmp1&&tmp2==Tmp2){
			printf("Yes\n");
			return 0;
		}
	}
	if(hh[tmp2]==1&&kk[tmp1]==1){
		printf("Yes\n");
		return 0;
	}
	else {
		printf("No\n");
		return 0;
	}
	return 0;
}
