#include<bits/stdc++.h>

using namespace std;
const int maxn = 1e5+10;
char s[maxn];
int l,r,sum[maxn];

int main(){
	int n,m;
	scanf("%s",s+1);
	n =strlen(s+1);
	for(int i=2;i<=n;i++){
		if(s[i]==s[i-1]){
			sum[i] = sum[i-1]+1;
		}else sum[i] = sum[i-1];
	}
//	for(int i=1;i<=n;i++) printf("sum[%d] = %d\n",i,sum[i]);
	scanf("%d",&m);
	for(int i=1;i<=m;i++){
		scanf("%d%d",&l,&r);
		printf("%d\n",sum[r]-sum[l]);
	}
} 