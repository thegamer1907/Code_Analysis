#include<iostream>
#include<string.h>
#include<stdio.h>
using namespace std;
int main()
{
  int n,t,i,j;
  string s;
  cin>>n>>t>>s;
  for(i=1;i<=t;i++)
  {
    for(j=0;j<n;j++)
    {
      if(s[j]=='B' && s[j+1]=='G')
      {
        s[j]='G';
        s[j+1]='B';
        j++;
      }
    }
  }
  cout << s << endl;
  return 0;
}
