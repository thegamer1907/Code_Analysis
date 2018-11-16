#include <bits/stdc++.h>
using namespace std;

#define MOD 1000000007
#define mp make_pair
#define ff first
#define ss second
#define ll long long int 
#define deb(x) cout << #x << "=" << x << endl
#define deb2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << endl
#define f(i,a,b) for(i=a;i<b;++i)
#define rep(i,n) f(i,0,n)
#define fd(i,a,b) for(i=a;i>=b;--i)
#define pb push_back
#define fill(a,v) memset(a, v, sizeof a)
#define off ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define endl '\n'
typedef vector<int> vi; 
typedef vector<vi> vvi;  
typedef vector<ll> vl;
typedef vector<vl> vvl;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;
typedef pair<double,double> pdd;

template <typename T>
void printvec(vector<T>& vec)
{
    for(int i=0;i<vec.size();++i){
        cout<<vec[i]<<" ";
    }
    cout<<endl;

}

int main()
{
    off;
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int n,b;cin>>n>>b;
    std::vector<int> v(n);
    for (int i = 0; i < n; ++i)
    {
        cin>>v[i];
    }

    std::vector<int> ans;
    int odd = 0, even =0 ;
    for (int i = 0; i < n-1; ++i)
    {
        if(v[i]%2)
        {
            odd++;
        }
        else
        {
            even++;
        }
        if(even==odd)
        {
            ans.push_back(abs(v[i]-v[i+1]));
            even = 0;
            odd =0;
        }
    }

    sort(ans.begin(),ans.end());

    int cnt =0;
    for (int i = 0; i < ans.size() && b>=0; ++i)
    {
        if(ans[i]<=b)
        {
            cnt++;
            b -= ans[i];
        }
    }

    cout<<cnt;  
    return 0;
}