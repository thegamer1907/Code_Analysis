#include<iostream>
int n,k,i,sum=0,a[51];
using namespace std;
int main()
{
    cin>>n>>k;
    for(i=0;i<n;i++)  
		cin>>a[i];
    for(i=0;i<n;i++)
		if(a[i]>=a[k-1]&&a[i]!=0)	sum++;
    cout<<sum;
	return 0; 
}

