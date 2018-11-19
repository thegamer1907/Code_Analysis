#include<bits/stdc++.h>
using namespace std;
long long n;
long long t,d,e,r;
string a,s;
char k,l;
int main()
{
 cin>>a;
 cin>>n;
 for(int i=1;i<=n;i++)
 {
  cin>>s;
  if(a[0]==s[1]) t=1;
  if(a[1]==s[0]) d=1;
  if(a==s) {t=1;d=1;}
 }
 if(t==1 && d==1) cout<<"YES";
 else cout<<"NO";
 }

