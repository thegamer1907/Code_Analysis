#include <bits/stdc++.h>
using namespace std;

void init(){
    #ifndef ONLINE_JUDGE
    freopen ("in.txt","r",stdin);
    freopen ("out.txt","w",stdout);
    #else
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    #endif
}

typedef long long int  li;
typedef vector<int> vi;
typedef vector< vector<int> > vvi;
typedef vector<li> vli;
typedef vector<bool> vb;
typedef pair<int,int> ii;

#define pb push_back
#define mp make_pair
#define ALL(x) x.begin(), x.end()
#define ALLr(x) x.rbegin(), x.rend()
#define UNIQUE(c) (c).resize(unique(ALL(c)) - (c).begin())
#define INF 1000000000
#define LIM 1000000
#define MOD 1000000007

int main(){
    init();
    int N, M, i, j, r = 0, v;
    cin>>N>>M;

    vi A(N); 
    v = -1;
    for(i=0; i<N; i++)
    	cin>>A[i], v = max(v, A[i]);

    for(i=0; i<N; i++)
    	r += v - A[i];

    int a, b;
    b = v + M;

    if(M<=r) a = v;
    else a = v + (M-r + N-1)/N;

    cout<<a<<' '<<b;




    return 0;
}
