#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main(){
  ios::sync_with_stdio(0);  cin.tie(0);
  //freopen("ip.txt","r",stdin);
  char sa,sb; cin>>sa>>sb; bool a=false,b=false;
  ll t;  for(cin>>t;t>0;--t){
    char ta, tb; cin>>ta>>tb;
    if(ta==sb) b=true;
    if(tb==sa) a=true;
    if(ta==sa && tb==sb) {a=true; b=true;}
  }
  if(a==true && b==true) cout<<"YES";
  else cout<<"NO";

  return 0;
}
