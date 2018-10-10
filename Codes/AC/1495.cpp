#include "iostream"
#include "queue"
#include "stdio.h"
#include "vector"
#include "stack"
#include "list"
#include "algorithm"
#include "cmath"
#include "set"
#include "map"
#include <functional>
#include <stdlib.h>


#define F(i, k, j) for(int i = (int)k;i<=(int)j;i++)
#define FL(i, k, j) for(int i = (int)k;i>=(int)j;i--)
#define LL long long
#define pi pair<int,int>
#define pli pair<LL,int>
#define pll pair<LL,LL>

#define vint vector<int>
#define mp make_pair
# define MATH_PI           3.14159265358979323846

using namespace std;
const int T = 200001;

const LL MOD = 1000000000000007;
const LL MAX = 1000001;

const int MAXN = 1000002;

LL N[MAXN];
LL A[MAXN];

int n, S;
LL k;

int check(LL N[]) {
    N[0] = 5;
}

LL sum(LL k) {
    LL s = 0;
    F(i, 0, n-1) {
        A[i] = N[i] + (i + 1) * k;
    }
    sort(A, A+n);

    F(i, 0, k - 1) {
        s += A[i];
    }
    return s;
}


int main() {

    cin>>n>>S;

    F(i,0,n-1) {
        cin>>N[i];
    }

    LL b = 0;
    LL e = n;


    LL ans = 0;
    LL minS = 0;
    while(true) {
        k = (b + e) / 2;
        LL s = sum(k);
        if(s <= S) {
            ans = k;
            minS = s;
            if(b == e)
                break;
            b = k + 1;
        } else {
            if(b == e)
                break;
            e = k;
        }
    }

    cout<<ans<<" "<<minS<<endl;


}