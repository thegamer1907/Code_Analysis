#include <iostream>
using namespace std;
int main()
{
  string str;
  cin>>str;
  int ones=0, zeros=0;
  bool flag = 0;
  for(int i=0;i<str.length();i++){
    int a = str[i]-48;
    int b = str[i+1]-48;
    if(a==1)    ones++;
    else    zeros++;
    if(ones==7 || zeros==7){  flag=1;   break;  }
    if(a!=b)      ones=0, zeros=0;
  }
  cout<<(flag ? "YES":"NO");
  return 0;
}
