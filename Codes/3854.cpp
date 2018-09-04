#include<bits/stdc++.h>
using namespace std;

long long n[3], p[3], r[3], R, ans;
string s;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> s >> n[0] >> n[1] >> n[2] >> p[0] >> p[1] >> p[2] >> R;
    for(int i = 0 ; i < (int)(s.size()) ; i++){
        r[0] += (s[i] == 'B');
        r[1] += (s[i] == 'S');
        r[2] += (s[i] == 'C');
    }
    for(int i = 0 ; i < 3 ; i++)
        if(r[i] == 0) n[i] = 0;
    while(n[0]+n[1]+n[2]){
        for(int i = 0 ; i < 3 ; i++){
            if(n[i] < r[i]){
                long long cost = (r[i]-n[i])*p[i];
                if(cost > R) return cout << ans << endl, 0;
                R -= cost;
                n[i] = r[i];
            }
            n[i] -= r[i];
        }
        ans++;
    }
    long long co = 0;
    for(int i = 0 ; i < 3 ; i++)
        co += p[i]*r[i];
    cout << ans+R/co << endl;
    return 0;
}
