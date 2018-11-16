#include <bits/stdc++.h>
using namespace std;
int main()
{
  string no;
  cin>>no;
  for(int i=0;i<no.length();i++)
  {
    if(no[i]=='0')
    {
     if(no[i+1]=='0' && no[i+2]=='0' && no[i+3]=='0' && no[i+4]=='0' && no[i+5]=='0' && no[i+6]=='0')
     {
     cout<<"YES\n";
     return 0;
     }
    }
    else if(no[i]=='1')
    {
     if(no[i+1]=='1' && no[i+2]=='1' && no[i+3]=='1' && no[i+4]=='1' && no[i+5]=='1' && no[i+6]=='1')
     {
     cout<<"YES\n";
     return 0;
     }
    }
  }
  cout<<"NO\n";
return 0;
}