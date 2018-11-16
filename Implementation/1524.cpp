#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp> // Common file
#include <ext/pb_ds/tree_policy.hpp> // Including tree_order_statistics_node_update
#define lli long long int
#define br cout<<"\n";
#define plli pair<lli,lli>
#define vlli vector<lli>
#define vplli vector<plli>
#define pqlli priority_queue <lli>
#define pqplli priority_queue <plli>
#define mplli map<lli,lli>
#define pb push_back
#define mp make_pair
#define fr(i,n) for(i=0;i<n;i++)
#define fr1(i,n) for(i=1;i<=n;i++)
#define arr(a,n) lli a[n]; fr(i,n){ cin>>a[i]; }
#define arr1(a,n) lli a[n+5]; fr1(i,n){ cin>>a[i]; }
#define ff first
#define ss second
#define all(v) v.begin(),v.end()
#define mset(a) memset(a,0,sizeof a);
#define MAXNN 1000005
#define MAX  105
#define mod 1000000007
#define toupper(s) transform(s.begin(), s.end(), s.begin(), ::toupper);
#define inp freopen("input.txt", "r", stdin);
#define out freopen("output.txt", "w", stdout);
using namespace std;
using namespace __gnu_pbds;
typedef tree<lli, null_type, less_equal<lli>, rb_tree_tag, tree_order_statistics_node_update> ordered_set;
lli power(lli x,  lli y, lli p){ lli res = 1; x = x % p; while (y > 0) {if (y & 1)res = (res%p*x%p) % p;y = y>>1;x = (x%p * x%p) % p;}return res;}
int main()
{
    ios_base::sync_with_stdio(false);
    lli t,i,n,m,k,q,l,x,r,j,y;
        string s;
        cin>>s;
        n=s.length();
lli        f=0;
        y=0;
        x=0;
        for(i=0;i<n;i++)
        {
            if(s[i]=='1' && f==1)
            {
                x++;
            }
            if(s[i]=='1' && f==0)
            {
                x=1;
                f=1;
            }
            if(s[i]=='0')
                f=0;
            y=max(x,y);
        }
        f=0;
        x=0;
        for(i=0;i<n;i++)
        {
            if(s[i]=='0' && f==1)
            {
                x++;
            }
            if(s[i]=='0' && f==0)
            {
                x=1;
                f=1;
            }
            if(s[i]=='1')
                f=0;
            y=max(x,y);
        }
        if(y>=7)
            cout<<"YES\n";
        else
            cout<<"NO\n";
        return 0;
}
/*
5 4 3 2 1   4
1 5 4 3 2   3
1 4 5 3 2   2
1 3 4 5 2   1
1 2 3 4 5   0



*/
