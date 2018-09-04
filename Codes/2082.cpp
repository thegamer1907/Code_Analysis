#include <iostream>
#include <string>
#include <cstring>
#include <stdio.h>
#include <iomanip>
#include <math.h>
#include <vector>
#include<cctype>
#include<algorithm>
#include<set>
#include<stack>
#include<map>
#include<time.h>
#include<iterator>
#include <deque>
#include <sstream>
#include<queue>
#include<stdlib.h>
#include<bitset> 
#include <utility>
#include<assert.h>
#include<functional>
#include<limits.h>

#define fn(i,n) for(int (i) = 0;(i) < (n);(i)++)
#define f1n(i,n) for(int (i) = 1;(i) <= (n);(i)++)
#define mk(f,s) make_pair((f),(s))

#define defV(dp,e) memset(dp,e,sizeof dp)

#define ri(n) scanf("%d",&n)
#define rl(n) scanf("%lld",&n)
#define rs(s) scanf("%s",s)

#define PI acos(-1.0)

using namespace std;

typedef long long ll;
typedef pair<int, int > pp;

typedef vector<int  > v1;
typedef vector<ll  > vl;
typedef vector<pp  > vpp;
typedef vector<bool  > vb;
typedef vector<char > vc;
typedef vector<v1 > v2;

int const bound = 5e6 + 2, N = 6e5 + 2;
ll OO = 1e18;
int oo = 1e9,mod = oo + 7;

map<ll ,int> mp,ot;
int n,k,aa[N];

int main() {
    //freopen("inp;ut.txt", "r", stdin);
    scanf("%d%d",&n,&k);
    fn(i,n){
        scanf("%d",&aa[i]);
        mp[aa[i]]++;
    }
    ll ans=0;
    fn(i,n){
        if(aa[i]%k){
            ot[aa[i]]++;
            continue;
        }
        mp[aa[i]]--;
        ans+=1LL*ot[aa[i]/k]*mp[1LL*aa[i]*k];
        ot[aa[i]]++;
    }
    printf("%lld\n",ans);
    return 0;
}