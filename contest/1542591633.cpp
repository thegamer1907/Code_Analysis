#include <bits/stdc++.h>
#define mk make_pair
#define fs first
#define sc second
using namespace std;
typedef long long ll;
typedef long double ld;
int st[100], nd[100];
int main(){
  int n;
  string s, s1;
  while(cin>>s){
    cin>>n;
    memset(st, 0, sizeof st);
    memset(nd, 0, sizeof nd);
    bool l=0;
    for(int i=0; i<n; ++i){
      cin>>s1;
      if(s==s1)
        l=1;
      ++st[s1[0]];
      ++nd[s1[1]];
    }
    if(nd[s[0]]&&st[s[1]]){
      l=1;
    }
    if(l)
      cout<<"YES"<<endl;
    else
      cout<<"NO"<<endl;
  }
  return 0;
}


