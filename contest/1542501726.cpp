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
    string str,str2;
    int l=0,r=0;
    cin >> str;
    cin >> N;
    for(i=0;i<N;i++)
    {
        cin >> str2;
        if(str[0] == str2[1])
            l = 1;
        if(str[1] == str2[0])
            r = 1;
        if(str==str2)
            l=1,r=1;
    }
    if(l&&r)
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