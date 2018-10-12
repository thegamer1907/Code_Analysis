#include <bits/stdc++.h>
using namespace std;
    
#define fastIO ios::sync_with_stdio(false);	cin.tie(NULL); cout.tie(NULL);
#define asc(s) sort(s.begin(),s.end())
#define des(s) sort(s.rbegin(),s.rend())
#define pb(x) push_back(x)
#define mp(x,y) make_pair(x,y)
#define rev(v) reverse(v.begin(), v.end())
#define lower(s) transform(s.begin(), s.end(), s.begin(), ::tolower);
#define upper(s) transform(s.begin(), s.end(), s.begin(), ::toupper);
#define precision(x,p) fixed<<setprecision(p)<<x
#define mod 1000000007
#define PI 3.14159265358979
typedef long long ll;
    
vector<string> split(string s)
{
    istringstream buf(s);
    istream_iterator<string>beg(buf), end;    
    vector<string>list(beg, end);
    return list;
}
    
    
bool isvowel(char c)
{
    string s = "aeiou";
    if(find(s.begin(),s.end(), c) != s.end()) return true;
    return false; 
}

bool cmp(pair <int,int> &a, pair <int,int> &b)
{
    return a.second > b.second || (a.second==b.second && a.first>b.first);
}
int a[1000010];
long long cnt[1000010];

ll sum(ll n)
{
    ll ans=0;

    while(n)
    {
        ans+=n%10;
        n/=10;
    }

    return ans;
}

void solve()
{
    int n,m;
    cin>>n>>m;

    vector <int> v(n);

    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }

    int ans2 = *max_element(v.begin(),v.end()) + m;

    asc(v);

    while(m)
    {
        int y;

        if(v.size()==1) y = m-1+v[0];
        
        else y = v[1];

        int add = min(m,y-v[0]+1);
        m-=add;
        v[0]+=add;
        asc(v);
    }

    int ans1 = *max_element(v.begin(),v.end());

    cout<<ans1<<' '<<ans2;

}    
    
    
int main()
{
    fastIO

    int t=1;
    // cin>>t;
    
    for(int test_case=1;test_case<=t;test_case++)
        solve();
    
        return 0;
}   