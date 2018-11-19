#include <bits/stdc++.h>
//#include <ext/hash_map>
using namespace std;
using namespace __gnu_cxx;

#define EPS      1e-9
#define F        first
#define S        second
#define pi       acos(-1)
#define ll       long long
#define inf      0x3f3f3f3f
#define sz(x)    (int)x.size()
#define sc(x)    scanf("%d",&x)
#define all(x)   x.begin(),x.end()
#define rall(x)  x.rbegin(),x.rend()

string s,t;
set<char> s1,s2;
int n;

int main() {
#ifndef ONLINE_JUDGE
  freopen("in.txt", "r", stdin);
//freopen("out.txt", "w", stdout);
#endif
  cin>>s>>n;
  for(int i=0;i<n;++i){
    cin>>t;
    if(s==t)return puts("YES");
    s1.insert(t[0]);
    s2.insert(t[1]);
  }
  if(s1.find(s[1])!=s1.end()&&s2.find(s[0])!=s2.end())
    puts("YES");
  else puts("NO");
  return 0;
}