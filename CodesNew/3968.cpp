#include <iostream>
#include <string.h>
#include <math.h>
#include <vector>
#include <algorithm>
#include <stdio.h>
#include <queue>
#include <set>
using namespace std;
typedef long long ll;
const int MAXN = 300500;
const ll INF = 0x3f3f3f3f3f3f3f3f;

ll a[MAXN];
ll sum[MAXN];

ll tree[MAXN<<2];
void update(int L,int C,int l,int r,int rt){
    if(l==r){
        tree[rt]=C;
        return;
    }
    int m=(l+r)/2;
    if(L<=m)
        update(L,C,l,m,rt<<1);
    else
        update(L,C,m+1,r,rt<<1|1);
    tree[rt]=tree[rt<<1]+tree[rt<<1|1];
}
ll query(int L,int R,int l,int r,int rt){
    if(L<=l&&r<=R){
        return tree[rt];
    }
    int m=(l+r)/2;
    ll ans=0;
    if(L<=m)
        ans+=query(L,R,l,m,rt<<1);
    if(R>m)
        ans+=query(L,R,m+1,r,rt<<1|1);
    return ans;
}



int main()
{
    int N,Q;
    scanf("%d%d",&N,&Q);
    for(int i=1;i<=N;i++){
        scanf("%lld",&a[i]);
        sum[i]=sum[i-1]+a[i];
        update(i,a[i],1,N,1);
    }

    ll K;
    int cur=1;
    ll num=a[1];
    while(Q--){
        scanf("%lld",&K);
       // cout<<cur<<" "<<num<<endl;
        if(K>=num){
            K-=num;
            cur++;
            num=a[cur];


            if(K<sum[N]-sum[cur-1]){

                int l=cur;
                int r=N;

                while(l<r){
                    int m=(l+r)/2;
                    if(query(cur,m,1,N,1)<=K)
                        l=m+1;
                    else
                        r=m;
                }

                K-=query(cur,l-1,1,N,1);
                cur=l;
                num=a[cur]-K;
                cout<<N-l+1<<endl;



            }
            else{
                cout<<N<<endl;
                cur=1;
                num=a[cur];


            }


        }
        else{
            num-=K;
            cout<<N-cur+1<<endl;
        }

    }



    return 0;
}



