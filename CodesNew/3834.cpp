#include <bits/stdc++.h>
#define MAX 100000
#define mp make_pair

using namespace std;

typedef long long ll;
typedef pair<int,int> ii;
typedef multiset<int>::iterator msi;

ll n,arr[MAX];
bool check(ll);

int main(){
    scanf("%I64d",&n);
    for(int i=0;i<n;i++)
        scanf("%I64d",arr+i);
    sort(arr,arr+n);
    ll l=arr[n-1],mid,r=arr[n-1]+arr[0];
    while(l<r){
        mid=(l+r)/2;
        check(mid)? r=mid : l=mid+1;
    }
    printf("%I64d",l);
}

bool check(ll val){
    ll rem=arr[0],idx=n-1;
    while(rem>0 && idx>0)
        rem-=(val-arr[idx--]);
    return rem<=0;
}
