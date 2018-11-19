#include<bits/stdc++.h>
using namespace std;
int ans[20];


int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    memset(ans,0,sizeof(ans));
    int n,k,x,flag=0;
    cin>>n>>k;
    for(int i=1;i<=n;i++) {
        int temp=0;
        for(int j=1;j<=k;j++) {
            cin>>x;
            temp=temp*2+x;
        }
        ans[temp]++;
        //cout<<temp<<endl;
    }
    int maxn=pow(2,k)-1;
    //for(int i=0;i<=maxn;i++) cout<<ans[i]<<" ";
    if(ans[0]>=1) flag=1;
    for(int i=0;i<maxn;i++) {
        if(ans[i]>=1) {
            for(int j=i+1;j<=maxn;j++) {
                if(ans[j]>=1) {
                    for(int s=0;s<k;s++) {
                        int tx=(i>>s)&1,ty=(j>>s)&1;
                        if(tx==1&&ty==1) break;
                        if(s==k-1) flag=1;
                    }
                }
            }
        }
    }
    if(flag==1) cout<<"YES\n";
    else cout<<"NO\n";
    return 0;
}
