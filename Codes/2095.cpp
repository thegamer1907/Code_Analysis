#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

#define endl "\n"
#define _ cin.sync_with_stdio(0);cin.tie(0);
#define lli long long 
using namespace std;
using namespace __gnu_pbds;

const int infInt = 1e9;

typedef tree< 
  pair<lli,int>,
  null_type,
  less<pair<lli,int>>,
  rb_tree_tag,
  tree_order_statistics_node_update
> ordered_set;

ordered_set Set;
lli Val[200010];
lli a[200010];
map<lli,int> Map;
int main(){_
  lli n,k;
  cin>>n>>k;
  //preprocessing
  for(int i=1;i<=n;i++){
    cin>>a[i];
    Set.insert(make_pair(a[i],i));
  }

  for(int i=1;i<=n;i++){
    Set.erase(make_pair(a[i],i));
    lli aux=Set.order_of_key(make_pair(a[i]*k,infInt))-
            Set.order_of_key(make_pair(a[i]*k,0));
    Val[i]=aux;
  }
  lli ans=0;
  for(int i=1;i<=n;i++){
    //check Map
    ans+=Map[a[i]]*Val[i];
    Map[a[i]*k]++;
  }
  cout<<ans<<endl;

}


