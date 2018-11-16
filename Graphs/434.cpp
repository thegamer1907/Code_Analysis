#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n,t;
  std::cin >> n >> t;
  string s;
  std::cin >> s;
  for(int i=0;i<t;i++)
  {
    for(int i=0;i<s.size();i++)
    {
      if(s[i]=='B' && s[i+1]=='G')
      {
        char c=s[i];
        s[i]=s[i+1];
        s[i+1]=c;
        i++;
      }
    }
  }
  std::cout << s;
}
