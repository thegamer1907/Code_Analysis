#include <bits/stdc++.h>

#define all(c) c.begin(),c.end()
#define ll long long
#define pb(x) push_back(x)
#define make_unique(x) sort(all((x))); (x).resize(unique(all((x))) - (x).begin())
#define mod 1000000007


using namespace std;

typedef unsigned long long ull;

bool is_prime(int n) {

    for (int i = 2; i * i <= n; ++i) {
            if (n % i == 0) {
                  return false;
            }
    }
    return true;
}

inline ll getPow(ll a,ll b){
    ll res = 1,tp = a;
    while (b){
       if (b&1ll) {
           res *= tp;
        /* res %= p;*/
       }
       tp *= tp;
     /* tp %= p;*/
       b >>= 1ll;
    }
    return res;
}

inline ll nxt() {
    ll x;
    scanf("%lld", &x);
    return x;
}

void ok() {
     puts("YES");
     exit(0);
}

void no() {
     puts("NO");
     exit(0);
}
ll dx[] = {0, 0, -1, 1};
ll dy[] = {-1, 1, 0, 0};

int main()
{
   string gaw;
   cin >> gaw;
   ll n = nxt();
   vector < string > mas(n);
   for(int i = 0; i < n; i++) {
          cin >> mas[i];
   }
   for(int i = 0; i < n; i++) {
          for(int j = i; j < n; j++) {
                 string tp = mas[i] + mas[j];
                 if(tp.find(gaw) != string::npos) {
                        ok();
                 }
                 tp = mas[j] + mas[i];
                 if(tp.find(gaw) != string::npos) {
                        ok();
                 }
          }
   }
   no();
   return 0;
}
