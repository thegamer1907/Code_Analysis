#include<bits/stdc++.h>
//#include <boost/multiprecision/cpp_int.hpp>
//namespace mp = boost::multiprecision;
using namespace std; 
#define ll  long long int
#define dbl double
#define si set<int>
#define vi vector<ll>
#define vs vector<string>
#define vii vector<vi>
#define vll vector<ll>
#define vdbl vector<dbl>
#define mii map<int,int>
#define pii pair<int,int>
#define pll pair<ll,ll>
#define pff pair<double,double>
#define fr(i,n) for(ll i=0;i<n;i++)
#define pb push_back
#define mk make_pair
int mymin(vll v)
{
    return *min_element(v.begin(),v.end());
}
ll mymax(vll v)
{
    return *max_element(v.begin(),v.end());
}
struct HASH{
  size_t operator()(const pll&x)const{
    return hash<ll>()((x.first)^((x.second)<<32));
  }
};
struct CompareByFirst {
    constexpr bool operator()(pll const & a,
                              pll const & b) const noexcept
    { return a.first > b.first; }
};
ll power(ll a, ll b, ll p)
{
    if(a<2)
    return a;
    ll ans = 1;
    while(b)
    {
        if(b%2)
        {
            ans *= a;
            ans %= p;
        }
        b = b/2;
        a = (a*a)%p;
    }
    return ans;
}
vector<string> split(string str,char delimeter)
{
    vector<string> res;
    istringstream iss(str);
    string token;
    while(getline(iss,token,delimeter))
    {
        if(token.length()>0)
        res.push_back(token);
    }
    return res;
}
ll mgcd(ll a, ll b)
{
    if(a==0)
        return b;
    return mgcd(b%a,a);
}
void input_generator()
{
    int n = 30;
    
    cout<<n<<"\n";
    fr(i,n)
    {
        int a = rand()%10 + 1;
        int b = rand()%10 + 1;
        int c = rand()%10 + 1;
        cout<<max(a,b)<<" "<<min(a,b)<<" "<<c<<"\n";
    }
}
#define mx 201
#define sqmxx 174
#define mmm INT_MAX
#define mymod 1000000007
#define pcal 1e-19
#define pi 3.1415926535897932384
int main()
{
    clock_t tstart = clock();
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    //cout<<fixed<<setprecision(17);
    //srand ( time(NULL) );
    // input_generator();
    // return 0;
    int n,t;
    cin>>n>>t;
    string s;
    cin>>s;
    while(t--)
    {
        for(int i=1;i<n;i++)
        {
            if(s[i] == 'G' && s[i-1] == 'B')
            {
                swap(s[i],s[i-1]);
                i++;
            }
        }
    }
    cout<<s;
    //cout<<"\n\nTotal Time Taken : "<<(double)(-tstart + clock())/CLOCKS_PER_SEC<<"sec\n\n";
    return 0;
}