#include<bits/stdc++.h>
using namespace std;

#define pii pair<int,int>
#define se second
#define fi first
#define pb push_back
#define pob pop_back()
#define pf push_front
#define pof pop_front()
#define mp make_pair
//#define endl '\n'
#define fast ios::sync_with_stdio(false),cin.tie(0),cout.tie(0)
#define ll long long
const ll INF=2e9;
const int maxn=1000000+100;
const int mod=1e9+7;

int f[maxn];
string a;
void print(int x){
	for(int i=0;i<x;i++)
		cout<<a[i];
}

		       

int main(){
//	string a;
	fast;
	cin>>a;
	int cur=0;
	for(int i=1;i<a.size();i++){
		char x=a[i];
		while(cur && a[cur]!=x)
			cur=f[cur];
		cur+=(x==a[cur]);
		f[i+1]=cur;
		//cerr<<f[i]<<' ';
	}
	//for(int i=1;i<=a.size();i++)
	//	cout << f[i] << '\n';

	if(f[a.size()]==0){
		cout<<"Just a legend";
		return 0;
	}
	cur=0;
	int x=f[a.size()];
	for(int i=1;i<a.size()-1;i++){
		while(cur && a[cur]!=a[i])
			cur=f[cur];
		cur+=(a[cur]==a[i]);
		if(cur==x){
			print(f[a.size()]);
			return 0;
		}
	}
	if(f[f[a.size()]])
		print(f[f[a.size()]]);
	else
		cout<<"Just a legend";
}

