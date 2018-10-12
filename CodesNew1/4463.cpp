#include <iostream>
#include <fstream>
#include <cstring>
#include <sstream>
#include <algorithm>
#include <cmath>
#include <iomanip>
#include <vector>
#include <stack>
#include <queue>
#include <deque>
#include <map>
#include <set>
#include <iterator>
#include <ext/pb_ds/assoc_container.hpp>

#define x first
#define y second
#define mp make_pair
#define up_b upper_bound
#define low_b lower_bound
#define bit __builtin_popcount
#define all(x) x.begin(),x.end()

using namespace std;
using namespace __gnu_pbds;

typedef long long ll;
typedef long double ld;
typedef pair<ll,ll> pll;
typedef pair<int,int> pii;
typedef tree<int,null_type,less<int>,rb_tree_tag,tree_order_statistics_node_update> indexed_set;

const ll INF=1e18+123;
const ld EPS=1e-9;
const int inf=1e9+123;
const int MOD=1e9+7;
const int N=5e5+123;
const int dx[]={0,0,1,-1};
const int dy[]={1,-1,0,0};

string s[N];

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>s[i];
	}
	for(int i=n-1;i;i--){
		if(s[i+1]>=s[i]){
			continue;
		}
		string t="#";
		for(int j=1;j<min(s[i+1].size(),s[i].size());j++){
			if(s[i][j]>s[i+1][j]){
				break;
			}
			t+=s[i][j];
		}
		s[i]=t;
	}
	for(int i=1;i<=n;i++){
		cout<<s[i]<<endl;
	}
	return 0;
}