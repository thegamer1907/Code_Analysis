#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;

template <typename T>
using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

#define trace(x) {cerr << #x << "=" << x <<endl;}
#define trace2(x, y) {cerr << #x << "=" << x << " " << #y << "=" << y <<endl;}
#define trace3(x, y,z) {cerr << #x << "=" << x << " " << #y << "=" << y <<" " << #z << "=" <<z<<endl;}
/*
template <typename T> ostream& operator<<(ostream& os, const vector<T> &p){os << "[ "; for (T x: p) os << x << " "; os << "]" << endl; return os;}
template <typename T> ostream& operator<<(ostream& os, const set<T> &p){os << "{ "; for (T x: p) os << x << " "; os << "}" << endl; return os;}
template <typename T> ostream& operator<<(ostream& os, const ordered_set<T> &p){os << "{ "; for (T x: p) os << x << " "; os << "}" << endl; return os;}
template <typename Tk, typename Tv> ostream& operator<<(ostream& os, const map<Tk, Tv> &p){os << "{ "; for (pair<Tk, Tv> x: p) os << x << " "; os << "}" << endl; return os;}
template <typename Tk, typename Tv> ostream& operator<<(ostream& os, const pair<Tk, Tv> &p){os << "{" << p.first << ',' << p.second << "}";return os;}
*/
/*
template<typename It>
class Range
{
    It b,e;
public:
    Range(It b,It e):b(b),e(e) {}
    It begin() const
    {
        return b;
    }
    It end() const
    {
        return e;
    }
};
template<typename ORange,typename OIt=decltype(std::begin(std::declval<ORange>())),typename It=std::reverse_iterator<OIt>>
Range<It>reverse(ORange && originalRange)
{
    return Range<It>(It(std::end(originalRange)),It(std::begin(originalRange)));
}
*/
/*
string toString(int n) { string str; stringstream ss; ss<<n; ss>>str; return str; }
*/
#define pi pair<int,int>
#define pipi pair<int,pair<int,int> >
#define fi first
#define se second
#define mod 1000000007
#define ll long long
const int MAX=2e5+7;
const int dx4[]= {0,1,0,-1};
const int dy4[]= {1,0,-1,0};
#define inf 10000000000000000LL

int n,p[MAX];
vector<int>roots,adj[MAX];
int ans;

void dfs(int i,int l=1)
{
    ans=max(ans,l);
    for(auto j:adj[i])
        dfs(j,l+1);
}

int func()
{
    for(auto j:roots)
        dfs(j);
    return ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
   // freopen("in.txt","r",stdin);
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        cin>>p[i];
        if(p[i]==-1)
            roots.push_back(i);
        else
            adj[p[i]].push_back(i);
    }
    cout<<func()<<endl;
    return 0;
}

