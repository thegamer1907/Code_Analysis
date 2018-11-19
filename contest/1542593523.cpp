#include <bits/stdc++.h>
#include <ext/numeric>
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

string s,arr[111];
int n;;

int main() {
#ifndef ONLINE_JUDGE
  freopen("in.txt", "r", stdin);
//freopen("out.txt", "w", stdout);
#endif
  cin>>s>>n;
  for(int i=0;i<n;++i){
    cin>>arr[i];
    if(arr[i]==s)return puts("YES");
  }
  for(int i=0;i<n;++i)
    for(int j=0;j<n;++j){
      if(arr[i][0]==s[1]&&arr[j][1]==s[0])
        return puts("YES");
  }
  return puts("NO");
}
