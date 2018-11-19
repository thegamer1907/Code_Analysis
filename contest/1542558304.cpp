#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long int
#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define p(x) printf("%d\n", x)
#define pl(x) printf("%lld\n", x)
#define s(x) scanf("%d", &x)
#define sl(x) scanf("%lld", &x)
#define sf(x) scanf("%lf", &x)
#define bitcount __builtin_popcountll
#define INF 1e18
#define endl '\n'
#define FIO ios_base::sync_with_stdio(false)
using namespace std;
#define M 1000000007
#define MAX 300010
#define MLOG 18


int main(){
    double h, m, s, t1, t2;
    cin >> h >> m >> s >> t1 >> t2;
    h *= 5;
    if(h == 60)
        h = 0;
    if(m > 0 || s > 0){
        h++;
    }
    if(s>0){
        m+=.5;
    }
    t1 *= 5;
    if(t1 == 60){
        t1 = 0;
    }
    t2 *= 5;
    if(t2 == 60){
        t2 = 0;
    }
    int flag = 0;
    double tmp = t1;
//    cout << t1 << " " << t2 << endl;
    while(t1!=t2){
        t1 = (t1 + 0.5);
        if(t1>=60){
            t1 -= 60;
        }
        if(t1 == h || t1 == m || t1 == s){
            flag = 1;
            break;
        }
    }
    if(flag == 0){
        cout << "YES";
        return 0;
    }
    flag = 0;
    t1= tmp;
    while(t1!=t2){
        t1 = (t1 -.5);
        if(t1 < 0){
            t1+=60.0;
        }
        if(t1 == h || t1 == m || t1 == s){
            flag = 1;
            break;
        }

    }
    if(flag == 0){
        cout << "YES";
    }
    else{
        cout << "NO";
    }
}