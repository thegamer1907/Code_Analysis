#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>
#include<map> 
using namespace std;
bool flag[100];
int ans[100],cnt;
int main(){
	int n,k,a;
	scanf("%d%d",&n,&k);
	for(int i=1;i<=n;i++){
		int x=0;
		for(int j=1;j<=k;j++){
			scanf("%d",&a);
			x+=(a<<(k-j)); 
		}
		if(flag[x]!=1){
			ans[++cnt]=x;
			flag[x]=1; 
		}
	}
	bool f=0;
	for(int i=1;i<=cnt;i++)
	for(int j=1;j<=cnt;j++)
	if(!(ans[i]&ans[j])){
		puts("YES");
		f=1;
		return 0;
    }
    if(f==0) puts("NO");

	return 0; 
}
