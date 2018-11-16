#include<bits/stdc++.h>
using namespace std;
int main()
{
int n,l,i,j,ma=0,d;
cin>>n>>l;
string s;
cin>>s;
for(j=0;j<l;j++)
{
    for(i=0;i<n-1;i++)
    {
      if(s[i+1]=='G'&&s[i]=='B')
      {
          swap(s[i],s[i+1]);
          i=i+1;
      }
    }
}
cout<<s;
}
