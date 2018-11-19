#include<bits/stdc++.h>
using namespace std;
#define  LONG long long
const LONG    INF=0x3f3f3f3f;
const int   MOD= 9437 ;
const double PI=acos(-1.0);
#define clrI(x) memset(x,-1,sizeof(x))
#define clr0(x) memset(x,0,sizeof x)
#define clr1(x) memset(x,INF,sizeof x)
#define clr2(x) memset(x,-INF,sizeof x)
#define EPS 1e-10
#define lowhaha(x) (x&-x)
int num[101000][6] ;
int haha[10] ;
int Q_pow(int A ,int b)
{
    int res = 1;
    while(b)
    {
        if(b&1) res = (res*A)%MOD ;
        A = (A*A)%MOD ;
        b/= 2;
    }
    return res ;
}
int main()
{
    int n , K ;
    cin >> n >> K ;
    int ans ;
    ans = Q_pow(n , K) ;
    ans ^= ans ;
    for(int i = 1;i <= n ; ++ i)
        {
            for(int j = 1;j <= K ; ++ j)
                scanf("%d",&num[i][j]) ;
        }
        for(int I = 0 ;I < (1 << K ) ; ++ I )
        {
            int tmp = I ;int p = 0;
            clr0(haha) ;
            while(tmp )
            {
                haha[++p] = tmp&1;
                tmp/=2 ;
            }
            int Find = 0 ;
            for(int ii = 1; ii<= n ; ++ ii)
            {
                int judge = 1;
                for(int j = 1 ;j <= K ; ++ j)
                if(haha[j] != num[ii][j])
                    {
                        judge = 0 ;break ;
                    }
                if(judge )
                {
                    Find = 1;break ;
                }
            }
            if(!Find) continue ;
            int judge1 = 0;
            for(int ii = 1; ii <= n ; ++ ii )
            {
                int judge = 1;
                for(int j = 1;j <= K ; ++ j)
                    if(haha[j]== 1)
                    {
                        if(num[ii][j] == 1)
                        {
                            judge = 0 ; break ;
                        }
                    }
                if(judge )
                {
                    judge1 = 1 ;
                    break ;
                }
            }
            if(judge1)
            {
                ans = 1 ;break ;
            }
        }
        if(ans )
            printf("YES\n");
        else printf("NO\n") ;

}
