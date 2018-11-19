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

int read()
{
    int i,j,k;
    int x,y;
    double a,b,c;
    int ax,bx,cx;
    cin >> ax >> bx >> cx >> x >> y;
    if(bx == 0 && cx == 0)
        a = ax;
    else
        a = ax + 0.1;
    if(cx == 0)
        b = bx;
    else
        b = bx + 0.1;
    c = cx;
    if(x>y) swap(x,y);
    int nflag = 0;
    if(x<a && a<y)
        nflag ++;
    if(x<b/5.0 && b/5.0<y)
        nflag ++;
    if(x<c/5.0 && c/5.0<y)
        nflag ++;
    // printf("%d\n",nflag);
    if(nflag == 3 || nflag == 0)
        cout << "YES\n";
    else
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