#include <bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define inf 1e9
#define all(v) (v).begin() , (v).end()
#define mask bitset<16>

using namespace std;

typedef vector<int> vi;
typedef long long ll;

int di[] = {0 , 0 , 1 , -1 , 1 , 1 , -1 , -1};
int dj[] = {1 ,-1 , 0 , 0 , -1 , 1 ,  1 , -1};

const double eps = 1e-6;

double h , m , s , t1 , t2;
bool check(){
    vector<double> info = {h , m , s , t1 , t2};
    vector<double> srt = {h , m , s};

    sort(all(info));
    sort(all(srt));

    for(int i = 0 ;i < 5 ;i++){
        vector<double> t;
        t.pb(info[0]) , t.pb(info[1]) , t.pb(info[2]);
        sort(all(t));

        if(t == srt)
            return 1;

        info.pb(info.front());
        info.erase(info.begin());
    }
    return 0;
}
int main(){
    cin>>h>>m>>s>>t1>>t2;

    m += s / 60;
    h *= 5;
    t1 *= 5;
    t2 *= 5;
    h += m / 60;

    if(h > 60)
        h -= 60;

    puts(check()? "YES" : "NO");

}
