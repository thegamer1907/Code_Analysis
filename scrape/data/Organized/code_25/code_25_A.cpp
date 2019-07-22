#include<bits/stdc++.h>
#define ll unsigned long long
using namespace std;
int main(){
    
  ll n,m,k,r=0,l=0,p=0,c=0,b=0;
  cin>>n>>m>>k;
  ll a[m];
  for(int i=0;i<m;i++)
   cin>>a[i];
   l=(a[0]-p+k-1)/k;
   l*=k;
   for(int i=0;i<m;i++)
   {
       if((a[i]-c)<=l)
       p++;
       else{
           //cout<<p<<endl;
          l=(a[i]-p+k-1)/k;
          //cout<<l<<endl;
          l*=k;
          //l-=p;
          //cout<<l<<endl;
          c=p;b++;p++;
       }

   }
   cout<<b+1;
    return 0;
}