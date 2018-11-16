#include<iostream>
#include<string>
using namespace std;
int main()
{
  string s,s1;
  cin>>s;
  for(int i=0;i<s.size();i++)
  {
    s1=s.substr(i,7);
    if(s1=="0000000"||s1=="1111111")
    {
      cout<<"YES";
      return 0;
    }

  }
  cout<<"NO";
}
