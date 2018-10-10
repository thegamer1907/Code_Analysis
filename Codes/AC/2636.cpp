/*
  /\     /\
  | ).|.( |
  |  >-<  |
  =========
It's AdilkhanKo miaaaaaau
*/
#include<bits/stdc++.h>

#define ll long long
#define pb push_back
#define endl "\n"
#define foreach(it, S) for(__typeof (S.begin()) it = S.begin(); it != S.end(); it++)
#define mp make_pair
#define f first
#define s second
#define name ""
#define _ ios_base::sync_with_stdio(false);cin.tie(0);

using namespace std;

const int MaxN = int (1e7);
const ll INF = (ll)(1e18);
const int inf = 1e9;
const int mod = 10056;
const double pi = 3.1415926535897932384626433832795;
int n, m, ans, d[MaxN * 4];
int P[MaxN * 4], used[MaxN * 4];

int main () { 
    cin >> n;    
    vector<int> v;
    for(ll i = 2; i <= MaxN; i++){
        if(P[i] == 0){
            P[i] = i;
            v.pb(i);
        }
        for(int j = 0; j < v.size() && v[j] <= P[i] && i * v[j] <= MaxN; j++){
            P[i * v[j]] = P[v[j]];
        }
    }   
    int cnt = 1;
    for(int i = 1; i <= n; i++){
        int x;
        scanf("%d", &x);
        while(P[x] > 1){
            if(used[P[x]] != cnt){
                d[P[x]]++;
            }
            used[P[x]] = cnt;
            x /= P[x];
        }
        cnt++;
    }
    for(int i = 2; i <= MaxN; i++)d[i] = d[i - 1] + d[i];
    cin >> m;
    while(m--){
        int l, r; scanf("%d%d", &l, &r);
        if(r > MaxN)r = MaxN;
        if(l > MaxN)l = MaxN;
        cout << d[r] - d[l - 1] << endl;
    }
return 0;
} 