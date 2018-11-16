#include<bits/stdc++.h>
using namespace std;
int main()
{int n,i,j;
cin>>n;
int a[n];
for( i=0;i<n;i++)
  cin>>a[i];
  sort(a,a+n);
int m;
cin>>m;
int b[m];
for(i=0;i<m;i++)
    cin>>b[i];
    sort(b,b+m);
    i=0;j=0;
    int p=0;
while((i<n)&&(j<m))
{if((a[i]==b[j] )||(a[i]+1==b[j])||(a[i]==b[j]+1))
   {i++;
   j++;
   p++;}
   else if(a[i]>b[j])
   j++;
   else if(b[j]>a[i])
   i++;
   else
   {}
   }
   cout<<p;

}
