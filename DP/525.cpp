#include<bits/stdc++.h>
using namespace std;
main(){
string s;
int m,a,b,t[100000]={0},dem=0,j=0;
cin>>s;
for(int i=0;i<s.length()-1;i++){if(s[i]==s[i+1])t[i]=t[i-1]+1;else t[i]=t[i-1];}
cin>>m;
for(int i=0;i<m;i++){cin>>a>>b;
a-=2;b-=2;cout<<t[b]-t[a]<<endl;

}}