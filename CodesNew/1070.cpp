#include<bits/stdc++.h>
using namespace std;
long long ans=0;
long long binary(long long start,long long end,long long s,long long a[],long long n)
{
  long long index=0,mid,cost=0;
  multiset <long long> copy;
  auto itr=copy.begin();
  while(start<=end)
  {
     mid=start + (end-start)/2;
     cost=0;
     for(long long j=0;j<n;j++)
     { copy.insert( a[j]+ mid*(j+1) );}
     itr=copy.begin();
     for(long long i=0;i<mid;i++)
     { cost+= *itr;itr++;}
     copy.clear();
     if(cost>s)
     { end=mid-1;}
     else{    
       index=mid;
      start=mid+1;ans=cost;}  
   }
  
  return index;
}
int main()
{
  long long n,s;cin>>n>>s;
  long long a[n];
  for(long long i=0;i<n;i++)cin>>a[i];
  long long index=0;
  index=binary(0,n,s,a,n);
  cout<<index<<" "<<ans;
  return 0;
}