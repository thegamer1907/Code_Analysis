#include <bits/stdc++.h>
using namespace std;
int main()
{
int n,k,i,j,l,sum=0,t=0,r,sum1=0;
cin>>n>>k;
set < vector < int >  > x;
vector < int > a;
for(i=0;i<n;i++)
{
for(j=0;j<k;j++)
{
cin>>l;
a.push_back(l);
}
x.insert(a);
a.clear();
}
set < vector < int >  > ::iterator it;
vector < vector < int > > p; 
int c=0,count=0;
for(it=x.begin();it!=x.end();it++)
{
p.push_back(*it);
}
c=x.size();
if(c==1)
{
for(i=0;i<k;i++)
{
if(p[0][i]==0)
{
count++;
}
}
if(count==k)
cout<<"YES"<<endl;
else
cout<<"NO"<<endl;
}
else
{
for(i=0;i<c;i++)
{
for(j=i+1;j<c;j++)
{
count=0;
for(r=0;r<k;r++)
{
if(p[i][r]+p[j][r]==1||p[i][r]+p[j][r]==0)
{
count++;
}
}
if(count==k)
{
cout<<"YES"<<endl;
return 0;
}
}
}
cout<<"NO"<<endl;
}
}