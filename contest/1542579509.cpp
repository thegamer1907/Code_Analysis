#include<stdio.h>
#include<algorithm>
#include<cstring>
#define go(i,a,b) for(int i=a;i<=b;i++)
using namespace std;
const int N=100003;
int n,k,a[N],_,num[N],S;
int main()
{

	
	scanf("%d%d",&n,&k);
	go(i,1,n)
	{
		go(j,1,k)scanf("%d",&_),(a[i]<<=1)+=_;S=a[i]^((1<<4)-1);
		for(int s=S;s;s=S&(s-1))num[s]++;
		if(!a[i]){puts("YES");return 0;}
	}
	
	go(i,1,n)if(num[a[i]]){puts("YES");return 0;};puts("NO");return 0;
}//Paul_Guderian

