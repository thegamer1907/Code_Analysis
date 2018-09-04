#include <bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define vi vector<int>
#define F first
#define S second
#define fast_io ios_base::sync_with_stdio(false)
#define all(v) v.begin(),v.end()
#define ll long long
#define pii pair<int,int>
#define vll vector<ll>
using namespace std;
int get(ll a){
 int ret=0;
 while(a){
    ret += a%10;
    a/=10;
    if(ret > 10)break;
 }
 return ret;
}
int main() {
  fast_io;
  int k,now=0;
  cin >> k;
  for(int i = 10;;i++){
    if(get(i) == 10)now++;
    if(now == k)return cout << i,0;
  }
  return 0;
}
