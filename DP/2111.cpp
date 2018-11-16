#include<bits/stdc++.h>
using namespace std;
int main()
{
 int n,m;
 cin>>n>>m;
 int i,j;
 int a[n];
 for(i=0;i<n;i++)
 {
     cin>>a[i];
 }
 
unordered_set<int>s;
int b[n];

b[n-1]=1;
s.insert(a[n-1]);

for(i=n-2;i>=0;i--)
{
   if(s.find(a[i])==s.end())
   {
       b[i]=b[i+1]+1;
       s.insert(a[i]);
   }
   else
   b[i]=b[i+1];
    
}


for(i=0;i<m;i++)
{
    int x;
    cin>>x;
    cout<<b[x-1]<<endl;
}


return 0;    
}