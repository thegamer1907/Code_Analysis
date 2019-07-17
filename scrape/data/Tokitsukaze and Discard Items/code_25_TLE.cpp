#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    
  ll n,m,k,r=0,l=0,p=0,c=0,b=0;
  cin>>n>>m>>k;
  ll a[m];
  for(int i=0;i<m;i++)
   cin>>a[i];
   l=ceil(a[0]/float(k));
   l*=k;
   for(int i=0;i<m;i++)
   {
       if((a[i]-c)<=l)
       p++;
       else{
           //cout<<p<<endl;
          l=ceil((a[i]-p)/float(k));
          l*=k;i--;
          c=p;b++;
       }

   }
   cout<<b+1;
   
     
    return 0;
}