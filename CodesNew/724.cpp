#include<iostream>
#include<string>
using namespace std;
int n,m,k,i,j;
string s1[1001],s2[1001];
int main()
{
cin>>n>>m;
if(n>m)
{
cout<<"YES";
return 0;
}
if(m>n)
{
cout<<"NO";
return 0;
}
for(i=0;i<n;i++)
cin>>s1[i];

for(j=0;j<m;j++)
cin>>s2[j];

for(i=0;i<n;i++)
for(j=0;j<m;j++)
if(s1[i]==s2[j])
{
k++;
break;
}
if(k%2==0)
cout<<"NO";
else
cout<<"YES";
}