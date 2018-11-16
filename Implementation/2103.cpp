#include <iostream>
#include <stdio.h>
using namespace std;
int n , sum1 , sum2 , sum3,a,b,c,i;
int main() {
	scanf("%d",&n);
	for(i;i<n;i++){
		scanf("%d %d %d",&a,&b,&c);
		sum1+=a; sum2+=b; sum3+=c;
	}
	if(sum1==0&&sum2==0&&sum3==0)printf("YES\n");
	else printf ("NO\n");
	return 0;
}