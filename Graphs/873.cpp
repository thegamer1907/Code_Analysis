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

void solve()
{
    int n,t;
    cin>>n>>t;

    vector <int> v(n+1);

    for(int i=1;i<n;i++)
    {
        cin>>v[i];
    }

    int cur = 1;

    while(cur<t)
    {
        cur += v[cur];
    }

    cur==t ? cout<<"YES" : cout<<"NO";
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