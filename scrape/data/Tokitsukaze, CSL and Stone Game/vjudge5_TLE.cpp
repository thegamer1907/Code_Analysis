#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

multiset<int> se;
ll a[100005];

int main()
{
    int n;
    scanf("%d",&n);
    ll sum=0;
    bool flag=true;
    int cnt=0;
    for(int i=0;i<n;i++) scanf("%lld",&a[i]);
    sort(a,a+n);
    for(int i=0;i<n;i++){
        if(se.count(a[i])>=2) flag=false;
        if(se.count(a[i])==1){
            cnt++;
            if(se.count(a[i]-1)) flag=false;
        }
        sum+=a[i];
        se.insert(a[i]);
    }
    if(se.count(0)>=2) flag=0;
    if(!flag||cnt>1){
        printf("cslnb\n");
    }else{
        sum-=n*(n-1)/2;
        if(sum%2==0) printf("cslnb");
        else printf("sjfnb\n");
    }
    return 0;
}