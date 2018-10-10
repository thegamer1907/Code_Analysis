#include <bits/stdc++.h>
using namespace std;
string s;
int Z[1000009];
int main() {
  ios::sync_with_stdio(false);
  cin>>s;
  int L=-1;
  int R=-1;
  Z[0]=s.size();
  for(int i=1; i<s.size(); i++)
  {
    if(R<i)
    {
      L=i;
      while(L+Z[i]<s.size() && s[Z[i]]==s[L+Z[i]])
      {
        Z[i]++;
      }
      R=L+Z[i]-1;
      continue;
    }
    if(i+Z[i-L]-1<R) Z[i]=Z[i-L];
    else
    {
      L=i;
      Z[i]=R-i+1;
      while(L+Z[i]<s.size() && s[Z[i]]==s[L+Z[i]])
      {
        Z[i]++;
      }
      R=L+Z[i]-1;
    }
  }
  /*for(int i=0; i<s.size(); i++)
  {
    cout<<Z[i]<<" ";
  }
  cout<<endl;*/
  int maxkozep=0;
  for(int i=1; i<s.size(); i++)
  {
    if(Z[i]>0 && i+Z[i]<s.size()) maxkozep=max(maxkozep, Z[i]);
    else if(Z[i]>0) maxkozep=max(maxkozep, Z[i]-1);
  }
  //cout<<maxkozep<<endl;
  int valasz=0;
  for(int hossz=1; hossz<=s.size(); hossz++)
  {
    if(Z[s.size()-hossz]==hossz)
    {
      if(maxkozep>=hossz) valasz=hossz;
    }
  }
  if(valasz==0) cout<<"Just a legend"<<endl;
  else
  {
    for(int i=0; i<valasz; i++) cout<<s[i];
    cout<<endl;
  }
  return 0;
}
