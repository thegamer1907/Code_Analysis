//#include<bits/stdc++.h>
//using namespace std;
//long long int n,m,k;
//const int maxn=1e5+100;
//long long int p[maxn];
//int main() {
//    //map<long long,int> mp;
//    //mp.clear();
//    scanf("%I64d %I64d %I64d",&n,&m,&k);
//    long long int sum=0;
//    scanf("%I64ld",&p[0]);
//    long long int tmp=1;
//    while(p[0]>tmp*k) {
//        tmp++;
//    }
//    //cout<<tmp<<endl;
//    for(int i=1; i<m; i++) {
//        scanf("%I64d",&p[i]);
//        //mp[p[i]]=i+1;
//    }
//    for(int i=0; i<m; i++) {
//        if(p[i]<=tmp*k)
//            sum++;
//        //mp[p[i]]=i+1;
//    }
//    long long int ans=1;
//    long long int point=sum;
//    long long int maxn=tmp*k;
//    while(point<m) {
//        ans++;
//        maxn=maxn+sum;
//        sum=0;
//        while(p[point]>maxn) maxn+=k;
//        while(p[point]<=maxn&&point<m){
//            point++;
//            sum++;
//        }
////        while(p[point]<=maxn&&point<m) {
////            point++;
////            sum++;
////        }
////        while(sum==0) {
////            maxn+=k;
////            while(p[point]<=maxn&&point<m) {
////                point++;
////                sum++;
////            }
////        }
//    }
//    printf("%I64d\n",ans);
//
//    return 0;
//}
#include <bits/stdc++.h>
#define ll unsigned long long
using namespace std;
const int maxn=1e5+100;
ll p[maxn];
int main() {
    ll n;
    int m;
    ll k;
    cin>>n>>m>>k;
    stack<ll> q;
    for(int i=0; i<m; ++i) {
        cin>>p[i];
    }
    for(int i=m-1; i>=0; i--) {
        q.push(p[i]);
    }
    ll cnt=0;
    ll ans=0;
    ll prenum=0;
    ll num=0;
    while (!q.empty()) {
        //ll tmp=q.top();

        cnt=(q.top()-prenum-1)/k;
        while (!q.empty() && (unsigned long long)(q.top()-prenum) <= (unsigned long long )(cnt+1ull)*(unsigned long long)k) {
            q.pop();
            ++num;
        }
        prenum=num;
        ++ans;
    }
    cout<<ans<<endl;


    return 0;
}