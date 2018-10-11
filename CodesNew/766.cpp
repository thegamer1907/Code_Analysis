#include<bits/stdc++.h>
#define pb push_back
#define f first
#define mod 1000000007
#define all(x) x.begin(),x.end()
#define sorta(x) sort(all(x))
#define sortr(x) sort(x.begin(),x.end())
#define forn(i,n) for (int i = 0; i < int(n); i++)
#define forn1(i,n) for (long long i = 1; i <= n; i++)
#define forn2(i,n) for(long long i=0;i<n.size();i++)
#define rev(x) reverse(x.begin(),x.end())
#define dwn(i,n) for(int i=(n); --i>=0; )
#define test int t;cin>>t;while(t--)
#define valid(i,j,n,m) (bool)(i >= 0 && i < n && j >= 0 && j < m)
#define valid1(i,j,n,m) (bool)(i > 0 && i <= n && j > 0 && j <= m)
#define line(n) getline(cin,n)
#define inf (long long)1e18
#define fll(a,v) memset(a, v, sizeof a)
#define sz(a) ((int)(a.size()))
#define bitcount __builtin_popcount

#define powof2(n) (!(n & (n-1)))
#define setbit(n,x) (n |= (1<<x))

#define checkbit(n,b) ((n >> b) & 1)
#define digits(i) (ll)((log(i)/log(10))+1)
using namespace std;
typedef unsigned long long ull;
typedef long long ll;

void bla()

{
    ios::sync_with_stdio(0);
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
}
int main()
{
    bla();
    int n,m;
    cin>>n>>m;
    set<string>sp,sp1;
    set<string>::iterator it = sp1.begin();
    it != sp1.end();
    ++it;
    string s,s1;
    forn(i,n)
    {
        cin>>s;
        sp.insert(s);
    }
    forn(i,m)
    {
        cin>>s1;
        sp1.insert(s1);
    }
    if(sz(sp) > sz(sp1))
        printf("YES");
    else if(sz(sp) < sz(sp1))
        printf("NO");
    else
    {
        int cnt = 0;
        for(auto i : sp)
        {
            it = sp1.find(i);
            if(it != sp1.end())
                cnt++;
        }
        if(cnt&1)
        {
            if(n-cnt+1 > m-cnt)
                printf("YES");
            else
                printf("NO");
        }
        else
        {
            if(m-cnt+1 > n-cnt)
                printf("NO");
            else
               printf("YES"); 
        }
    }
}


