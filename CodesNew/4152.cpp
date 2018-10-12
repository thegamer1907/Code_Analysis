#include<bits/stdc++.h>
using namespace std;

long long int val[200001];
long long int k[200001];
long long int x[200001];

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long int n,q;
    cin>> n>> q;
    for(long int i=1;i<=n;++i)
        cin>> val[i];
    for(long int i=1;i<=q;++i)
        cin>> k[i];
    long long int tot=0;
    for(long int i=1;i<=n;++i){
        tot+=val[i];
        x[i]=tot;
    }
    tot=0;
    long int ans=1;
    long long int cur=val[1];
    for(long int i=1;i<=q;++i){
        tot+=k[i];
        if(cur>tot){
            cur-=tot;
            tot=0;
        }
        else if(cur==tot){
            ans++;
            if(ans>n){
                ans=1;
                cur=val[1];
            }
            cur=val[ans];
            tot=0;
        }
        else{
            tot-=cur;
            ans++;
            if(ans>n){
                ans=1;
                cur=val[1];
                tot=0;
            }
            else{
                long int temp=upper_bound(x+1,x+1+n,tot+x[ans-1])-x;
                if(temp==n+1){
                    ans=1;
                    cur=val[1];
                    tot=0;
                }
                else{
                    tot+=x[ans-1];
                    tot-=x[temp-1];
                    cur=val[temp]-tot;
                    ans=temp;
                    tot=0;
                }
            }
        }
        //cout<< i<<" "<<ans<<" "<<tot<<" "<<cur<<"\n";
        cout<< n+1-ans<<"\n";
    }
    return 0;
}
