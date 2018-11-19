#include <bits/stdc++.h>
using namespace std;
inline void read(int &x){
    char ch;
    bool flag=false;
    for (ch=getchar();!isdigit(ch);ch=getchar())if (ch=='-') flag=true;
    for (x=0;isdigit(ch);x=x*10+ch-'0',ch=getchar());
    x=flag?-x:x;
}

inline void read(long long &x){
    char ch;
    bool flag=false;
    for (ch=getchar();!isdigit(ch);ch=getchar())if (ch=='-') flag=true;
    for (x=0;isdigit(ch);x=x*10+ch-'0',ch=getchar());
    x=flag?-x:x;
}
inline void write(int x){
    static const int maxlen=100;
    static char s[maxlen];
        if (x<0) {   putchar('-'); x=-x;}
    if(!x){ putchar('0'); return; }
    int len=0; for(;x;x/=10) s[len++]=x % 10+'0';
    for(int i=len-1;i>=0;--i) putchar(s[i]);
}

const int MAXN = 120000;
const int MAXM = 22 ;
typedef long long ll;

int n , m;
int num[ MAXN ];
int calc[ MAXN ];
ll f[ MAXN ];
ll pre[ MAXN ];
ll st,ed,sum;

void solve(int ans_l,int ans_r,int aim_l,int aim_r){
if ( aim_l > aim_r )
    return ;
int mid=(aim_l+aim_r)/2;
int ans_m=ans_l;
ll tmp=1ll<<60;
for (int i=ans_l;i<=min(mid-1, ans_r);i++)
    {
        while ( st< i+1 ) calc[ num[st] ]-- , sum-=calc[ num[st] ] ,st++ ;
        while ( ed> mid ) calc[ num[ed] ]-- , sum-=calc[ num[ed] ] ,ed-- ;
        while ( st> i+1 ) st-- ,sum+=calc[ num[st] ] , calc[ num[st] ]++ ;
        while ( ed< mid )
        {
            ed++ ,sum+=calc[ num[ed] ] , calc[ num[ed] ]++ ;
            //printf("----%d  %d  %d %d\n",ed, mid ,num[ed],calc[ num[ed] ]);
        }
        //printf("%d   %d  %d  %d %d\n",st,ed,i,mid,sum);
        //printf("%d  %d  %d  %d\n",pre[i],sum,pre[ans_m],tmp);
        if ( pre[i] + sum < pre[ ans_m ] + tmp )
            ans_m=i,tmp=sum;
    }
f[mid]=pre[ans_m]+tmp;
//printf("%d --> %d\n",ans_m,mid);
solve( ans_l, ans_m , aim_l , mid-1 );
solve( ans_m, ans_r , mid+1 , aim_r );
}


int main(){
    read(n); read(m);
    for (int i=1;i<=n;i++)
        read(num[i]);
    pre[0]=0;
    for (int i=1;i<=n;i++)
        pre[i]=1ll<<60;
    sum=0;
    st=1;ed=1;sum=0;calc[ num[1] ]=1;
    while ( m--)
        {
            solve(0,n-1,1,n);
            for (int i=1;i<=n;i++)
                pre[i]=f[i];
            /*
            for (int i=1;i<=n;i++)
                printf("%d ",pre[i]);
            puts("");
            */
            memset(f,0,sizeof(f));
        }
    printf("%I64d\n",pre[n]);
    return 0;
}
