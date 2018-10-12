#include<bits/stdc++.h>
using namespace std;
int n,t,d,a[100000],m,ans;
map <string,int> k;
string s,s1;
int main()
{
      cin>>n>>m;
      for(int i=1; i<=m+n; i++)
      {
            cin>>s; k[s]++; a[i]=k[s];
      }
      for(int i=1; i<=n+m; i++)
      {
            if(a[i]-2) continue;
            ans++;
      }
      if(ans%2) { n-=ans; m-=ans; m--; }
      else{
      n-=ans; m-=ans;}
      if(n>m) { cout<<"YES"; return 0;}
      cout<<"NO";
}