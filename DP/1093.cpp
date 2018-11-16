#include<iostream>
using namespace std;

int main() {

 int n,k=0,u=0;
 cin>>n;
 bool a[n],b[n];
 for(int i=0;i<n;i++)
 {cin>>a[i];
 }
 for(int i=0;i<n;i++)
 {
   b[i]=a[i];
 }

 for(int j=n-1;j>=0;j--)
  {for(int i=0;i<n&&j>=i;i++)
 {for(int m=i;m<=j;m++)
   {
    if(b[m]==1)
    b[m]=0;
    else
    b[m]=1;
   }
   for(int o=0;o<n;o++)
   {
     if(b[o])
     u+=1;
   }

   if(k<u)
   k=u;
   u=0;
   for(int i=0;i<n;i++)
   {
     b[i]=a[i];
   }
 }
}
cout<<k;
  return 0;
}
