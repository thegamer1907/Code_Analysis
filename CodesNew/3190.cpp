#include <bits/stdc++.h>
    #include <sstream>
    using namespace std;
    #define ll long long int
    #define ld long double
    #define key pair<ld,ld>
    #define vii vector<pair<int,int> >
    #define vi vector<int>
    #define vvi vector<vector<int> >
    #define vs vector<string>
    #define pb push_back
    #define all(c) (c).begin(),(c).end()
    #define mp make_pair
    #define f first
    #define s second
    #define nu 100001
    #define mod 1000000007
    #define mul(x,y) ((ll)(x)*(y))%mod
    #define tr( c , i ) for(typeof((c).begin()) i = (c).begin(); i != (c).end(); i++)

    #define INF 0x3f3f3f3f
    ll gcd(ll a,ll b)
        {
            while(b!=0)
                {
                    ll t=b;
                    b=a%b;
                    a=t;
                }
            return a;
        }
    ll lcm(ll a,ll b)
        {
            return  a*b/gcd(a,b);
        }
    bool isprime(ll n)
        {
            if(n==1)
                return false;
            if(n==2)
                return true;
            for(ll i=2;i*i<=n;++i)
                {
                    if(n%i==0)
                        return false;
                }
            return true;
        }
    bool ispalindrome(int n)
        {
            ll rev=0,n1=n;
            while(n1>0)
                {
                    rev=rev*10+n1%10;
                    n1/=10;
                }
            return n==rev;
        }

//////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////
int main()
{
    int n,k;
    cin>>n>>k;
    int a[n];
    vi sum;
    sum.pb(0);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        sum.pb(1 - a[i] + *(sum.end()-1));
    }
    int ans=0,pos=0;
    for(int i=1;i<=n;i++)
    {
        if(a[i-1]==1)
            continue;

        int temp=lower_bound(all(sum),sum[i]+k)-lower_bound(all(sum),sum[i]-1)-1;
        if(temp>ans)
        {
            ans=temp;
            pos=i-1;
        }
        //cout<< i <<' '<< upper_bound(all(sum),sum[i]+k)-sum.begin() -1 << ' ' << lower_bound(all(sum),sum[i]-1) - sum.begin() +1 <<endl; ;
    }
    for(int i=0;i<n;i++)
    {
        if(a[i]==0 && k>0 && i>=pos)
        {
            a[i]=1;
            k--;
        }
    }
    int temp=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]==1)
            temp++;
        else
            temp=0;
        ans=max(temp,ans);
    }
    cout<<ans<<endl;
    for(int i=0;i<n;i++)
        cout<<a[i]<<' ';
}
