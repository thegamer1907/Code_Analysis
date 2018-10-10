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
const int INF = 1e9 + 7;
using namespace std;

int main(){
   fast_io;
   int n,m;
   cin >> n >> m;
   vector<string> a(n),b(m);
   for(int i = 0;i < n ; i++)
    cin >> a[i];
   for(int i = 0;i < m ; i++)
    cin >> b[i];
   int com = 0;
   for(int i = 0;i < n ; i++)
    for(int j = 0;j < m ; j++)
      com += a[i] == b[j];
   n -= com/2;
   m -= (com + 1)/2;
   cout << ((n > m)?"YES":"NO") ;

}
