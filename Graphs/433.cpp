#include <bits/stdc++.h>

using namespace std;

int main(){
int n,t;
cin>>n>>t;
string s;
cin>>s;
int l=s.length();
for(int i=0;i<t;i++)
{
  for(int k=0;k<l;)
  if(s[k]=='B'&&s[k+1]=='G')
  {
    s[k]='G';
    s[k+1]='B';
    k=k+2;
  }
  else k++;
}
cout<<s;
return 0;
}
