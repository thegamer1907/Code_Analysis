/*
Hansta rehta hu tujhse mil kar kyu aajkal
Badle badle hain mere tevar kyun aajkal
Aankhein meri har jagah
Dhoondhe tujhe bewajah
Ye main hoon ya koi aur hai meri tarah

Kaise hua, kaise hua
Tu itna zaroori kaise hua
Kaise hua, kaise hua
Tu itna zaroori kaise hua

Main baarish ki boli samajhta nahi tha
Hawaaon se main yun ulajhta nahi tha
Hai seene mein dil bhi
Kahaan thi mujhe ye khabar

Kahin pe hon raatein
Kahin pe savere
Awaargi hi rahi saath mere
Thehar ja, thehar ja
Ye kehti hai teri nazar

Kya haal ho gaya hai ye mera
Aankhein meri har jagah
Dhoondhe tujhe bewajah
Ye main hoon ya koi aur hai meri tarah

Kaise hua, kaise hua
Tu itna zaroori kaise hua
Kaise hua, kaise hua
Tu itna zaroori kaise hua
Kaise hua, kaise hua
Tu itna zaroori kaise hua

Mmmm mmmm...
*/

//#pragma GCC optimize("Ofast")
//#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")

#include <bits/stdc++.h>

#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;

#define fi first
#define se second
#define pb push_back
#define mp make_pair
#define foreach(it, v) for(auto it=(v).begin(); it != (v).end(); ++it)
#define gcd(a,b) __gcd(a,b)

#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define filewr() freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);

#define tr(...) cout<<__FUNCTION__<<' '<<__LINE__<<" = ";trace(#__VA_ARGS__, __VA_ARGS__)

using namespace std;

typedef long long ll;
typedef long double ld;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;

template<typename S, typename T> 
ostream& operator<<(ostream& out,pair<S,T> const& p){out<<'('<<p.fi<<", "<<p.se<<')';return out;}

template<typename T>
ostream& operator<<(ostream& out,vector<T> const& v){
int l=v.size();for(int i=0;i<l-1;i++)out<<v[i]<<' ';if(l>0)out<<v[l-1];return out;}

template<typename T>
void trace(const char* name, T&& arg1){cout<<name<<" : "<<arg1<<endl;}

template<typename T, typename... Args>
void trace(const char* names, T&& arg1, Args&&... args){
const char* comma = strchr(names + 1, ',');cout.write(names, comma-names)<<" : "<<arg1<<" | ";trace(comma+1,args...);}

const ld PI = 3.1415926535897932384626433832795;

typedef tree<int, null_type, less<int>, rb_tree_tag,tree_order_statistics_node_update> indexed_set;  // find_by_order() , order_of_key()


int main(){ 
	fastio();
	ll n,m,k;
	cin >> n >> m >> k;

	ll p[m];
	for(int i=0;i<m;i++)cin >> p[i];

	ll ans = 0;

	ll spcnt = 0;

	ll j = k;

	ll totsp = 0;

	for(int i=0;i<m;i++){
		//tr(i,p[i],j);
		if(p[i]<=j){
			spcnt++;
			totsp++;
		}

		else{
		//	tr(i,p[i],spcnt,j);
			if(spcnt==0){
				j +=  ((ll)((p[i]-j)/k))*k + (((p[i]-j)%k==0) ? 0LL : k);
				i--;
				continue;
			}

			ans++;
			j = j + spcnt;
			spcnt = 0;
			i--;
		}
	}

	if(spcnt!=0)ans++;

	cout << ans << endl;
	
	return 0;
}