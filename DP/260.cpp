#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
int b,g,i,z=0,j;
cin>>b;
int a[b];
for(i=0;i<b;i++)
cin>>a[i];
cin>>g;
int c[g];
for(i=0;i<g;i++)
cin>>c[i];
sort(a,a+b);
sort(c,c+g);
for(i=0;i<b;i++)
{
for(j=0;j<g;j++)
{
if(a[i]-c[j]<=1&&a[i]-c[j]>=-1)
{
z++;
a[i]=1200;
c[j]=1200;
break;
}
}
}
cout<<z;
}