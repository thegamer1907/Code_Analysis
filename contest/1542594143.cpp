#include<bits/stdc++.h>
using namespace std;
#define L long long int
const int M=1e5+10;
string s,t;
bool fir,sec;
int n;
int main()
{
  cin>>s>>n;
  while(n--)
    {
      string t;
      cin>>t;
      if(t==s)
	return cout<<"YES"<<endl,0;
      if(t[1]==s[0])
	fir=true;
      if(t[0]==s[1])
	sec=true;
    }
  if(fir && sec)
    cout<<"YES"<<endl;
  else
    cout<<"NO"<<endl;
  return 0;
}
