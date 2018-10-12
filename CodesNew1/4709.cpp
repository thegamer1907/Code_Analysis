#include<bits/stdc++.h>
using namespace std;
int arr[3000000], vis[3000000]={0};
int bs(int l, int r, int num, int ind)
{
	int mid=(l+r)/2;
	if(l>r)
	{
		if(arr[mid]>=2*num)
			return max(mid,ind);
		else
			return mid+1;
	}
	if(arr[mid]>=2*num)
		return bs(l,mid-1,num,ind);
	else if(arr[mid]<2*num)
		return bs(mid+1,r,num,ind);
	
}
int main()
{
	int i, j, k;
	int ind, n,mid,count1=0;
	scanf("%d", &n);
	for(i=1;i<=n;i++)
		scanf("%d", &arr[i]);
	sort(&arr[1], &arr[1]+n);
	mid=n/2;
	ind=mid+1;
	for(i=1;i<=mid;i++)
	{
		ind=bs(ind,n,arr[i],ind);
		if(ind<=n)
			count1++;
		ind++;
		if(ind>n)
			break;
	}
	printf("%d\n",n-count1);
	return 0;
}

