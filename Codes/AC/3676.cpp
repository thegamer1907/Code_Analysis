#include <bits/stdc++.h>
#define MAXN 505
typedef long long ll;

using namespace std;

ll n[3], p[3], a[3];
ll R;
string s;

int main(){
    #ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
	#endif
	ios_base::sync_with_stdio(false);
    cin >> s >> n[0] >> n[1] >> n[2];
    cin >> p[0] >> p[1] >> p[2] >> R;
    for(int i = 0; i < 3; i++) a[i] = 0;
    for(int i = 0; i < s.size(); i++){
        if(s[i] == 'B') a[0]++;
        if(s[i] == 'S') a[1]++;
        if(s[i] == 'C') a[2]++;
    }
    ll l = 0, r = 10e13;
    while(l < r){
        ll mid = (l + r) / 2;
        ll t = 0;
        for(int i = 0; i < 3; i++){
            t += max(a[i] * mid - n[i], 0LL) * p[i];
        }
       // cout << t << " ";
        if(t <= R){
            l = mid + 1;
        } else{
            r = mid;
        }
    }
    cout << l - 1;
   // cout << R;
}

