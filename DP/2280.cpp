#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef pair < int , int > pii;
typedef vector < int > vi;
#define rep(i, a, b) for (int i = (a), i##_end_ = (b); i < i##_end_; ++i)
#define ff first
#define debug(x) cout << #x << " = " << x << '\n';
#define ss second
#define pb push_back
#define INF 2000000000
#define sz(x) (int((x).size()))
#define LOG2LL(X) ((unsigned) (8*sizeof(long long) - __builtin_clzll((X)) - 1))
#define LOG2(X) ((unsigned) (8*sizeof(int) - __builtin_clz((X)) - 1))
#define MAX 100010

int n , m;
int arr[MAX] , acum[MAX];
set < int > s;

int main()
{
   //freopen("input.txt" , "r" , stdin);
   //freopen("" , "w" , stdout);
   ios_base::sync_with_stdio(0);
   cin.tie(0);

   cin >> n >> m;

   for(int i = 1 ; i <= n ; i++){
      cin >> arr[i];
   }

   for(int i = n ; i ; i--){
      if(s.find(arr[i]) == s.end()){
         s.insert(arr[i]);
         acum[i] = acum[i+1] + 1;
      }
      else
         acum[i] = acum[i+1];
   }

   int x;
   for(int i = 0 ; i < m ; i++){
      cin >> x;
      cout << acum[x] << '\n';
   }

   return 0;
}
