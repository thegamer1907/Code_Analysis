// g++ -std=c++14
#include<bits/stdc++.h>
typedef long long int lli;
typedef long double lld;
using namespace std;

#define sd(x) scanf("%d",&x);
#define sd2(x,y) scanf("%d%d",&x,&y);
#define sd3(x,y,z) scanf("%d%d%d",&x,&y,&z);

#define fi first
#define se second
#define pb(x) push_back(x)
#define mp(x,y) make_pair(x,y)

#define LET(x, a)  __typeof(a) x(a)
#define foreach(it, v) for(LET(it, v.begin()); it != v.end(); it++)
#define _ ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define __ freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);
string s;
int n;
vector<int>lps;
void build(){
  lps.resize(n);
  lps[0] = 0;
  int len = 0;
  int i = 1;
  while(i<n){
    if(s[i]==s[len]){
      len++;
      lps[i] = len;
      i++;
    }
    else{
      if(len>0){
        len = lps[len-1];
      }
      else{
        lps[i] = 0;
        i++;
      }
    }
  }
}
int main(){
  _
  cin >> s;
  n = s.size();
  build();
  if(lps[n-1]==0){
    cout << "Just a legend\n";
    return 0;
  }
  for(int i=0;i<n-1;i++){
    if(lps[i]==lps[n-1]){
      for(int j=0;j<lps[n-1];j++){
        cout << s[j];
      }
      cout << "\n";
      return 0;
    }
  }
  if(lps[lps[n-1]-1]==0){
    cout << "Just a legend\n";
    return 0;
  }
  for(int i=0;i<lps[lps[n-1]-1];i++){
    cout << s[i];
  }
  cout << "\n";
  return 0;
}
