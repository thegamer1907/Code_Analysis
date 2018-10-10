#include<bits/stdc++.h>
using namespace std;
long long s[100005];
int n,t;
long long deal(int x) {
    priority_queue<long long,vector<long long>,greater<long long> >q;
    for(int i=1; i<=n; i++) {
        long long a=s[i]+1ll*i*x;
        q.push(a);
    }
    long long sum=0;
    for(int i=1; i<=x; i++) {
        sum+=q.top();
        q.pop();
    }
    return sum;
}
int main() {
    scanf("%d%d",&n,&t);
    for(int i=1; i<=n; i++) {
        scanf("%lld",&s[i]);
    }
    int l=0,r=n;
    long long sum=0;
    while(r>l) {
        int mid=l+(r-l+1)/2;
        long long ans=deal(mid);
        if(ans<=t) {
            sum=ans;
            l=mid;
        } else {
            r=mid-1;
        }
    }
    printf("%d %lld\n",l,sum);
    return 0;
}
