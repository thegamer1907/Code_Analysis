#include<bits/stdc++.h>
#define ll long double
using namespace std;
ll a[1000],b[10000];
int main()
{
 ll t,f=0,l,g=0;
 int i,n,j;
 cin>>n>>l;
 cin>>a[0];
 if(a[0]==0)f=1;
 else if(a[0]==l)g=1; 
 for(i=1;i<n;i++)
 {
 cin>>a[i];
 if(a[i]==0)f=1;
 else if(a[i]==l)g=1;
 }
 sort(a,a+n);
 for(j=0;j<n-1;j++)b[j]=a[j+1]-a[j];
 sort(b,b+(n-1));
 if(f==1&&g==1)
 {
  cout<< fixed << setprecision(10) <<b[n-2]/2<<"\n";
 }
 else
 {
 if(f==0&&g==1)
  {
   if(a[0]>b[n-2]/2)cout<< fixed << setprecision(10) <<a[0]<<"\n";
   else cout<< fixed << setprecision(10) <<b[n-2]/2<<"\n";
  } 
  else if(f==1&&g==0)
  {
  if((l-a[n-1])>b[n-2]/2)cout<< fixed << setprecision(10) <<(l-a[n-1])<<"\n";
   else cout<< fixed << setprecision(10) <<b[n-2]/2<<"\n";
  }
  else if(f==0&&g==0)
  {
     if(a[0]>b[n-2]/2||(l-a[n-1])>b[n-2]/2)
      {
       if(a[0]>(l-a[n-1]))cout<< fixed << setprecision(10) <<a[0]<<"\n";
       else cout<< fixed << setprecision(10) <<(l-a[n-1])<<"\n";
      } 
      else cout<< fixed << setprecision(10) <<b[n-2]/2<<"\n";
  }
 }
return 0;
}