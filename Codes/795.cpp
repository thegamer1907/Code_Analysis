#include <cstdio>
#include <cmath>
using namespace std;

const int N=51;
typedef long long ll;
ll n,k,sum,cnt,a[N];

int main(void){
	scanf("%lld%lld",&n,&k);
//	sum=int(pow(2,n)-1),cnt=n;
	a[0]=1;
	for (int i=1; i<=50; ++i) a[i]=a[i-1]*2;
	
/*	while (1){
		if (k>sum) k-=sum+1;
		if (sum>=k) sum/=2;
		if (k==0){
			printf("%d\n",cnt+1);
			break;
		}
		else --cnt;
	}*/
	while (k!=a[n-1]){
		if (k>a[n-1]) k=a[n]-k;
		--n;
	}
	printf("%d\n",n);
	return 0;
}