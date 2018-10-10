#include<cstdio>
#include<cmath>
#include<cctype>
#include<cstring>
#include<iostream>
#include<algorithm>
#include<vector>
#include<queue>
#include<set>
#include<map>
#include<stack>
#include<string>
#define INF 0x3f3f3f3f
#define LC(a) (a<<1)
#define RC(a) (a<<1|1)
#define MID(a,b) ((a+b)>>1)
#define fin(name)  freopen(name,"r",stdin)
#define fout(name) freopen(name,"w",stdout)
#define CLR(arr,val) memset(arr,val,sizeof(arr))
#define FOR(i,start,end) for(int i=start;i<=end;i++)
#define FAST_IO ios::sync_with_stdio(false);cin.tie(0);
using namespace std;
typedef long long LL;
const int N=5e6+5;

int sum[N],n,m;

int bin_search(int x){
    int l=1,r=n;
    while(l<=r){
        int mid=(l+r)/2;
        if(sum[mid]==x||sum[mid]>x&&sum[mid-1]<x)
            return mid;
        if(sum[mid]<x)
            l=mid+1;
        else if(sum[mid-1]>=x)
            r=mid-1;
    }
    return -1;
}

int main(){
    FAST_IO;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>sum[i];
        sum[i]+=sum[i-1];
    }
    int m;
    cin>>m;
    for(int i=1;i<=m;i++){
        int x;
        cin>>x;
        int pos=bin_search(x);
        cout<<pos<<endl;
    }
    return 0;
}
