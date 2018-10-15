#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pi;
typedef vector<pi> vii;
const ll INF = 12345678910;
// lower_bound = first_equal_to_or_greater_than
// upper_bound = first_greater_than

int main(){
  ios::sync_with_stdio(false);
  cin.tie(0);
  ll n;
  cin>>n;
  ll arr[n];
  for(ll i=0; i<n; ++i){
    cin>>arr[i];
  }
  sort(arr,arr+n);
  ll total = n;
  ll ptr = n/2;
  for(ll i=0 ; i<n/2; ++i){
    while(true){
      if( arr[i]*2 <= arr[ptr] ){ total--; ptr++; break;}
      else{ ptr++; }
      if( ptr == n ){ break; }
    }
    if( ptr == n ){break; }
  }
  cout<<total<<"\n";
  return 0;
}
