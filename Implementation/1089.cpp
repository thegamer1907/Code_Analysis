#include<bits/stdc++.h>
using namespace std;
#define For(n) for (int i=0;i<n;i++)
int main ()
{
int n,t,temp;
cin>>n>>t;

string s;
cin>>s;
For (t)
{
    for (int j=0;j<n-1;j++)
    {
      if (s[j]=='B' && s[j+1]=='G')
      {
          temp=s[j];
          s[j]=s[j+1];
          s[j+1]=temp;
          j++;
      }

    }

}
cout<<s;
return 0;






}
