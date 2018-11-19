// Author - Saurabh 
#include <bits/stdc++.h>
using namespace std;
#define F first
#define S second
#define ii pair<int,int>
#define pb push_back
#define mkp make_pair
#define ll long long int
#define for0(i,a,n) for(int i=a;i<n;i++)
#define for1(i,a,n) for(int i=a;i<=n;i++)
#define fio ios::sync_with_stdio(false), cin.tie(0), cout.tie(0)
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define ms(a,val) memset(a,val,sizeof(a))
#define SET(p) memset(p, -1, sizeof(p))
#define CLR(p) memset(p, 0, sizeof(p))
#define sz(a) int((a).size())
#define mod 1000000007

const int INF = 0x3f3f3f3f;
const double EPS = 1e-10;
const int MAX = 100005;

int e[MAX]; 

int main()
{
	string psd;
	cin>>psd;
	int n;
	cin>>n;
	vector<string> v;
	for(int i=0;i<n;i++){
		string s;
		cin>>s;
		v.pb(s);
	}
	for(int i=0;i<v.size();i++){
		for(int j=0;j<v.size();j++){
			string temp = v[i] + v[j];
			if(temp.find(psd)!=-1){cout<<"YES"<<endl; return 0;}
		}
	}
	cout<<"NO"<<endl;
	return 0;
}