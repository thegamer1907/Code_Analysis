#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
template <typename T>
using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
#define lli long long int
#define pb(x) push_back(x)
#define mp(x,y) make_pair(x,y)
#define se second;
#define fi first;
#define endl '\n';
#define _ ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
ordered_set<lli>root,nom;//nom.order_of_key(x);
lli visit[100001];
vector<pair<lli,lli> >v1,v2;
lli n,x;
vector<lli>v;
int main(){
  _
  string s;
  cin>>s;
  n=s.length();
  lli flag1=0,flag2=0;
  for(lli i=0;i<n-1;i++){
      if(s[i]=='A' and s[i+1]=='B'){
        visit[i]=1;
        visit[i+1]=1;
        flag1=1;
        break;
      }
  }
  for(lli i=0;i<n-1;i++){
      if(s[i]=='B' and s[i+1]=='A' and visit[i]!=1 and visit[i+1]!=1){
        flag2=1;
        break;
      }
  }
  if(flag1*flag2==1){
    cout<<"YES";
    return 0;
  }
  memset(visit,0,sizeof(visit));
  flag1=0,flag2=0;
  for(lli i=0;i<n-1;i++){
      if(s[i]=='B' and s[i+1]=='A'){
        flag2=1;
        visit[i]=1;
        visit[i+1]=1;
        break;
      }
  }
  for(lli i=0;i<n-1;i++){
      if(s[i]=='A' and s[i+1]=='B' and visit[i]!=1 and visit[i+1]!=1){
        flag1=1;
        break;
      }
  }

  if(flag1*flag2==1){
    cout<<"YES";
  }
  else{
    cout<<"NO";
  }
}
