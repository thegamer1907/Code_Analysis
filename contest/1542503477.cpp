#include                        <bits/stdc++.h>
#define   lli                   unsigned long long int
#define   ll                    long long int
#define   PI                    2 * acos(0.0)
#define   UNIQUE(V)             (V).erase(unique(ALL(V), (V).end()) //vector/string etc must need to be sorted
#define   timesave              ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define   ALL(V)                (V).begin(), (V).end()
#define   MEMSET(a, val)        memset(a, val, sizeof(a))
using     namespace             std;


template  <class T> T GCD(T a, T b) { return (b != 0 ? GCD <T> (b, a%b) : a); }
template  <class T> T LCM(T a, T b) { return ((a*b)  / GCD <T> (a, b)); }


//------------------- Let`s Start ------------------------ //

const int M = 1e5+5;
int a[M], b[M], cnt[M];

int main()
{
    timesave;

    int h, m, s, t1, t2, c = 0, ans = 0;

    cin >> h >> m >> s >> t1 >> t2;

    int hk = h, mk = m/5, sk = s/5;
    int md = m%5, sd = s%5;

    if(s == 0 || sk == 0) sk = 12;
    if(m == 0 || mk == 0) mk = 12;

    for(int i = t1; i <= 12; i++){
        //if(i == t1 && c == 1) break;

        if(i == t2) {ans = 1; break;}
        if(i == hk || i == mk || i == sk) break;

        //if(i == t1 && c == 0) c = 1;
        if(i == 12) i = 0;
    }

    if(ans) cout << "YES" << endl;

    else{
        c = 0;
        for(int i = t1-1; i >= 0; i--){
            if(i == 0) i = 12;
            //if(i == t1) break;

            if(i == hk || i == mk || i == sk) break;
            if(i == t2) {ans = 1; break;}

        }

        if(ans) cout << "YES" << endl;
        else cout << "NO" << endl;
    }

    return 0;
}
