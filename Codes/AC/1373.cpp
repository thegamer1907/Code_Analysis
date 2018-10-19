/*
 ___________________________________________
|      __                                   |
|     /  \     |\   |   |  |  /             |
|    /____\    | \  |   |  |_/              |
|   /      \   |  \ |   |  | \              |
|  /        \  |   \|   |  |  \             |
|                                           |
|  IIT-45th Batch, Jahangirnagar University.|
|___________________________________________|
/*******************************************/

#include<bits/stdc++.h>

using namespace std;

#define    pf               printf
#define    PF(a)            printf("%d\n",(a))
#define    PF2(a,b)         printf("%d %d\n",(a), (b))
#define    PF3(a,b,c)       printf("%d %d %d\n",(a), (b), (c))
#define    PFL(a)           printf("%lld\n",(a))
#define    PFL2(a,b)        printf("%lld %lld\n",(a), (b))
#define    PFL3(a,b,c)      printf("%lld %lld %lld\n",(a), (b), (c))
#define    get(a)           cin>>a
#define    sf               scanf
#define    SF(a)            scanf("%d",&a)
#define    SF2(a,b)         scanf("%d %d",&a, &b)
#define    SF3(a,b,c)       scanf("%d %d %d",&a, &b, &c)
#define    SFL(a)           scanf("%lld",&a)
#define    SFL2(a,b)        scanf("%lld %lld",&a, &b)
#define    SFL3(a,b,c)      scanf("%lld %lld %lld",&a, &b, &c)
#define    gl(a)            getline(cin,(a))
#define    gc()             getchar()
#define    pb               push_back
#define    m_p              make_pair
#define    pc()             printf("Case %d: ",tt++)
#define    tc()             cout<<"Case "<<tt++<<": "
#define    SZ(a)            (int)(a).size()
#define    all(a)           a.begin(),a.end()
#define    FF               first
#define    SS               second
#define    MAX              2134567891
#define    MOD              1000000007
#define    MM               100005
#define    PI               2*acos(0.0)
#define    cond(n,m)        (xx>=0 && xx<(n) && yy>=0 && yy<(m))

#define    mem(a)           memset((a),0,sizeof (a))
#define    SET(a)           memset((a),-1,sizeof (a))
#define    output           freopen("output.txt","w",stdout);
#define    input            freopen("input.txt","r",stdin);
#define    I_O              ios_base::sync_with_stdio(0); cin.tie(0)
#define    rep(a)           for(int i=0;i<(a);i++)
#define    FOR(a,b)         for(int i=(a);i<(b);i++)
#define    REP(a)           for(int j=0;j<(a);j++)
#define    rev(a)           for(int i=(a);i>=0;i--)
#define    fr(i,n)          for(i=0;i<n;i++)
#define    fr1(i,n,m)       for(i=n;i<m;i++)

int dx[]  = {0, 0, 1, -1};
int dy[]  = {1, -1, 0, 0};
int dx8[] = {0, 0, 1, 1, 1, -1, -1, -1};
int dy8[] = {1, -1, -1, 0, 1, -1, 0, 1};


typedef long long ll;
typedef unsigned long long llu;
typedef priority_queue < ll > PQ;
typedef pair < ll , ll > pi;
typedef pair < pi , int > pii;
typedef vector < int > vi;
typedef vector < ll > vl;
typedef vector < string > vs;


ll a[MM];
int main()
{
    I_O;

    ll n,m;
    cin>>n>>m;
    rep(n)
    cin>>a[i];
    ll k, low = 0, mid, high = n, cost;
    vl v;
    rep(22)
    {
        mid = (low+high) / 2;
        v.clear();
        REP(n)
        {
            cost = a[j] + ((j+1)*mid);
            v.pb(cost);
        }
        sort(v.begin(),v.end());
        cost = 0;
        REP(mid)
        {
            cost += v[j];
        }
        if(cost>m)
        {
            high = mid-1;
        }
        else
        {
            low = mid+1;
        }
    }
    cout<<mid;
    cost = 0;
    rep(mid)
    {
        cost += v[i];
    }
    cout<<" "<<cost<<endl;




    return 0;
}

/*

*/