#include<bits/stdc++.h>
using namespace std;

int main(){

int t,k;
set<char>s1,s2;
string s,ss;
cin>>s>>t;

k=0;
  while(t--)
  {
   cin>>ss;
   
   if((s[0]==ss[0] && s[1]==ss[1]) || (s[0]==ss[1] && s[1]==ss[0]))
    k=1;
    
    else
    {
      s1.insert(ss[0]);
      s2.insert(ss[1]);
    }
  } 
   
    if(k==1)
    {cout<<"YES"<<endl;}
    else if( s1.find(s[1])!=s1.end() && s2.find(s[0])!=s2.end())
    {cout<<"YES"<<endl;}
    else
    cout<<"NO"<<endl;
    
return 0;
}