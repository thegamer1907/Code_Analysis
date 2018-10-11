#include <iostream>
#include <algorithm>
#include <bitset>
#include <iterator>
#include <complex>
#include <deque>
#include <exception>
#include <fstream>
#include <sstream>
#include <limits>
#include <list>
#include <map>
#include <numeric>
#include <functional>
#include <ostream>
#include <queue>
#include <set>
#include <stack>
#include <string>
#include <vector>
#include <math.h>
#include <limits.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
typedef pair<int,int>pii;
typedef pair<ll,ll>pll;
typedef pair<double,double>pdd;
typedef vector<int> vi;
typedef vector<pii> vii;
typedef set<int> si;
typedef vector<ll>vl;

#define pb push_back
#define ff first
#define ss second
#define mp make_pair
#define FOR(i, a, b) for (int i=a; i<(b); i++)
#define FOR1(i, a) for (int i=0; i<(a); i++)
#define FORr(i,a,b) for (int i = (b)-1; i >= a; i--)
#define FOR1r(i,a) for (int i = (a)-1; i >= 0; i--)
#define all(x) x.begin(),x.end()
#define mset(a,v) memset(a,v,sizeof a)
#define EPS 1e-10
#define pi 3.1415926535897932384626433832795



int main(){
	// ios_base::sync_with_stdio(false);
	// cin.tie(NULL);
	int n;cin>>n;
	int a[n];
	FOR(i,0,n) cin>>a[i];
	int t[n];
	int mn=INT_MAX,mini=-1;
	FOR(i,0,n){
		t[i] = i+ (int) ceil(1.0*(a[i]-i)/n) * n;
		if(t[i]<mn) {
			mn = t[i];
			mini=i;
		}
	}	
	cout<<mini+1<<endl;

}















