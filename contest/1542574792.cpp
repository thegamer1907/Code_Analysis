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
int n, k;
int a[25];
int main()
{
    //~ freopen("file.in", "r", stdin);
    scanf("%d%d", &n, &k);
    for(int i = 0; i < n; i ++)
    {
    	int q = 0;
    	for(int j = 0; j < k; j ++)
    	{
    		int t;
	    	scanf("%d", &t);
	    	q += (t << j);	    	
		}
		if(!q)
			return cout << "YEs", 0;
		a[q] ++;
	}
	for(int i = 0; i < (1 << k); i ++)
		for(int j = 0; j < (1 << k); j ++)
		{
			if(i & j)
				continue;
			if(a[i] && a[j])
				return cout << "YeS", 0;
		}
	puts("nO");
}
