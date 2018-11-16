#include<bits/stdc++.h>
using namespace std;
int main()
{
int n;
cin>>n;
int z=0,max1=0,x,y,i,m=-1,o=0,f=0,g,x1;
int a[n];
for(i=0;i<n;i++)
cin>>a[i];
for(i=0;i<n;i++)
{
if(a[i]==0)
{
x1=m=i;
break;
}
}
if(m!=-1&&m!=(n-1))
{
z++;
while(true)
{
m++;
if(m>=n)
{
break;
}
if(a[m]==0)
z++;
else
o++;
if((z-o)>max1)
{
max1=z-o;
y=m;
x=y-z-o+1;
}
if(z<=o)
{
g=-1;
for(i=m+1;i<n;i++)
{
if(a[i]==0)
{
m=i;
g=0;
break;
}
}
if(g==-1)
break;
z=1;
o=0;
}
}
if(max1==0)
{
x=y=x1;
max1=1;
}
for(i=0;i<x;i++)
{
if(a[i]==1)
f++;
}
for(i=y+1;i<n;i++)
{
if(a[i]==1)
f++;
}
for(i=x;i<=y;i++)
{
if(a[i]==0)
f++;
}
cout<<f<<endl;
}
else if(m==(n-1))
cout<<n<<endl;
else
cout<<(n-1)<<endl;
}
