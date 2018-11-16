#include<bits/stdc++.h>
using namespace std;
int main(void)
{
  int n,t;
  cin>>n>>t;

  string s1;
  cin>>s1;

    for(int i=0;i<t;i++)
    {

      for(int j=1;j<=n-1;j++)
         if(s1[j]=='G'&&s1[j-1]=='B')
              s1[j]='B',s1[j-1]='G',j++;


    }

    cout<<s1<<endl;
  return 0;
}
