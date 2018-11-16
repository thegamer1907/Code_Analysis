#include<bits/stdc++.h>
using namespace std;
int main()
{
      string s;
      int a;
      cin>>s;
      if((s.find("AB",a)!=-1&&s.find("BA",s.find("AB",a)+2)!=-1) || (s.find("BA",a)!=-1 && s.find("AB",s.find("BA",a)+2)!=-1)) cout<<"YES"<<endl;
      else cout<<"NO"<<endl;
}