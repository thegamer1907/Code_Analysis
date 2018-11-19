#include<iostream>
#include<cstdio>
#include<cmath>
#include<cctype>
#include<cstring>
#include<algorithm>
#include<vector>
#include<stack>
#include<queue>
#include<set>
#include<map>
using namespace std;
const int maxn=105;
int n;
char a[10],b[maxn][10];
void workin(){
	scanf("%s",a+1);
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		scanf("%s",b[i]+1);
	}
	return;
}
void solve(){
	bool ok=0;
	for(int i=1;i<=n;i++){
		if(b[i][1]==a[1] && b[i][2]==a[2]){
			ok=1;
		}
	}
	bool ok1=0,ok2=0;
	for(int i=1;i<=n;i++){
		if(b[i][2]==a[1]){
			ok1=1;
		}
		if(b[i][1]==a[2]){
			ok2=1;
		}
	}
	ok=ok || (ok1 && ok2);
	if(ok){
		printf("YES");
	}else{
		printf("NO");
	}
	return;
}
int main(){
	//freopen("in.txt","r",stdin);
	//freopen("out.txt","w",stdout);
	workin();
	solve();
	return 0;
}
