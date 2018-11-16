#include<bits/stdc++.h>
using namespace std;
int main()
{
  int ans=0,k=1;
  string s;  cin>>s;
  for(int i=0 ; i<s.size() ; i++)
  {
     if(s[i]!=s[i+1])
        {
            k=1;
          continue;
        }
   k++;
   if(k==7)
     {
       ans++;
       break;
     }
  }
  (ans>0)? cout<<"YES"<<'\n' : cout<<"NO"<<'\n' ;
}
