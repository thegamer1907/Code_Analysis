#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cstring>
#include<string>
#include<cmath>
using namespace std;
int a[20];
int main()
{
  int n,m;
  cin>>n>>m;
  memset(a,0,sizeof(a));
  for(int i=0;i<n;i++)
  { int tmp;
    int tmp1=0;
  	for(int j=0;j<m;j++)
  	{
  	  scanf("%d",&tmp);
  	  tmp1+=(tmp<<j);
	  }
	 a[tmp1]++;
   }
   int flag=0; 
  for(int i=15;i>=0;i--)
  { if(a[i])
  {
  	for(int j=i;j>=0;j--)
  	{
  	   if(a[j]&&(i&j)==0)
  	   { flag=1;
		 }
  	   
	  } 
  }
  }
  if(flag)
  cout<<"YES"<<endl;
  else
  cout<<"NO"<<endl;
}