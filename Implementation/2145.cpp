#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
	ll n,a,b,c,sum1,sum2,sum3;
	sum1=sum2=sum3=0;
	scanf("%lld",&n);
	for(int i=0;i<n;i++){
		scanf("%lld%lld %lld",&a,&b,&c);
		sum1+=a;
		sum2+=b;
		sum3+=c;
	}
	if(sum1==0 && sum2==0 && sum3==0){
		printf("YES\n");
	}
	else{
		printf("NO\n");
	}
	return 0;
}