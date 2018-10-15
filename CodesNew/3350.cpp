#include <bits/stdc++.h>
using namespace std;

#define pr(x) cout<<(x)<<'\n',0
#define sc(x) scanf("%d",&x);
#define scarr(x,a) for(int _=0;_<x;_++)scanf("%d",&a[_]);
#define prarr(x,a) for(int _=0;_<x;_++)printf("%d ",a[_]);
#define rep(_,x) for(int _=0;_<x;_++)
#define rep1(_,x) for(int _=1;_<=x;_++)

#define MAX_N 105

int N ,M;
int A[MAX_N];

int main()
{
    sc(N)sc(M)
    scarr(N ,A)

    int ma = *max_element(A,A+N);
    int mi = *min_element(A,A+N);
    int an = ma+M;

    rep(i ,N){
        M -= max(ma-A[i] ,0);
    }M = max(M,0);

    cout << ma+((M+N-1)/N) << " " << an << endl;
}
