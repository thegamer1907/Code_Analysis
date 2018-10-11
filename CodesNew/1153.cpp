#include<iostream>
#include<algorithm>
#include<cstdio>
using namespace std;
int a[100010];
int main()
{
	int n;
	scanf("%d",&n);
	if(n==1){
		cout<<1<<"\n";
		return 0;
	}
	int mn=1e9+7,nm=0;
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		int need;
		if(a[i]<i)need=0;
		else{
			need=(a[i]-i)/n;
			if((a[i]-i)%n)need++;
		}
		if(need*n+i<mn){
			mn=need*n+i;
			nm=i+1;
		}
	}
	printf("%d\n",nm);
	return 0;
}
