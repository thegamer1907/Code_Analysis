#include <bits/stdc++.h>
using namespace std;
// for( auto i :Templatename) // use dot notation
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef pair<int,int> ii;
typedef pair<int,ii> iii;
typedef vector<ii> vii;
typedef vector<vii> vvii;
typedef vector< iii > viii;
typedef long long ll;
typedef vector<ll> vll;
typedef vector<bool> vb;

#define PQ priority_queue
#define eb emplace_back
#define pb push_back
#define eps 10e-6
#define PI 3.14159265359
#define MOD 1000000007
#define INF MOD
#define fi first
#define se second
#define FOR(i,n) for(int i=0;i<n;i++)
#define scani(n) scanf("%d",&n)
#define seti(a,n) memset(a,n,sizeof(a))
#define set0(a) memset(a,0,sizeof(a))

struct node{
	int n;
	int at;
};
bool operator<(node a, node b){
	//for ascending use ' > '
	return a.at > b.at;
}
//global variable
int n[3],p[3],rec[3]={0,0,0};
ll money;
map<char,int> id({{'B',0},{'S',1},{'C',2}});
string s;
//global end

void preprocess(){
	id['B']=0;
	id['S']=1;
	id['C']=2;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.precision(17);
	//preprocess();

	cin>>s;
	FOR(i,3)
		cin>>n[i];
	FOR(i,3)
		cin>>p[i];
	cin>>money;
	for(auto i:s)
		rec[id[i]]++;
	ll l=0,r= (ll)1e12 + 10000000 ;
	while(l<r){
		ll mid = l + (r-l+1)/2;
		ll need[3]={max(0LL,rec[0]*mid - n[0])*p[0],
					max(0LL,rec[1]*mid - n[1])*p[1],
					max(0LL,rec[2]*mid - n[2])*p[2]};
		if(need[0]+need[1]+need[2]<= money)
			l=mid;
		else
			r=mid-1;
	}
	cout<<l;
	return 0;
}