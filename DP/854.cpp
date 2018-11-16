#include<bits/stdc++.h>
#define BOOST ios_base::sync_with_stdio(false); cin.tie(NULL);
#define rep(i,a,b) for(ll i=a; i<=b; i++)
#define repp(i,a,b) for(int i=a; i>=b; i--)
#define nrep(i,a,b,c) for(int i=a; i<=b; i+=c)
#define pb push_back
#define eb emplace_back
#define ff first
#define ss second
#define watch(x) cout<<"(DEBUG) "<< (#x) <<" is "<<(x)<<'\n';
#define gettime printf("(TIME) : %0.3lf\n",clock()*1.0/CLOCKS_PER_SEC);
using namespace std;
typedef long long int ll;
typedef unsigned long long int ull;
typedef double ld;
typedef pair<int, int> pii;
typedef pair<int, pii> piii;
typedef vector<int> vi;
typedef pair<char, pii> cii;
typedef pair<int, ull> pui;
const double pi=2*acos(0.0);
const char digit[]={'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
const int dy[]={0, -1, 0, 1};
const int dx[]={-1, 0, 1, 0};

	int n;
	int x[105]={}, y[105]={};
int f(int l, int r){
	rep (i, l, r){
		if (x[i]==1) x[i]=0;
		else x[i]=1;
	}
	int ret=0;
	rep (i, 0, n-1){
		if (x[i]==1) ret++;
	}
	return ret;
}
void restore(){
	rep (i, 0, n-1){
		x[i]=y[i];
	}
}
int main(){ 
	cin>>n;
	rep (i, 0, n-1){
		cin>>x[i];
		y[i]=x[i];
	}
	int ans=-1e9;
	rep (i, 0, n-1){
		rep (j, i, n-1){
			int tmp=f(i, j);
			restore();
			ans=max(ans, tmp);
		}
	}
	cout<<ans<<'\n';
	return 0;
}   
