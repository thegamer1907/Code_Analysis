//      what makes me better than you?   -- THiNK
#include "bits/stdc++.h"
using namespace std;
const int N=1e5+10;
multiset<long long int> ms;
long long int solve(long long int x,long long int a[],long long int n){
        long long int res=0;
        ms.clear();
        for(int i=0;i<n;++i){
            ms.insert(a[i]+(i+1)*x);
        }
        auto it=ms.begin();
        while(x--){
            res+=*it;
            it++;
        }
        return res;
}
int main()
{
    //ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
    long long int low=0,high,mid,res,n,s,a[N],cost=0;
    cin>>n>>s;
    high=n+1;
    for(int i=0;i<n;++i){
        cin>>a[i];
    }
    while(low+1<high){
        mid=(low+high)/2;
        res=solve(mid,a,n);
        if(res>s)
            high=mid;
        else   {
            low=mid;
            cost=res;
        }
    }
    cout<<low<<" "<<cost;
}
