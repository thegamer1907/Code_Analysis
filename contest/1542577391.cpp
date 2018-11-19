#include<cstdio>
#include<set>
#include<cstring>
#include<algorithm>
using namespace std;
int n,k,d,t,f[100010],vis[1000];
set<int>b[10];
bool flag;
int main(){
	//freopen("C.in","r",stdin);
	scanf("%d%d",&n,&k);
	for(int i=1;i<=n;i++){
		flag=true;
		t=0;
		for(int j=1;j<=k;j++){
			scanf("%d",&d);
			t=(t<<1)+d;
			if(d)flag=false;
			else b[j].insert(i);
		}
		if(flag==true){
			printf("YES\n");
			return 0;
		}
		f[i]=t;
		vis[t]=1;
	}
	for(int i=1;i<=(k<<1);i++){
		for(int j=1;j<=n;j++){
			if(vis[f[j]]&&vis[i]&&(f[j]&i)==0){
				printf("YES\n");
				return 0;
			}
		}
	}
	printf("NO\n");
	return 0;
}
