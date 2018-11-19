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
using namespace std;
unordered_map<string ,bool>s;
unordered_map<ll ,ll>po;
/*bool visited[100005]={false};
vector<int> v[100005];*/

/*void dfs(int u,int f)
{
    visited[u]=true;
    int q=0;
    int kl=0;
    for(auto j:v[u])
	{
        
        if(visited[j]==false)
        {
            kl++;
            if(j==arr[f])
            {
                q++;
                dfs(j,f+1);
                
            }
        }  
    }
    if(q==0&&kl!=0)
    {
        df=1;
    }
}*/
/*void SieveOfEratosthenes(int n)
{
    bool prime[n+1];
    memset(prime, true, sizeof(prime));
 
    for (int p=2; p*p<=n; p++)
    {
        if (prime[p] == true)
        {
            // Update all multiples of p
            for (int i=p*2; i<=n; i += p)
            {
                if(prime[i]==true)
                {
                    prime[i] = false;
                    b.pb(p);
                }
            }
            
        }
    }
 
    
}*/


int main()
{
    string s;
    cin>>s;
    int n;
    cin>>n;
    int flag=0;
    int a[2]={0};
    while(n--)
    {
        string t;
        cin>>t;
        if(t==s)
        {
            flag=1;
        }
        else
        {
            if(t[1]==s[0]&&s[1]==t[0])
            {
                flag=1;
            }
            if(t[0]==s[1])
            {
                a[0]=1;
            }
            if(t[1]==s[0])
            {
                a[1]=1;
            }
        }
        
        
    }
    if(flag==1||(a[0]==1&&a[1]==1))
    {
        cout<<"YES";    
    }
    else
    {
        cout<<"NO";
    }
    
    
	return 0;
}