#include<stdio.h>
using namespace std;
const int maxn = 100010;

long long p[maxn];

int main(void){
	long long n,m,k;
	long long sum;
	long long pos;
	long long i;
	long long ans =0;
	scanf("%lld%lld%lld",&n,&m,&k);
	for( i=1; i<=m; i++ ){
		 scanf("%lld",&p[i]);
	}
	sum=0;
	for( i=1; i<=m; ans++){
		pos = ( ( p[i]-sum-1 )/k+1 )*k +sum ;//µ±Ç°Ò³×îºóµÄÎ»ÖÃ 
		while( i<=m && p[i]<=pos ){
			i++;
			sum++;
			//¼ìË÷ÏÂÒ»¸öÊý 
		} 
	}
	printf("%lld\n",ans);

	
	return 0;
}