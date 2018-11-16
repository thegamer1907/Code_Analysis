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

#ifndef ONLINE_JUDGE
#define debugn(x) cout<<"Debug : "<<x<<endl;
#define debug(x) cout<<x<<' ';
#else
#define debug(x)
#define debugn(x)
#endif 
    
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

int vis[123456];
int ans=0;
vector <int>v[123456];
vector <int> cat(123456);

void check(int count, int i, int m)
{

    if(cat[i]) ++count;
    else count=0;

    if(count>m) return;
    
    vis[i] = 1;
    int si = v[i].size();
    if(si==1 && i>1)
    {
        ans+=1; 
        return;
    }

    for(int j=0;j<si;++j)
    {
        if(!vis[v[i][j]])
            check(count,v[i][j],m);
    }

}


void solve()
{
    int n,m;
    cin>>n>>m;

    

    for(int i=1;i<=n;i++)
        cin>>cat[i];
    

    for(int i=0,a,b;i<n-1;i++)
    {
        cin>>a>>b;
        v[a].pb(b);
        v[b].pb(a);
    }

    check(0,1,m);

    cout<<ans;

}




int main()
{

    fastIO

    int t=1;
    // cin>>t;
    
    for(int test_case=1;test_case<=t;test_case++)
    {
        solve();
    }
        return 0;
    
}   