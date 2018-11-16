#include <iostream>
using namespace std;
int main()
{
  int n,t,i,j,a;
  string str;
  cin>>n>>t;
  cin>>str;
  for(j=0;j<t;j++)
  {
    for(i=0;i<n;i++)
    {
      if (str[i]=='B')
      {
        if (str[i+1]=='G')
        {
          str[i+1]='B';
          str[i]='G';
          i++;

        }
      }
    }
  }
  cout<<str;

}