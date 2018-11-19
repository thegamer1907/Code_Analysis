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
int n;
int main(){
	string s;
	cin>>s;
	cin>>n;
	bool a=0,b=0;
	for(int i=1;i<=n;i++){
		string t;
		cin>>t;
		if(t==s){
			cout<<"yES"<<endl;
			return 0;
		}
		if(t[0]==s[1])a=1;
		if(t[1]==s[0])b=1;
	}
	if(a&&b)cout<<"yES"<<endl;
	else cout<<"nO"<<endl;
	return 0;
}