#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
    int n,m,h[1001]={0},i,x,j;
    string s,s2,s1[1000];
    cin>>s;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>s1[i];
        
    }
    
    
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
    {
        s2=s1[i]+s1[j];
        
std::size_t found = s2.find(s);
  if (found!=std::string::npos)
  {
      cout<<"YES\n";
      return 0;
      
  }
    }
        
    }
    
    cout<<"NO\n";
    
    return 0;
}