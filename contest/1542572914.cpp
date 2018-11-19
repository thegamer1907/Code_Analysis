#include<bits/stdc++.h>
#define ll long long int
#define mp make_pair
#define pb push_back
#define si(x) scanf("%d",&x)
#define pi(x) printf("%d\n",x)
#define s(x) scanf("%I64d",&x)
#define p(x) printf("%I64d\n",x)
#define sc(x) scanf("%s",x)
#define pc(x) printf("%s",x)
#define pii pair<int,int>
#define pll pair<ll,ll>
#define F first
#define S second
#define inf 2e16
#define PQG priority_queue< int,std::vector<int>,std::greater<int> >
#define PQL priority_queue< int,std::vector<int>,std::less<int> >
#define PQPL priority_queue<pii ,vector< pii >, less< pii > >
#define PQPG priority_queue<pii ,vector< pii >, greater< pii > >
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)

using namespace std;

int cnt[1<<4];
int main() {
    fast_io;
    int n,k;
    cin>>n>>k;
    memset(cnt,0,sizeof(cnt));
    for(int i=1;i<=n;i++) {
        int mask=0;
        for(int j=0;j<k;j++) {
            int x; cin>>x;
            mask=mask*2+x;
        }
        cnt[mask]++;
    }

    int flag=0;
    for(int i=0;i<(1<<k);i++) {
        for(int j=0;j<(1<<k);j++) {
            if(cnt[i] && cnt[j] && (i&j)==0) {
                flag=1;
            }
        }
    }

    if(flag) cout<<"YES\n";
    else cout<<"NO\n";

    return 0;
}
