#include<bits/stdc++.h>
using namespace std;
int main()
{
     string s;
     cin>>s;
     vector<int> a;
     vector<int> b;
     for(int i=0;i<s.length()-1;i++)
     {
          if(s[i]=='A' && s[i+1]=='B')
         {
              
              a.push_back(i);
         }
          else if(s[i]=='B' && s[i+1]=='A')
          {
               b.push_back(i);
          }
          
          
     }
     
     for(int i=0;i<a.size();i++)
     {
          for(int j=0;j<b.size();j++)
          {
               if(abs(a[i]-b[j])>1)
               {
                    cout<<"YES";
                    return 0;
               }
          }
     }
     cout<<"NO";
     return 0;
}