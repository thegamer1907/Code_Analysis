#include<bits/stdc++.h>
using namespace std; int main(){string s;int cnt=1,sz;cin>>s;sz = s.size(); s+='-';  for(int i = 1;i<=sz;i++)if(s[i-1]==s[i])cnt++; else {if(cnt>=7)return cout<<"YES\n",0; cnt = 1;} cout<<"NO\n"; return 0;}
