#include <cstdio>
#include <cstdlib>
#include <vector>
#include <algorithm>
using namespace std;
const int INF=2000000000;
int a[105],b[105];
int main(){
	int n,k;
	scanf("%d%d",&n,&k);
	int pos;
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
		if(a[i]==0) pos=i;
	}
	for(int i=0;i<k;i++) scanf("%d",&b[i]);
	if(k==1){
		a[pos]=b[0];
		for(int i=1;i<n;i++) if(a[i]<a[i-1]) return 0*puts("Yes");
		puts("No");
	}
	else puts("Yes");
	return 0;
}