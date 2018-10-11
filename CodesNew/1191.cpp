#include<bits/stdc++.h>
#define ll long long
#define re return
using namespace std;
int n;
long long a[200000];
void input(){
  cin >> n;
  for (int i=0;i<n;++i) cin >> a[i];
}
void solve(){
  for (int i=0;i<n;++i){
    a[i]=(i<a[i]%n ? a[i]-a[i]%n+i+n : a[i]-a[i]%n+i );
  }
}
void output(){
  int mink=1;
  for (int i=0;i<n;++i) if (a[i]<=a[mink]) mink=i;
  cout << mink+1;
}
int main(){
input();
solve();
output();
re 0;
}