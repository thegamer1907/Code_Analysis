#include <bits/stdc++.h>
using namespace std;
int main()
{
	int i,j,k,count=0;
    cin>>i>>j;
    int a[i];
    for(k=0;k<i;k++)
    {
    cin>>a[k];
	}
	for(k=0;k<i;k++)
	{
		if(a[k]>0 && a[k]>=a[j-1])
		count++;
	}
	cout<<count;
	
	return 0;
}
