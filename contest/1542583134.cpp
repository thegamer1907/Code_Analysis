#include<bits/stdc++.h>
using namespace std;
int main()
{
  ios_base::sync_with_stdio(0); cin.tie(0);
  string s;
  cin>>s;
  int n,i,j,f1=0,f2=0;
  cin>>n;
  string ch[101];
  for(i=0;i<n;i++)
  {
     cin>>ch[i];

  }
  for(i=0;i<n;i++)
  {
      if(ch[i]==s)
        {
            cout<<"YES"<<endl;
            return 0;
        }
  }
  for(i=0;i<n;i++)
  {
      for(j=0;j<2;j++)
      {
          if(ch[i][j]==s[0]&&j==1)
          {
              f1=1;
          }
          if(ch[i][j]==s[1]&&j==0)
          {
              f2=2;
          }
      }
  }
  if(f1==1&&f2==2)
  {
      cout<<"YES"<<endl;
  }
  else
     cout<<"NO"<<endl;

}

