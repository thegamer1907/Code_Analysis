#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

const ll inf = 1ll<<60;
const int N = 100100 , K = 21;
int l,r,f[N],a[N];
ll dp[K][N] , sum ;

void get(int L,int R){

while( L < l ){
    l--;
    sum+=f[a[l]];
    f[a[l]]++;
}

while( r < R ){
    r++;
    sum+=f[a[r]];
    f[a[r]]++;
}

while( l < L ){
    f[a[l]]--;
    sum-=f[a[l]];
    l++;
}

while( R < r ){
    f[a[r]]--;
    sum-=f[a[r]];
    r--;
}

}


void solve(int k,int L,int R,int from,int to){

if( L > R )return;

int mid = L+R>>1;
int f=0;
dp[k][mid]=inf;

for(int i=from;i<=min(mid,to);i++){
    get(i,mid);
    ll tmp=dp[k-1][i-1]+sum;
    if( tmp < dp[k][mid] ){
        dp[k][mid]=tmp;
        f=i;
    }
}

solve(k,L,mid-1,from,f);
solve(k,mid+1,R, f ,to);
}


int main(){

int n,k;

scanf("%d %d",&n,&k);

for(int i=1;i<=n;i++)scanf("%d",a+i),dp[0][i]=inf;

l=1;
for(int i=1;i<=k;i++)solve(i,1,n,1,n);

printf("%lld\n",dp[k][n]);

return 0;
}
