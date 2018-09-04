#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
#define TRACE
#ifdef TRACE
#define trace(...) __f(#__VA_ARGS__, __VA_ARGS__)
template <typename Arg1>
void __f(const char* name, Arg1&& arg1){
  cerr << name << " : " << arg1 << std::endl;
}
template <typename Arg1, typename... Args>
void __f(const char* names, Arg1&& arg1, Args&&... args){
  const char* comma = strchr(names + 1, ',');cerr.write(names, comma - names) << " : " << arg1<<" | ";__f(comma+1, args...);
}
#else
#define trace(...)
#endif

#define MOD                 1000000007LL
#define EPS                 1e-9
#define io                  ios_base::sync_with_stdio(false);cin.tie(NULL);

const int N = 1e7 + 5;
int cnt[N];
int n;

int primes[N];

int pre[N];

void solve(){
    for(int i = 2; i < N; i++){
        if(primes[i] == 0){
            for(int j = i; j < N; j += i){
                pre[i] += cnt[j];
                primes[j] = 1;
            }
        }
    }
    for(int i = 2; i < N; i++)
        pre[i] += pre[i - 1];
}

int main(){
	io;
	cin >> n;
	for(int i = 1; i <= n; i++){
	    int x;
	    cin >> x;
	    cnt[x]++;
	}
	solve();
	int q;
	cin >> q;
	while(q--){
	    int l, r;
	    cin >> l >> r;
	    if(r > 1e7) r = 1e7;
	    if(l > 1e7) l = 1e7;
	    cout << pre[r] - pre[l - 1] << endl;
	}
	return 0;
}








