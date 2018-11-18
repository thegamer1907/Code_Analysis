#include <bits/stdc++.h>
#define f first
#define s second
#define ll long long
#define MP make_pair
#define PB push_back
#define INF ((1ll<<60)-1)
#define MOD 1000000007
#define MAXN 200100
#define EPS 1e-9
#define INFLL 1e18
using namespace std;
FILE *in,*out;

int N,M,K;
int ar[MAXN];
int vals[MAXN];
int cur[MAXN];
ll total;
ll dp[MAXN];
ll dp2[MAXN];
int L=0,R=0;

int arrange(int l,int r)
{
    while(R<r)
    {
        R++;
        total += cur[ar[R]];
        cur[ar[R]]++;
    }
    while(R>r)
    {
        cur[ar[R]]--;
        total -= cur[ar[R]];
        R--;
    }
    while(L>l)
    {
        L--;
        total += cur[ar[L]];
        cur[ar[L]]++;
    }
    while(L<l)
    {
        cur[ar[L]]--;
        total -= cur[ar[L]];
        L++;
    }
    return 0;
}

int solve(int l,int r,int lx,int rx)
{
    if(l>r)
        return 0;
    // printf("l:%d r:%d lx:%d rx:%d\n",l,r,lx,rx);
    int i,j,k;
    int m = (l+r)/2;
    int ind = rx;
    for(i=min(rx,m);i>=lx;i--)
    {
        arrange(i,m);
        if(i>0 && dp2[m] > total+dp[i-1])
        {
            dp2[m] = total + dp[i-1];
            ind = i;
        }
    }
    solve(l,m-1,lx,ind);
    solve(m+1,r,ind,rx);
    return 0;
}

int DEBUG()
{
    int i,j,k;
    for(i=0;i<N;i++)
        cout << dp[i] << " ";
    printf("\n");
    return 0;
}

int read()
{
    int i,j,k;
    int x,y;
    cin >> N >> K;
    for(i=0;i<N;i++)
    {
        cin >> ar[i];
        total += vals[ar[i]];
        vals[ar[i]]++;
        dp[i] = total;
    }
    total=0;
    cur[ar[0]]++;
    // arrange(0,1);
    // cout << total << "\n";
    // DEBUG();
    for(i=1;i<K;i++)
    {
        for(j=0;j<N;j++)
            dp2[j]=INF;
        solve(0,N-1,0,N-1);
        for(j=0;j<N;j++)
            dp[j]=dp2[j];
        // DEBUG();
    }
    cout << dp[N-1] << "\n";
    return 0;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    // in = fopen("A.in","r");
    // out  = fopen("A.out","w");
    in = stdin;
    out = stdout;
    read();
    return 0;
}
//////////// !!!!!!!!!! Check
// Interactive problems => Deactiave read optimizer!

//////////// Sublime Snippets
// forx
// fory
// vectorx
// pairx
// sizex
// compile
// mod_operations
// graph_edges

// lca
// rmq
// fft
// bigint
// bigint_fft
// bigint_normal
// hash_gnu
// simple_segment
// tree_decomposition
// number_theory
/*
python cf.py a
g++ A.cpp -o a -std=c++11;./a
g++ B.cpp -o a -std=c++11;./a
g++ C.cpp -o a -std=c++11;./a
g++ D.cpp -o a -std=c++11;./a
g++ E.cpp -o a -std=c++11;./a
g++ F.cpp -o a -std=c++11;./a
g++ G.cpp -o a -std=c++11;./a
*/