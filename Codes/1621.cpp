#include <bits/stdc++.h>
using namespace std;

#define MAXN 100005

typedef long long ll;

int n;
ll S;
ll a[MAXN],c[MAXN];
ll ansT;
int ansk;

bool valid(int k){
    for (int i=1;i<=n;i++){
        c[i] = a[i] + (long long)i * k;
    }
    sort (c+1,c+1+n);
    ll sum = 0;
    for (int i=1;i<=k;i++){
        sum += c[i];
    }
    if (sum <= S){
        ansT = sum;
        //printf ("sum : %lld\n",sum);
        return true;
    }
    return false;
}

int main(){
    scanf ("%d%lld",&n,&S);
    for (int i=1;i<=n;i++){
        scanf ("%lld",&a[i]);
    }
    int mid,l=0,r=n;
    while (l <= r){
        mid = (l+r)/2;
        if (valid(mid)){
            ansk = mid;
            l = mid + 1;
        }else{
            r = mid - 1;
        }
    }
    printf ("%d %lld\n",ansk,ansT);

return 0;
}
