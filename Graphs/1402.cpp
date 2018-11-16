/*=======Kaihatsu========*/
#include<iostream>
using namespace std;
int main()
{
long n,t,flag=1;
cin>>n>>t;
long a[n-1];
for(int i=0;i<n-1;i++)
	cin>>a[i];
int x=1;
while(flag)
	{
	if(x<t)
	x+=a[x-1];
	if(x==t)
		{
		cout<<"YES";
		flag=0;
		}
	if(x>t)
		{
		cout<<"NO";
		flag=0;
		}
	}
return 0;
}
