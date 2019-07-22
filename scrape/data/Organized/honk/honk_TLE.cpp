#include<bits/stdc++.h>
using namespace std;
long long int n,m,k;
const int maxn=1e5+100;
long long int p[maxn];
int main() {
    //map<long long,int> mp;
    //mp.clear();
    scanf("%I64d %I64d %I64d",&n,&m,&k);
    long long int sum=0;
    scanf("%I64ld",&p[0]);
    long long int tmp=1;
    while(p[0]>tmp*k) {
        tmp++;
    }
    //cout<<tmp<<endl;
    for(int i=1; i<m; i++) {
        scanf("%I64d",&p[i]);
        //mp[p[i]]=i+1;
    }
    for(int i=0; i<m; i++) {
        if(p[i]<=tmp*k)
            sum++;
        //mp[p[i]]=i+1;
    }
    long long int ans=1;
    long long int point=sum;
    long long int maxn=tmp*k;
    while(point<m) {
        ans++;
        maxn=maxn+sum;
        sum=0;
        while(p[point]>maxn) maxn+=k;
        while(p[point]<=maxn&&point<m){
            point++;
            sum++;
        }
//        while(p[point]<=maxn&&point<m) {
//            point++;
//            sum++;
//        }
//        while(sum==0) {
//            maxn+=k;
//            while(p[point]<=maxn&&point<m) {
//                point++;
//                sum++;
//            }
//        }
    }
    printf("%I64d\n",ans);

    return 0;
}