// #pragma GCC optimize("unroll-loops")
#include <bits/stdc++.h>
#include <ext/pb_ds/tree_policy.hpp>
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
using namespace std;
 
#define pb 		    push_back
#define PI 	        3.1415926535897932384626433832795l
#define F           first
#define S           second
#define mp          make_pair  
#define INF         1000000000
#define MOD         1000000007
//#define find_by_order fbo //indexing of set
//#define order_of_key ook //no. of elements less than  x

const int dx4[] =       {-1, 0, 1, 0};
const int dy4[] =       { 0, 1, 0,-1};
const int dx8[] =       {-1, 0, 1, 0, -1,-1, 1, 1};
const int dy8[] =       { 0, 1, 0,-1, -1, 1,-1, 1};
const int dxhorse[] =   {-2, -2, -1, -1, 1, 1, 2, 2};
const int dyhorse[] =   {1,  -1, 2 , -2, 2,-2, 1,-1};
const int dx6[] =       {1, -1, 0, 0, 0, 0};
const int dy6[] =       {0, 0, 1, -1, 0, 0};
const int dz6[] =       {0, 0, 0, 0, 1, -1};

typedef long long                           ll;
typedef vector < int >                      vi;
typedef vector < ll >                       vll;
typedef vector < pair < ll, ll > >          vpll;
typedef pair < ll, ll >                     pll;
typedef vector < pair < int, int > >        vpii;
typedef pair < int, int >                   pii;
typedef pair < int , pair < int, int > >    pipii;
typedef pair < pair < int, int >, int >     ppiii;
typedef vector < string >                   vs; 
template <typename T>
using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
//#define int ll

void solve(vi &a, multiset <int>&ms, int n)
{
	sort(a.begin(), a.end());
	int ans = 0;
    //cout << ms.count(4) <<"\n";    
        
	for(int i = 0; i < n; i++)
	{
		auto x = ms.find(a[i] - 1);
		//cout << a[i] <<" "<< a[i] <<"\n";

		if(x != ms.end())
		{
			ms.erase(x);
			ans++;
		//	cout << 1 << a[i] <<"\n";
			continue;
		}

		x = ms.find(a[i]);

		if(x != ms.end())
		{
			ms.erase(x);
			ans++;
	//		cout << 2 << a[i] <<"\n";	
			continue;
		}

		x = ms.find(a[i] + 1);

		if(x != ms.end())
		{
			ms.erase(x);
			ans++;
	//		cout << 3 << a[i] <<"\n";	
			continue;
		}
	}

	cout << ans <<"\n";
}

int main()
{
	ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    int n;
    cin >> n;
    vi a(n);

    for(int i = 0; i < n; i++)
    	cin >> a[i];

    int m;
    cin >> m;
    multiset <int> ms;
    int temp;

    for(int i = 0; i < m; i++)
    {
    	cin >> temp;
    	ms.insert(temp);
    }

    solve(a, ms, n);
    return 0;
}
