#include <cstdio>
#include <cstring>
#include <algorithm>
#include <iostream>
#include <cmath>
#include <queue>
#include <vector>
#include <set>
#define int long long

using namespace std;
const int maxn=1e5+10;
multiset<int>s;
int a[maxn],n;
signed main(){
   while(scanf("%I64d",&n)!=EOF){
    s.clear();
    int flag=1,flag1=1;;
    for(int i=1;i<=n;i++){
        scanf("%I64d",&a[i]);
        s.insert(a[i]);
        if(s.count(a[i])>=2&&flag1==0){
            flag=0;
        }
        if(s.count(a[i])>=2&&flag1==1){
            flag1=0;
        }
        if(s.count(a[i])>=3)flag=0;
    }
    if(s.count(0)>=2)flag=0;
    if(flag==0){
        puts("cslnb");
        continue;
    }
    sort(a+1,a+n+1);
    int sum=0;
    for(int i=1;i<=n;i++){
        if(s.count(a[i]+1)>=2){
            flag=0;
            break;
        }
        else{
            sum+=a[i]-(i-1);
        }
    }
    if(flag==0||sum%2==0){
        puts("cslnb");
    }
    else{
        puts("sjfnb");
    }
    }
}