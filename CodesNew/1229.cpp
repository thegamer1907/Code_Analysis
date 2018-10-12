#include <cstdio>
#include <algorithm>
using namespace std;
int n,a[100100];
int main(){
	int mx=1ll<<30;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
		mx=min(mx,a[i]);
	}
	for(int i=0;i<n;i++)a[i]-=mx;
	int now=mx%n,t=0;
	while(a[now]>t){
		t++;
		now=(now+1)%n;
	}
	printf("%d\n",now+1);
	return 0;
}
