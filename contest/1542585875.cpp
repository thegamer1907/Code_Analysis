#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <iostream>
#include <map>
#include <queue>
#include <set>
#include <vector>
using namespace std;
typedef long long LL;
const int maxn = 2e2 + 7;
const int INF = 0x7fffffff;
double a[maxn];
int main() {
#ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
#endif
    while(cin>>a[0]>>a[1]>>a[2]){
        double s,t;
        cin>>s>>t;
        if(s==12)s=0;
        if(t==12)t=0;
        a[3]=s,a[4]=t;
        if(a[0]==12)
            a[0]=0;
        a[0]+=a[1]/60;
        a[0]+=a[2]/3600;
        a[1]+=a[2]/60;
        a[1]/=5;a[2]/=5;
        sort(a,a+5);
        a[5]=a[0];
        int flag=0;
        for(int i=0;i<5;i++){
          //  cout<<a[i]<<' ';
            if(a[i]==s&&a[i+1]==t){
                flag =1;
            }
            if(a[i]==t&&a[i+1]==s){
                flag = 1;
            }
        }
        if(flag){
            cout<<"YES\n";
        }else{
            cout<<"NO\n";
        }
    }
    return 0;
}