// UTRECHT UNIVERSITY
#include<bits/stdc++.h>
using namespace std;

#define x first
#define y second
#define pb push_back
#define eb emplace_back
#define mp make_pair
#define rep(i,a,b) for(auto i = (a); i != (b); ++i)
#define all(v) (v).begin(), (v).end()

typedef long long ll;
typedef long double ld;
typedef pair<ll, ll> ii;
typedef vector<int> vi;
typedef vector<vi> vvi;

const int INF = 2147483647;
const ld PI = acos(-1.0);

int H,M,S,T1,T2;
bool blocked[12];

void run(){
	cin>>H>>M>>S>>T1>>T2;
	fill_n(blocked, 12, false);
	blocked[H%12]=true;
	blocked[(M/5)]=true;
	blocked[(S/5)]=true;
	T1%=12;
	T2%=12;
	//walk right
	while(!blocked[T1]){
		//cerr<<" T1"<<T1;
		T1=(T1+1)%12;
		if(T1==T2){
			cout<<"YES"<<endl;
			return;
		}
	}
	//walk left
	while(!blocked[(T1+11)%12]){
		T1=(T1+11)%12;
		if(T1==T2){
			cout<<"YES"<<endl;
			return;
		}
	}
	cout<<"NO"<<endl;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	run();

	return 0;
}
