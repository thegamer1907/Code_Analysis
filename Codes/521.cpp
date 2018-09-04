#include<bits/stdc++.h>
#define two(a) (1<<(a))
#define LINF (1ll<<61)
#define EPS (1e-14)
#define Lshift(a,b) (a<<b)
#define Rshift(a,b) (a>>b)
#define rep(a,b) for(a=0 ; a<b ; a++)
#define xrep(a,b,c) for(a=b ; a<c ; a++)
#define INF (1<<29)
#define swap(a,b) ( (a^=b) , (b^=a) , (a^=b) )
#define GET(x) (mark[x>>5]>>(x&31)&1)
#define SET(x) (mark[x>>5]|=1<<(x&31))
#define maxL (10000000>>5)+1
#define mod 1000000007
typedef long long ll;
using namespace std;

int p[100000][11], plen;

int check(int x) {
    int result = 0;
    while (x) {
        result += x % 10;
        x /= 10;
    }
    return result == 10;
}

void solve(int n) {
    int i=0, j=0;
    while (1) {
       if(check(i)) {
           j++;
           if (j == n) {
               cout << i << endl;
               return;
           }
       }
       i++;
    }
}

int main() {
    int k;
    cin >> k;
    solve(k);
}
