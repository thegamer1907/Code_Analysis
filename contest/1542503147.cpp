#pragma GCC optimize ("O3")
#define _CRT_DISABLE_PERFCRIT_LOCKS
#include <bits/stdc++.h>

using namespace std;
#define BOOST ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define pb push_back
#define fileIn freopen("1.txt", "r", stdin)
#define fileOut freopen("output.txt", "w", stdout)
#define debug(n) cout << n <<"\n"
#define debug2(n) cout << n <<" "
#define all(a) a.begin(), a.end()
#define cinArr(arr) for(auto &v : arr) cin>>v
#define coutArr(arr) for(auto &v : arr) cout<<v<<" "
#define FOR(i, a, b) for(int i = a; i < b; i++)
typedef int64_t ll;
typedef uint64_t ull;
typedef vector<int> vi;

int main()
{
  BOOST;
    string pass;
    cin>>pass;
    int q;
    cin>>q;
    bool ans = 0, isLeft = 0, isRight = 0;
    while(q--){
      string tmp;
      cin>>tmp;
      if(tmp[1] == pass[0]) isLeft = true;
      if(tmp[0] == pass[1]) isRight = true;
      if(tmp == pass || (isLeft && isRight)) {ans = true; break;}
    }
    if(ans) cout<<"YES";
    else cout<<"NO";
    return 0;
}








