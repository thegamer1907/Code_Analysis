#include <bits/stdc++.h>
#define mp make_pair
#define pb push_back

using namespace std;

typedef long long ll;
typedef pair<int,int> pii;
typedef long double ld;
typedef map<pii,set<pii> >::iterator mapit;
typedef multiset<ll>::iterator setit;

const int maxn = 1e6 + 5;
const int maxlog = 22;
const ll mod = 1e9 + 7;
const int sq = 340;
const int inf = 1e9 + 43;
const ld pi = 3.14159265;
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    ld h , m , s , t1 , t2;
    cin >> h >> m >> s >> t1 >> t2;
    if(h == 12.0)
        h = 0.0;
    ld sec = s / 5.0;
    ld minute = (m + s / 60.0) / 5.0;
    ld hour = h + m / 60.0 + s / 3600.0;
    if(t1 > t2)
        swap(t1 , t2);
    //cout << hour << " " << minute << " " << sec << endl;
    int cnt = 0;
    if(sec > t1 && sec < t2)
        cnt ++ ;
    if(minute > t1 && minute < t2)
        cnt ++ ;
    if(hour > t1 && hour < t2)
        cnt ++ ;
    if(cnt == 0 || cnt == 3){
        cout << "YES";
    }
    else
        cout << "NO";
    return 0;
}
