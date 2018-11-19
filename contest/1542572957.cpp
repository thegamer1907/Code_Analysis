#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str[1230];
    string pass;
    int n,i;
    string ans;
    string rev;
    cin>>pass;
    //cout<<endl;
    rev="";
    rev+=pass[1];
    rev+=pass[0];
    cin>>n;
    int f1=0,f2=0,a=0;
    for(i=1;i<=n;++i)
    {
        cin>>str[i] ;
        if(str[i]==pass)
        {a=1;}
        if(pass[0]==str[i][1])
        {f1=1;}
        if(pass[1]==str[i][0])
        {f2=1;}
        if(f1&f2)
        {a=1;}
      }
      if(a==1)cout<<"YES";
      else
      cout<<"NO";
      return 0;
  }
