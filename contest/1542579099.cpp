#include<stdio.h>
#include<algorithm>
#include<cstring>
#define go(i,a,b) for(int i=a;i<=b;i++)
using namespace std;
const int N=100003;
int n,k,a[N],QAQ,num[N],S;
int main()
{
	scanf("%d%d",&n,&k);
	for(int i=1;i<=n;i++)
	//asidgsidfg ygdfuisdhchusd
	{
		for(int j=1;j<=k;j++){
			scanf("%d",&QAQ);
			(a[i]<<=1)+=QAQ;
		}
		S=a[i]^((1<<4)-1);
		for(int hh=S;hh;hh=S&(hh-1))num[hh]++;
		if(!a[i]){
			puts("YES");
			return 0;
		}
	}
	for(int i=1;i<=n;i++){
		if(num[a[i]]){
			puts("YES");
			return 0;
		}
	}
	puts("NO");
	return 0;
}
