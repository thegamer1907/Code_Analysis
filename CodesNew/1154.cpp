#include<bits/stdc++.h>
using namespace std;
#define N 100001
int n,a[N],mn,id;
int main()
{
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	  {
	  scanf("%d",&a[i]);
	  int res=a[i]+1;res+=(i+n-res%n)%n;
	  if(res<mn || !id)mn=res,id=i;
	  }
	return printf("%d\n",id),0;
}
