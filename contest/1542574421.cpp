#include "bits/stdc++.h"
#include <ext/pb_ds/assoc_container.hpp>
#define MAXN 30009
#define MOD 1000000007
#define mp(x,y) make_pair(x,y)
#define all(v) v.begin(),v.end()
#define pb(x) push_back(x)
#define wr cout<<"----------------"<<endl;
#define ppb() pop_back()
#define tr(ii,c) for(__typeof((c).begin()) ii=(c).begin();ii!=(c).end();ii++)
#define st first
#define nd second
#define my_little_dodge 46
#define debug(x)  cerr<< #x <<" = "<< x<<endl;
#define vi vector <int>

using namespace std;
using namespace __gnu_pbds;

typedef long long ll;
typedef pair<int,int> PII;
typedef tree<int,null_type,less<int>,rb_tree_tag,tree_order_statistics_node_update> indexed_set;

template<class T>bool umin(T& a,T b){if(a>b){a=b;return 1;}return 0;}
template<class T>bool umax(T& a,T b){if(a<b){a=b;return 1;}return 0;}
int n;
bool k, l;
string s, x;
int main()
{
    //~ freopen("file.in", "r", stdin);
    cin >> s >> n;
    for(int i = 0; i < n; i ++)
    {
    	cin >> x;
    	if(x == s)
    		k = l = 1;
    	if(x[1] == s[0])
    		l = 1;
    	if(x[0] == s[1])
    		k = 1;
    }
	puts(k + l < 2 ? "nO" : "Yes");
}
