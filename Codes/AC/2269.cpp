#include <iostream>
#include <algorithm>
#include <string.h>
#include <vector>
#include <cmath>
#include <stdlib.h>
using namespace std;

#define MAX 10000001

bool p[MAX];
int pos[MAX];
vector<int>primes;
int64_t s[700000];
int pcount;

void sieve() {
    p[1]=p[0]=true;
    for (int i=2; i<MAX; i++)
        if (!p[i]) {
            primes.push_back(i);
            pos[i]=++pcount;
            if ((int64_t)i*(int64_t)i<(int64_t)MAX)
                for (int j=i<<1; j<MAX; j+=i)
                    p[j]=true;
        }
}

int main() {
    sieve();
    cin.tie(0); ios::sync_with_stdio(false);
    int n,m;
    cin>>n;
    for (int i=0; i<n; i++) {
        cin>>m;
        for (int j=0; true; j++)
            if (!p[m]) {
                s[pos[m]]++;
                break;
            } else {
                int pj = primes[j];
                if (pj>m)
                    break;
                if (m%pj==0) {
                    s[pos[pj]]++;
                    do m=m/pj;
                    while (m%pj==0&&pj<=m);
                }
            }
    }

    primes.push_back((int(1e9)<<1)+1);
    for (int i=2; i<=pcount; i++)
        s[i]+=s[i-1];

    int l, r;
    cin>>m;
    for (int i=0; i<m; i++) {
        int sum=0;
        cin>>l>>r;
        auto il = lower_bound(primes.begin(), primes.end(), l);
        if (il!=primes.end()&&*il<=r) {
                auto ir = lower_bound(primes.begin(), primes.end(), r);
                if (ir!=primes.end()){
                    if (*ir>r)
                        ir--;
                    if (*ir>=l)
                        sum += s[pos[*ir]]-s[pos[*il]-1];
                }
        }
        printf("%d\n", sum);
    }

    return 0;
}
