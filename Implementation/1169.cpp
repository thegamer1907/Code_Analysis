#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
  int n,t,i;
  cin>>n>>t;
   string str;
   cin>>str;
  while(t--)
  {


      for(i=0;i<n-1;i++)
      {
          if(str[i]=='B' && str[i+1]=='G')
          {
              swap(str[i],str[i+1]);
              i++;
          }
      }
  }
     cout<<str;


}
