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
const int maxn = 12*3600+1;
const int MOD = 1e9+7;

int v[maxn];
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int h,m,s,t1,t2;

    cin>>h>>m>>s>>t1>>t2;

    int hh = h*3600 + m*60+s;
    int mm = m*12*3600/60 +s;
    int ss = s*12*3600/60;
    int tt1 = t1*3600;
    int tt2 = t2*3600;
    if(tt1 > tt2)swap(tt1,tt2);
    int a[] = {hh,mm,ss};
    sort(a,a+3);
    bool ans = false;
    if(tt1 <= a[0] && tt2 >= a[2])ans = true;
    if(tt1 <=a[0] && tt2 <= a[0])ans = true;
    if(tt1 >=a[0] && tt1 <=a[1]&& tt2 <= a[1])ans = true;
    if(tt1 >= a[1] && tt1 <=a[2]&&tt2 <= a[2])ans = true;
    if(tt1 >= a[2] && tt2 >=a[2])ans = true;
    if(tt1 >= a[2] && tt2 <=a[0])ans = true;
    if(ans)std::cout << "YES" << '\n';
    else std::cout << "NO" << '\n';

    //std::cout << "time "<< clock()/1000 <<"ms"<< '\n';
    return 0;
}
