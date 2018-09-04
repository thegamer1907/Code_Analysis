#include <cstdio>
#include <cmath>
using namespace std;

const int N=51;
typedef long long ll;
ll n,k,sum,cnt;

int main(void){
	scanf("%lld%lld",&n,&k);
	sum=(long long)(pow(2,n)-1),cnt=n;
	while (1){
		if (k>sum) k-=sum+1;
		if (sum>=k) sum/=2;
		if (k==0){
			printf("%d\n",cnt+1);
			break;
		}
		else --cnt;
	}
	return 0;
}