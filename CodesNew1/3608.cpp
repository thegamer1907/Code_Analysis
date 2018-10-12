#include <iostream>
#include<algorithm>
using namespace std;
int n;
int m;
int a[1000];
int k=1;
int min1,max1;
int res;
int main()
{
	cin>>n;
	cin>>m;
	k=n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	sort(a+1,a+n+1);
	max1=a[n]+m;
	res = m;
	for(int i=1;i<=n;i++)
	{
		res=res-(a[n]-a[i]);
		if(res<=0)min1=a[n];
		else
	    {
		
		if(res%n==0)min1=a[n]+(res/n);
		else  min1=a[n]+(res/n)+1;
	
	    }
    }
	cout<<min1<<endl;
	cout<<max1;
}