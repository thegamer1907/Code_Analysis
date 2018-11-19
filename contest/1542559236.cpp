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
#define pi pair<int,int>
#define pipi pair<int,pair<int,int> >
#define fi first
#define se second
#define mod 1000000007
#define ll long long
const int MAX=4e5+7;
#define inf 10000000000000000LL
const int MAXB=22;

string s;
int n;
vector<string>v;
set<string>temp;

string func()
{
    for(int i=0; i<v.size(); i++)
    {
        string f=v[i];
        temp.insert(f);
        reverse(f.begin(),f.end());
        temp.insert(f);
        f.clear();
        for(int j=i+1; j<v.size(); j++)
        {
            f.push_back(v[i][1]);
            f.push_back(v[j][0]);
            temp.insert(f);
            f.clear();
            f.push_back(v[j][1]);
            f.push_back(v[i][0]);
            temp.insert(f);
            f.clear();
        }
    }
    if(temp.find(s)!=temp.end())
        return "YES";
    return "NO";
}

int main()
{
    ios_base::sync_with_stdio(false);
    //freopen("in.txt","r",stdin);
    cin>>s>>n;
    for(int i=1; i<=n; i++)
    {
        string x;
        cin>>x;
        v.push_back(x);
    }
    cout<<func()<<endl;
    return 0;
}
