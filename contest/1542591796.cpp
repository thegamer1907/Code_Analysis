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
const int maxn = 1e6+10;
const int MOD = 1e9+7;
string o[100];
int main()
{
    // ios_base::sync_with_stdio(0);
    // cin.tie(0);
    // cout.tie(0);
    string s;
    int n;
    cin>>s;
    cin>>n;
    for(int i=0 ; i<n ; ++i){
        cin>>o[i];
    }
    bool flag = false;
    for(int i=0 ; i<n ; ++i){
        for(int j=0 ; j<n ; ++j){
            if(o[i]==s || o[j]==s || (o[i][1]==s[0] && o[j][0]==s[1])){
                flag = true;break;
            }
        }
    }
    if(flag)std::cout << "YES" << '\n';
    else std::cout << "NO" << '\n';
    //std::cout << "time "<< clock()/1000 <<"ms"<< '\n';
    return 0;
}
