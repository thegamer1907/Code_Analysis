
#define ll long long
#include<iostream>
#include<cstdio>
#include<algorithm>
#include<vector>
#include<set>
#include<map>
#include<cmath>
#include<bitset>

using namespace std;

vector<int> vec;
bool used[10001]={false};

int main ()
{
//    freopen("a.in","r",stdin);
      string s;
      bool ab=false,ba=false;
      cin>>s;
      for(int i=1;i<s.size();i++)
      {
          if(!ab and s[i-1]=='A' and s[i]=='B')
          {
              ab=true;
              if(i != s.size()-1)
              i++;
          }
          else if(!ba and ab and s[i-1]=='B' and s[i]=='A')
          {
              ba=true;
              if(i != s.size()-1)
              i++;
          }

      }
      if(!ab or !ba)
      {
          ab=ba=false;
           for(int i=1;i<s.size();i++)
           {

          if(!ba and s[i-1]=='B' and s[i]=='A')
          {
              ba=true;
              if(i != s.size()-1)
              i++;
          }
          else if(!ab and ba and s[i-1]=='A' and s[i]=='B')
          {
              ab=true;
              if(i != s.size()-1)
              i++;
          }
           }

      }
      (ab and ba)?cout<<"YES":cout<<"NO";

    return 0;
}
