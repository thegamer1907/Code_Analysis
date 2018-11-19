#include<iostream>
#include<cstdio>
#include<algorithm>
#include<vector>
#include<cstring>
#include<queue>
#include<string>
#include<sstream>
#include<set>
#include<list>
#include<stack>
#include<fstream>
#include<map>
#define endl "\n"
#define DE cout << "------" << endl
#define mems(a, b) memset(a, b, sizeof a)
using namespace std;
typedef long long ll;

int h, m, s, t1, t2;

bool solve(){
    cin >> h >> m >> s >> t1 >> t2;
    if(h == 12) h %= 12;
    if(t1 == 12) t1 %= 12;
    if(t2 == 12) t2 %= 12;
    int hs, hm, hh;
    hs = 21600 * s / 30;
    hm = 21600 * (60 * m + s) / 1800;
    hh = (3600 * h + 60 * m + s);
    t1 = t1 * 3600;
    t2 = t2 * 3600;
    if(t1 > t2) swap(t1, t2);
    //cout << hs << ' ' << hm << ' ' << hh << ' ' << t1 << ' ' <<t2 << endl;
    int a[6];
    a[0] = hs, a[1] = hm, a[2] = hh;
    for(int i = 3; i < 6; i++) a[i] = a[i - 3] + 43200;
    int p[3];
    p[0] = t1, p[1] = t2, p[2] = t1 + 43200;
    for(int i = 0; i < 2; i++){
        int ok = 1;
        for(int j = 0; j < 6; j++) if((a[j] > p[i] && a[j] < p[i + 1]) || (a[j] > p[i + 1] && a[j] < p[i])) {ok = 0; break;}
        if(ok) return true;
    }
    return false;
}

int main(){
    if(solve()) cout << "YES";
    else cout << "NO";
}
