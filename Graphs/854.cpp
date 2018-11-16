#include"bits/stdc++.h"

#define MAXN 100005

using namespace std;

int n,t;
int a[MAXN];

void Init(){
	scanf("%d%d",&n,&t);
	for(int i=1;i<=n-1;i++)scanf("%d",&a[i]);
}

void Work(){int flag=1,cur=1;
	while(flag&&cur<=n){
		cur+=a[cur];
		if(cur==t)flag=0;
		if(cur==n&&flag)cur++;
	}
	if(flag)puts("NO");else puts("YES");
}

int main(){
	Init();
	Work();
	return 0;
}	
