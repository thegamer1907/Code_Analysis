#include<bits/stdc++.h>
using namespace std;
#define  LONG long long
const LONG    INF=0x3f3f3f3f;
const LONG    MOD= 97 ;
const double PI=acos(-1.0);
#define clrI(x) memset(x,-1,sizeof(x))
#define clr0(x) memset(x,0,sizeof x)
#define clr1(x) memset(x,INF,sizeof x)
#define clr2(x) memset(x,-INF,sizeof x)
#define EPS 1e-10
#define lowbit(x) (x&-x)
int num[101000][6] ;
int bit[6] ;
int main()
{
    int n , K ;
    while(cin >> n >> K )
    {
        int ans = 0 ;
        for(int i = 1;i <= n ; ++ i)
        {
            for(int j = 1;j <= K ; ++ j)
                scanf("%d",&num[i][j]) ;
        }
        for(int I = 0 ;I < (1 << K ) ; ++ I )
        {
            int tmp = I ;int p = 0;
            clr0(bit) ;
            while(tmp )
            {
                bit[++p] = tmp&1;
                tmp/=2 ;
            }
            int Find = 0 ;
            for(int ii = 1; ii<= n ; ++ ii)
            {
                int judge = 1;
                for(int j = 1 ;j <= K ; ++ j)
                if(bit[j] != num[ii][j])
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
                    if(bit[j]== 1)
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
//                for(int i = 1 ;i <= K ; ++ i)
//                    printf("%d ",bit[i]);cout<<endl;
                ans = 1 ;break ;
            }
        }
        if(ans )
            printf("YES\n");
        else printf("NO\n") ;
    }
}
