#include <bits/stdc++.h>
#define f first
#define s second
#define ll long long
#define MP make_pair
#define PB push_back
#define INF ((1<<30)-1)
#define MOD 1000000007
#define MAXN 200100
#define EPS 1e-9
#define INFLL 1e18
using namespace std;
FILE *in,*out;

int N,M,K;
int used[50];
int vals[50];

int read()
{
    int i,j,k;
    int x,y,t,z,v;
    cin >> N >> K;
    for(i=0;i<N;i++)
    {
        for(j=0,k=1,y=0;j<K;j++,k*=2)
        {
            cin >> x;
            y += k*x;
        }
        // printf("y:%d\n",y);
        used[y]=1;
    }
    for(i=1;i<(1<<16);i++)
    {
        for(j=0;j<16;j++)
            vals[j]=0;
        for(j=0,k=1,x=0;j<16;j++,k*=2)
        {
            if(!(k&i))
                continue;
            if(used[j]==0)
                break;
            if(used[j])
            {
                x++;
                for(y=1,t=0;y<(1<<16);y*=2,t++)
                    if((y&j))
                        vals[t]++;
            }
        }
        if(j<16)
            continue;
        for(j=0;j<16;j++)
        {
            if(vals[j] > x/2)
                break;
        }
        if(j>=16)
        {
            cout << "YES\n";
            return 0;
        }
    }
    cout << "NO\n";
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