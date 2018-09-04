#include<bits/stdc++.h>

#define   db(x)         printf("**%d\n",x)
#define   pb            push_back
#define   pii           pair<int,int>
#define   mod           1000000007
#define   mm(x,y)       memset(x,y,sizeof(x))
#define   fs            first
#define   sc            second

using namespace std;
typedef long long ll;
typedef double dbl;

int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    ll r,c,k;
    cin>>r>>c>>k;
    ll lo=1ll,hi=(r*c)+1ll,ans;
    while(hi>=lo){
        ll mid=(lo+hi)/2ll,cnt=0;
        //cout<<mid<<" -> ";
        for(ll i=1ll;i<=r;i++){
            cnt+=min(c,(mid/i));
            if(mid%i==0 and i<=mid and i*c>=mid) cnt--;
        }
        //cout<<cnt<<endl;
        if(cnt<k){
            ans=mid;
            lo=mid+1;
        }
        else hi=mid-1;
    }
    cout<<ans<<endl;
    return 0;
}
/*sample

*/

