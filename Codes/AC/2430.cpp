#include<bits/stdc++.h>
#include<unordered_map>
#define ll long long int
#define mod 1000000007
#define mp make_pair
#define pb emplace_back
#define fi first
#define se second
#define sd(t) scanf("%d",&t)
#define pd(t) printf("%d\n",t)
#define slld(t) scanf("%lld",&t)
#define plld(t) printf("%lld\n",t)
#define For(i,n) for(ll i=0;i<n;i++)
#define speed ios::sync_with_stdio(false); cin.tie(0)
#define MAX 10000005
using namespace std;
//unordered_map<ll ,int>s;
unordered_map<ll ,ll>po;
int b[10000000]={0};


bool v[MAX];
int len, sp[MAX];

void Sieve(){
	for (int i = 2; i < MAX; i += 2)	sp[i] = 2;
	for (ll i = 3; i < MAX; i += 2){
		if (!v[i]){
			sp[i] = i;
			for (ll j = i; (j*i) < MAX; j += 2){
				if (!v[j*i])	v[j*i] = true, sp[j*i] = i;
			}
		}
	}
}

int main()
{
    speed;
    Sieve();
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        int y=a[i];
        while(y>1)
        {
            b[sp[y]]++;
            while(sp[y]==sp[y/sp[y]])
            {
                y=y/sp[y];
            }
            y=y/sp[y];
        }
    }
    
    vector<int> prime;
    prime.pb(0);
    for(int i=2;i<MAX;i++)
    {
        if(sp[i]==i)
        {
            prime.pb(i);
        }
    }
    int m;
    cin>>m;
    int d=prime.size();
    int rt[d]={0};
    int ans=0;
    //rt[0]=0;
    for(int i=0;i<d;i++)
    {
        ans+=b[prime[i]];
        rt[i]=ans;
    }
    /*for(int i=0;i<5;i++)
    {
        cout<<rt[i]<<" ";
    }*/
    while(m--)
    {
        int l,r;
        cin>>l>>r;
        if(l>MAX)
        {
            cout<<"0\n";
            continue;
        }
        if(r>MAX)
        {
            r=MAX;
        }
        ans=0;
        vector<int>::iterator lower,upper;
        lower = lower_bound (prime.begin(), prime.end(), r); 
        int yu=lower-prime.begin();
        yu--;
        if(sp[r]==r)
        {
            yu++;
        }
        ans+=rt[yu];
       //cout<<prime[yu]<<" ";
        upper = upper_bound (prime.begin(), prime.end(), l);
        yu=upper-prime.begin();
        //yu--;
        if(sp[l]==l)
        {
            yu--;
        }
        ans-=rt[yu-1];
        //cout<<prime[yu]<<" ";
        //cout<<lower-prime.begin()<<" "<<prime[lower-prime.begin()]<<" "<<ans<<"\n";
        cout<<max(ans,0)<<"\n";
    }
    return 0;
}