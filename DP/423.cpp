#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
   int n,m,i,j,co,v;
   cin>>n;
   int a[n+4];
   for(i=0;i<n;i++)cin>>a[i];
   cin>>m;
   int b[m+4];
   for(i=0;i<m;i++)cin>>b[i];
   sort(a,a+n);sort(b,b+m);
   i=n-1;j=m-1;
   co=0;
   while(i>=0 && j>=0)
   {
   	v=(a[i]-b[j]);
   	if(v>1)i--;
   	else if(v<-1)j--;
   	else
   	{
   		co++;
   		i--;j--;
	   }
	  // cout<<v<<endl;
   }
   cout<<co<<endl;
   return 0;
}
