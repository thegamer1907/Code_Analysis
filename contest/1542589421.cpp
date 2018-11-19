#include <cstdio> 
#include <iostream> 
#include <cmath> 
#include <string> 
#include <vector> 
#include <algorithm> 
#include <functional> 
#include <utility> 
#include <set> 
#include <map> 
#include <queue> 
#include <cstdlib> 
#include <ctime> 
#include <cstring> 
#include <cassert>
using namespace std;
typedef long long ll;
typedef pair<int,int> pii;
#define A first
#define B second
#define SIZE(x) ((int)(x.size()))
template<class T> T sqr(const T &x) { return x*x; }
template<class T> int popcount(const T &n) { return (n==0)?0:(1+popcount(n&(n-1))); }
template<class T> void ckmin(T &a,const T &b) { if (b<a) a=b; }
template<class T> void ckmax(T &a,const T &b) { if (b>a) a=b; }
int h,m,s,t1,t2;
int main(){
	cin>>h>>m>>s>>t1>>t2;
	if(h==12)h=0;
	h=3600*h+60*m+s;
	m=3600/5*m+60/5*s;
	s=3600*12/60*s;
	t1=3600*t1;
	t2=3600*t2;
	vector<pii> v;
	v.push_back({t1,0});
	v.push_back({t2,0});
	v.push_back({h,1});
	v.push_back({m,1});
	v.push_back({s,1});
	//cout<<h<<' '<<m<<' '<<s<<' '<<t1<<' '<<t2<<endl;
	sort(v.begin(),v.end());
	for(int i=1;i<SIZE(v);i++){
		if(!v[i].B){
			if(!v[i-1].B){
				cout<<"yES"<<endl;
				return 0;
			}
		}
	}
	if(!(v[0].B)&&(!(v.back().B))){
		cout<<"yES"<<endl;
		return 0;
	}
	cout<<"nO"<<endl;
	return 0;
}