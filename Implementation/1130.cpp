#include<bits/stdc++.h>
using namespace std;
int main(void)
{
  int n,t;
  cin>>n>>t;

  string s1,s2;
  cin>>s1;

    for(int i=0;i<t;i++)
    {
      s2=s1;
      for(int j=1;j<=n-1;j++)
         if(s1[j]=='G'&&s1[j-1]=='B')
              s2[j]='B',s2[j-1]='G';

      s1=s2;
    }

    cout<<s1<<endl;
  return 0;
}
