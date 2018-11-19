#include <bits/stdc++.h>
#define all(t) (t).begin(),(t).end()
#define CLR(a) memset((a),0,sizeof(a))
#define pb push_back
#define pf push_front
#define mp(a,b) make_pair(a,b)
#define fr first
#define sc second
#define inf 2e9
#define DEBUG(x) cout << '>' << #x << ':' << x << endl;
using namespace std;
typedef long long LL;
typedef pair<int,int> pii;
typedef vector<pii> vpii;
typedef pair<LL,LL> pLL;
typedef vector<pLL> vpLL;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<LL> vLL;
typedef vector<vLL> vvLL;
typedef map<int,int> mii;
typedef map<LL,LL> mLL;
typedef long double ld;

int main(){
//    ios::sync_with_stdio(false);
//    freopen("xyz.txt", "r", stdin);
    int h,m,s,t1,t2,c=0;
    cin>>h>>m>>s>>t1>>t2;
    if(t1>t2){
        swap(t1,t2);
    }
    if(h>=t1 && h<t2){
        c++;
    }
    if(m/5==(t1%12) || (m/5>t1 && m/5<t2)){
        c++;
    }
    if(s/5==(t1%12) || (s/5>t1 && s/5<t2)){
        c++;
    }
    cout<<(c%3==0?"YES":"NO");

    return 0;
}
















