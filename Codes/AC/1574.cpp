#include<bits/stdc++.h>
using namespace std;

int dirx[8]={0,0,1,-1,1,1,-1,-1};
int diry[8]={1,-1,0,0,1,-1,1,-1};
#define ll             long long
#define sc1(a)         scanf("%d",&a)
#define llsc1(a)       scanf("%lld",&a)
#define sc2(a,b)       scanf("%d %d",&a,&b)
#define llsc2(a,b)     scanf("%lld %lld",&a,&b)
#define sc3(a,b,c)     scanf("%d %d %d",&a,&b,&c)
#define llsc3(a,b,c)   scanf("%lld %lld %lld",&a,&b,&c)
#define pf             printf
#define cpfl(s)        cout<<s<<endl
#define cpf(s)         cout<<s
#define FOR(a)         for(ll i=0;i<a;i++)
#define inf            2e9
#define pr             pair<ll,ll>
#define newline        printf("\n")
#define mem(a,b)       memset(a,b,sizeof(a))
#define srt(a,n)       sort(a,a+n)
#define mx             100005
#define mm             1420
#define mod            1000000007
ll ar[mx],s;
int n;
multiset<ll>st;
multiset<ll>::iterator it;
ll chk(ll k)
    {
        ll tot=0;
        int cnt=0;
        for(ll i=1;i<=n;i++)st.insert(ar[i]+(k*i));
        for(it=st.begin();it!=st.end();it++){
            cnt++;
            tot+=*it;
            if(cnt==k)break;
        }
        st.clear();
        //if(cnt!=k)return inf;
        //(tot<=s)?return tot:return -1;
        return tot;
    }
void BS()
    {
        int b=1,e=n,m;
        ll ans=inf;
        int k=-1;
        while(b<=e){
            m=(b+e)/2;
            ll t=chk(m);
            //cout<<b<<" "<<e<<" "<<m<<" "<<t<<endl;
            if(t<=s){
                if(m>k){
                    k=m;
                    ans=t;
                }
                else if(m==k){
                    if(t<ans)ans=t;
                }
                //cout<<m<<" "<<t<<" "<<k<<" "<<ans<<endl;
                b=m+1;
            }
            else {
                //cpfl("YYYYYY  ");
                e=m-1;
            }
        }
        (k<0)?k=0:k;
        if(!k)ans=0;
        cout<<k<<" "<<ans<<endl;
    }
int main()
    {
        sc1(n);
        llsc1(s);
        for(int i=1;i<=n;i++)llsc1(ar[i]);
        BS();
        return 0;
    }