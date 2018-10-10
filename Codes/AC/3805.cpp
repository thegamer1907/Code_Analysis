#include <bits/stdc++.h>

using namespace std;

#define ll long long
ll n[3];
ll p[3];
ll money;
ll needed[3];

bool f(ll cnt)
{
    ll temp[3];
    ll tot = 0;
    for(ll i=0; i<3; i++){
        temp[i] = needed[i]*cnt;
        if(n[i] < temp[i]){
            tot += (temp[i]-n[i])*p[i];
        }
    }
    return (tot<=money);
}

int main()
{
    string str;
    cin >> str;
    memset(needed, 0, sizeof needed);
    for(int i=0; i<str.length(); i++){
        if(str[i] == 'B') needed[0]++;
        if(str[i] == 'S') needed[1]++;
        if(str[i] == 'C') needed[2]++;
    }
    for(ll i=0; i<3; i++) cin >> n[i];
    for(ll i=0; i<3; i++) cin >> p[i];
    cin >> money;
    ll low = 0;
    ll high = 1000*money;
    ll cnt = 0;
    while(low < high){
        ll mid = (low+high)/2;
        if(f(mid) == false){
            high = mid;
        }
        else {
            low = mid;
        }
        cnt++;
        if(cnt == 200) break;
    }
    for(ll i=low+15; i>=max(0LL, low-5); i--){
        if(f(i)){
            cout << i;
            return 0;
        }
    }
}
