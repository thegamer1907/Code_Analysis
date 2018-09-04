#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
ll p[10000007],l,r,n,m,x,rep[10000007];
bool notprime[20000001];
int main()
{
    cin>>n;
    for(int i=0;i<n;i++){
        scanf("%d", &x);
        rep[x]++;
    }


    for(ll i=2;i<=10000000;i++){
        if(!notprime[i]){
            for(ll j=1;j*i<=10000000;j++){
                notprime[j*i]=true;
                p[i]+=rep[j*i];
            }
        }
    }



    for(int i=2;i<=10000000;i++)
        p[i]+=p[i-1];


    cin>>m;
    while(m--){
        scanf("%d%d", &l, &r);
        if(l>10000000) {printf("0\n");continue;}
        r=min(r,10000000ll);
        printf("%I64d\n",p[r]-p[l-1]);
    }
    return 0;
}
