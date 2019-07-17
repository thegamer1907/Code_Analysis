#include<bits/stdc++.h>
using namespace std;
long long n,m,k,arr[100005],last,ans;
int main()
{
    //freopen("input.txt","r",stdin);
    scanf("%lld %lld %lld",&n,&m,&k);
    long long i,p,cnt=0;
    for(i=1;i<=m;i++){
        scanf("%lld",&arr[i]);
    }
    for(p=1;p<=m&&last<=n;){
        last+=k*((arr[p]-last)/k);
        while(last<arr[p])last+=k;
        for(;p<=m&&arr[p]<=last;p++){
            cnt++;
        }
        while(cnt){
            ans++;
            last+=cnt;
            last=min(last,n);
            cnt=0;
            for(;p<=m&&arr[p]<=last;p++){
                cnt++;
            }
        }
    }
    printf("%lld",ans);
    return 0;
}