#include <cstdio>
using namespace std;
int n,k,x;
int a[100050][10];
int cnt[20];
int main(){
	scanf("%d%d",&n,&k);
	for (int i=1;i<=n;i++)
		for (int j=1;j<=k;j++) scanf("%d",&a[i][j]);
	for (int i=1;i<=n;i++){
		x=0;
		for (int j=1;j<=k;j++) x=x*2+a[i][j];
		cnt[x]++;
	}
	for (int i=0;i<16;i++)
		for (int j=0;j<16;j++) if ((i&j)==0 && cnt[i] && cnt[j]){
			printf("YES\n");
			return 0;
		}
	printf("NO\n");
	return 0;
}