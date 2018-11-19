#include <cstdio>
#include <iostream>
#include <cstring>
#include <cmath>
#include <vector>
#include <string>
#include <algorithm>
#include <queue>
#include <map>
#include <unordered_set>
using namespace std;
typedef long long ll;
const int maxn = 105;

int n;
string s[maxn];
bool b[26][26];

int main() {
#ifdef suiyuan2009
  freopen("in.cpp","r",stdin);
#endif
  string a;
  cin>>a>>n;
  bool yes=0;
  for(int i=0;i<n;i++)cin>>s[i];
  for(int i=0;i<n;i++){
    if(s[i]==a)yes=1;
    for(int j=0;j<n;j++)if(s[i][1]==a[0]&&s[j][0]==a[1])yes=1;
  }
  if(yes)cout<<"YES"<<endl;
  else cout<<"NO"<<endl;
  return 0;
}
