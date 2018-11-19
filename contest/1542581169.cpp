#include<bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define PI acos(-1)
#define fi first
#define se second
#define INF 0x3f3f3f3f
#define INF64 0x3f3f3f3f3f3f3f3f
#define random(a,b) ((a)+rand()%((b)-(a)+1))
#define ms(x,v) memset((x),(v),sizeof(x))
#define eps 1e-8
using namespace std;
typedef unsigned long long ULL;
typedef long long LL;
typedef long double DB;
typedef pair<int,int> Pair;
const int maxn = 1e5+10;
const int MOD = 1e9+7;

int a[maxn];
int b[maxn][4];
set<int> s;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n,k;
    ms(a,0);
    cin>>n>>k;
    for(int i=0 ; i<n ; ++i){
        for(int j=0 ; j<k ; ++j){
            int x;
            cin>>x;
            b[i][j] = x;
            a[i] <<=1;
            a[i] |=x;
        }
        s.insert(a[i]);
        //std::cout << bitset<4>(a[i]) << '\n';
    }
    bool ans =false;
    for(int i=0 ; i<(1<<4) ; ++i){
        for(int j=0 ; j<(1<<4) ; ++j){
            if(i==j)continue;
            if(s.find(i)!=s.end() && s.find(j)!=s.end()){
                if((i&j) ==0)ans = true;
            }
        }
    }
    if(s.find(0)!=s.end())ans = true;
    if(ans)std::cout << "YES" << '\n';
    else std::cout << "NO" << '\n';

    //std::cout << "time "<< clock()/1000 <<"ms"<< '\n';
    return 0;
}
