#include <bits/stdc++.h>
#define ll long long int
using namespace std;
const ll N = 10000005;
bool prime[N];
int n,m,x,a[N],p[N];
int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  std::cin >> n;
  for(int i = 0; i<n; i++) std::cin >> x, a[x]++;
  for(int i = 2; i<N; i++) if (!prime[i])for(int j = i; j<N; j+=i) prime[j]=1, p[i]+=a[j];
  for(int i = 2; i<N; i++) p[i]+=p[i-1];
  std::cin >> m;
  while (m--) {
    int l,r;
    std::cin >> l >> r;
    if(l>N) l=N-1;
    if(r>N) r=N-1;
    std::cout << p[r]-p[l-1] << '\n';
  }
}
