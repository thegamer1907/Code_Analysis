#include <bits/stdc++.h> 
using namespace std; 
  #define ll long long
ll MAX = 10000000006;  


int main() {
   /// ios;
  
  string s;
  cin>>s;
  ll len =s.length();
  char cp=s[0];
  ll sum=1;
  for(ll i=1;i<len;i++)
  {
      char c=s[i];
      if(c==cp)
      {
          sum++;
      }
      else
      {
          cp=c;
          sum=1;
      }
      if(sum>=7)
      {cout<<"YES";
      return 0;
      }
  }
  cout<<"NO";
	return 0;
}
