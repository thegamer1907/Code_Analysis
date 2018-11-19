#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <algorithm>
#include <set>
#include <map>
#include <cmath>
#include <cstring>
#include <ctime>
#include <unordered_map>
#include <iomanip>
using namespace std;

#define fi first
#define se second
#define pb push_back
#define all(v) (v).begin(),(v).end()

typedef long long ll;
typedef long double ld;
typedef vector<int> vi;
typedef pair<int,int> pii;

template<class T> ostream& operator<<(ostream& stream, const vector<T> v){ stream << "["; for (int i=0; i<(int)v.size(); i++) cout << v[i] << " "; stream << "]"; return stream; }
ll fpow(ll x, ll p, ll m){ll r=1; for (;p;p>>=1){ if (p&1) r=r*x%m; x=x*x%m; } return r;}
int gcd(int a, int b){ if (!b) return a; return gcd(b,a%b);}
ll gcd(ll a, ll b){ if (!b) return a; return gcd(b,a%b);}

const int maxv=(1<<15);

struct elem{
	string b,e;
	bool v[maxv+20];
	int ans=0;
};

int N,M;
elem a[210];

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> N;
	
	int i,k,j; string s;
	for (k=1; k<=N; k++){
		cin >> s;
		
		int i,j,L=s.length();
		for (i=0; i<L; i++){
			ll val=0;
			for (j=i; j<L && j-i+1<=14; j++){
				val=val*2+(s[j]-'0'+1);
				a[k].v[val]=1;
			}
		}
		
		a[k].b=s.substr(0,14);
		a[k].e=s.substr(max(0,L-14),14);
		
	
	}
	
	cin >> M;
	for (k=1; k<=M; k++){
		int x,y;
		cin >> x >> y;
		
		string cr=a[x].e+a[y].b;
		
		int id=N+k;
		for (i=0; i<maxv; i++)
			a[id].v[i]=a[x].v[i]|a[y].v[i];
			
		int L=cr.length();
		for (i=0; i<L; i++){
			ll val=0;
			for (j=i; j<L && j-i+1<=14; j++){
				val=val*2+(cr[j]-'0'+1);
				a[id].v[val]=1;
			}
		}
		
		
		int l;
		for (l=max(a[x].ans,a[y].ans)+1; l<=14; l++){
			bool br=0;
			for (i=(1<<l)-1; i<(1<<(l+1))-1; i++)
				if (!a[id].v[i]){
					br=1;
					break;
				}
				
			if (br) break;
		}
		
		cout << l-1 << "\n";
		a[id].ans=l-1;
		
		a[id].b=a[x].b+a[y].b;
		a[id].b=a[id].b.substr(0,14);
		
		a[id].e=a[x].e+a[y].e;
		a[id].e=a[id].e.substr(max(0,(int)a[id].e.length()-14),14);
	}
	
	return 0;
}
