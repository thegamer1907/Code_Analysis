#include<iostream>
#include<cmath>

using namespace std;

int main()
{
  int i,n,m,sum=0,minn=0,maxx=0,k,l;
  cin>>n;
  int arr[n];
  cin>>m;
  for(i=0;i<n;i++)
  	{
  		cin>>arr[i];
  		sum+=arr[i];
  		if(arr[i]>maxx)maxx=arr[i];
  		if(arr[i]<minn)minn=arr[i];
  	}
  k=maxx+m;

  if(m+sum<=maxx*n)
  	l=maxx;
  else l=ceil((m+sum)/(n+0.0));
  cout<<l<<" "<<k<<endl;



  
}
