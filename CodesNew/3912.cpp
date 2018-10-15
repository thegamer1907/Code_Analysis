#include<iostream>
#include<cstdio>
#define maxn 100005
#define LL long long
using namespace std;

int n;
LL a[maxn];
LL l,r,mid;

bool check(LL x){
    LL cnt=0;
    for(int i=1;i<=n;i++){
        if(x<a[i]) return 0;
        else cnt+=x-a[i];
    }
    return cnt>=x?1:0;
}

int main(){
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>a[i];
        r+=a[i];
    }
    while(r>l+5){
        mid=(r+l)/2;
        if(check(mid)) r=mid;
        else l=mid;
    }
    
    for(mid=l;mid<=r;mid++){
        if(check(mid)){
            cout<<mid;
            return 0;
        }
    }
    return 0;
}