#include<bits/stdc++.h>

using namespace std;
typedef long long ll;
const int N = 2e5+5;
ll sum[N];
ll a[N];
ll cnt;
int n;
int q;

int main()
{
    cin>>n>>q;
    for(int i=1;i<=n;i++){
        cin>>sum[i];
        sum[i]=sum[i-1]+sum[i];
    }
    sum[n+1]=1e18+5;

    ll ss=0;
    ll x;
    for(int i=1;i<=q;i++){
        cin>>x;
        ss+=x;
        //cout<<"ss "<<ss<<endl;
        int in=lower_bound(sum+1,sum+n+2,ss)-sum;
        if(in==n+1){
            printf("%d\n",n);
            ss=0;
            //cout<<"llala "<<endl;
            continue;
        }
        if(sum[in]==ss){
            if(in==n){
                printf("%d\n",n);
                ss=0;
            }
            else printf("%d\n",n-in);
        }
        else{
            printf("%d\n",n-(in-1));
        }
    }

    return 0;
}
