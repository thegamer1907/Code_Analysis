#include<set>
#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;

const int N=100011;
int a[5][N],n,k,tim[N];
bool f;

int main(){
//	freopen("c.in","r",stdin);
	scanf("%d%d",&n,&k);
	for (int i=1;i<=n;++i){
		bool flag=true;int x=0;
		for (int j=1;j<=k;++j) {scanf("%d",&a[j][i]);if (a[j][i]) flag=false;}
		for (int j=1;j<=k;++j) x+=a[j][i]<<(j-1);tim[x]++;
	    if (flag==true) f=true;
	}
	if (f){printf("YES\n");return 0;}
	for (int i=1;i<(1<<k);++i){
		for (int j=1;j<(1<<k);++j){
			if (i==j) continue;
			if ((i&j)!=0) continue;
		    if (tim[i]&&tim[j]){printf("YES\n");return 0;}
		}
	}
	printf("NO\n");
	return 0;
}
