#include                       <bits/stdc++.h>
#define       lli              long long int
#define       PI               acos(-1.0)
#define       timesave         ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using         namespace        std;

bool compare(pair<int, int> &i, pair<int, int> &j){
    if(i.first == j.first) return i.second < j.second;
    else return i.first > j.first;
}

bool prime[1000000];
void sieve()
{
    prime[0] = prime[1] = 1;
    for(int i = 2; i*i <= 1000000; i++){
        if(prime[i] == 0){
            for(int j = 2*i; j <= 1000000; j += i){
                prime[j] = 1;
            }
        }
    }
}

int main()
{
    timesave;

    int n, cnt = 0, cnt2 = 0, c = 0;
    string s, s2;

    cin >> s;
    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> s2;

        if(s2 == s) c = 1;
        if(s[0] == s2[1]) cnt = 1;
        if(s[1] == s2[0]) cnt2 = 1;
    }

    if(cnt+cnt2 == 2 || c) cout << "YES" << endl;
    else cout << "NO" << endl;

    return 0;
}

