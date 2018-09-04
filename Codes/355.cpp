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
//
#include<bits/stdc++.h>

using namespace std;

#define    pf               printf
#define    PF(a)            printf("%d\n",(a))
#define    get(a)           cin>>a
#define    sf               scanf
#define    SF(a)            scanf("%d",&a)
#define    gl(a)            getline(cin,(a))
#define    gc()             getchar()
#define    pb               push_back
#define    pc()             printf("Case %d: ",tt++)
#define    SZ(a)            (int)(a).size()
#define    FF               first
#define    SS               second
#define    MAX              12345678910
#define    MOD              1000000007
#define    cond(n,m)        (xx>=0 && xx<(n) && yy>=0 && yy<(m))

#define    mem(a)           memset((a),0,sizeof (a))
#define    SET(a)           memset((a),-1,sizeof (a))
#define    output           freopen("output.txt","w",stdout);
#define    input            freopen("input.txt","r",stdin);
#define    I_O              ios_base::sync_with_stdio(0); cin.tie(0)
#define    rep(a)           for(int i=0;i<(a);i++)
#define    FOR(a,b)         for(int i=(a);i<(b);i++)
#define    FR(i,a,b)         for((i)=(a);(i)<(b);(i)++)
#define    REP(a)           for(int j=0;j<(a);j++)
#define    rev(a)           for(int i=(a);i>=0;i--)

int dx[]  = {-1, 1, 0, 0};
int dy[]  = {0, 0, -1, 1};
int dx8[] = {0, 0, 1, 1, 1, -1, -1, -1};
int dy8[] = {1, -1, -1, 0, 1, -1, 0, 1};

typedef long long ll;
typedef vector < int > vi;
int sum[100010],n;
int bs(int a)
{
    int hi=n,lw=1,mid;
    while(hi>lw){
        mid=(hi+lw)/2;
        //cout<<mid<<" "<<sum[mid]<<endl;
        if(sum[mid]==a)return mid;
        else if(sum[mid]<a)lw=mid+1;
        else hi=mid;
    }
    return hi;
}

int main() {

    int m,a;
    cin>>n;
    FOR(1,n+1){
        cin>>a;
        sum[i]=sum[i-1]+a;
    }
    cin>>m;
    while(m--){
        cin>>a;
        cout<<bs(a)<<endl;
    }

    return 0;
}
/*

5
2 7 3 4 9
3
1 25 11
*/

