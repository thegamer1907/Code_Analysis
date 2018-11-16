#include <iostream>
#include <stdio.h>
#include <string>
#include <cstring>
#include <string.h>
#include <math.h>
#include <map>
#include <set>
#include <vector>
#include <algorithm>
#include <memory.h>
#include <stack>
#include <queue>
#include <list>
#include <bitset>
using namespace std ;
typedef long long ll;
const int N=1e6;
int main (){
  #ifndef ONLINE_JUDGE
  freopen("input.txt","r",stdin);
  #endif
  //freopen("outputn.txt","w",stdout);
string s;
cin>>s;
int ct=-2,ct1=-2;
bool flag=0;
for (int i=0; i<s.size();i++){
if (s[i]=='A' && s[i+1]=='B' && ct==-2  )
{
    ct=i;
  }
  else 
  if (s[i]=='B' && s[i+1]=='A' && ct!=-2 && i!=ct+1)
  {
    ct1=i;
    flag=1;
  }
}
ct1=ct=-2;
for (int i=0; i<s.size();i++){
if (s[i]=='B' && s[i+1]=='A' && ct==-2 )
{
    ct=i;
  }
  else 
  if (s[i]=='A' && s[i+1]=='B' && ct!=-2 && i!=ct+1)
  {
    ct1=i;
    flag=1;
  }
}
//cout<<ct1<<endl;
if (flag)
puts("YES");
else 
puts("NO");
return 0;
}