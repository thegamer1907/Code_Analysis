#include<bits/stdc++.h>
#define lli long long
using namespace std;
int main()
{
lli n,m,k;
cin>>n>>m>>k;
lli ar[m+1],i,ct=0,a,b,c,l,r;
deque<lli>q;
for(i=0;i<m;i++)
cin>>ar[i];
sort(ar,ar+m);
for(i=0;i<m;i++)
q.push_back(ar[i]);
a=0;
b=a;
while(1)
{
if(q.empty())
break;
c=q.front();
c-=a;
l=(((c-1)/k)*k)+1;
r=min(n-a,l+k-1);
ct++;
b=a;
while(q.front()-b<=r&&!(q.empty()))
{
a++;
q.pop_front();
}
}
cout<<ct<<"\n";
return 0;
}