#include<iostream>
#include<cctype>
#include<queue>
#include<cstdio>
#include<cmath>
#include<sstream>
#include<string>
#include<algorithm>
#include<cstring>
#include<vector>
#include<ctime>
#include<cstdlib>
#include<map>
#include<utility>
#include<iomanip>
#include<set>
#include<stack>
//#include<Windows.h>
using namespace std;
typedef long long ll;typedef pair<int,int> pii;
typedef pair<ll,ll> pll;typedef vector<string> vss;
typedef vector<int> vii;typedef vector<pii> vpi;
typedef vector<ll> vll;typedef vector<pll> vpl;
typedef unsigned long long ul;typedef queue<int> qii;typedef queue<pii> qpi;
string k,s[105],t;
int n,a[105],b[105],c[105],d[105],j,i;
int main()
{
	cin>>k>>n;
	for(i=0;i<n;i++) cin>>s[i];
	for(int tt=0;tt<n;tt++){
		t=s[tt];
		for(i=max(t.size(),k.size());i>0;i--){
		//	cout<<t.substr(0,i)<<'\n';
			if(k.substr(k.size()-i,i)==t.substr(0,i))
				c[tt]=max(c[tt],i);
			if(k.substr(0,i)==t.substr(t.size()-i,i))
				d[tt]=max(d[tt],i);
		}
	}
//	for(i=0;i<n;i++) cout<<s[i]<<' '<<a[i]<<' '<<b[i]<<' '<<c[i]<<' '<<d[i]<<'\n';
	for(i=0;i<n;i++)
		for(j=0;j<n;j++){
			if(c[j]+d[i]>=k.size()||c[i]+d[j]>=k.size()){
				puts("YES");
				return 0;
			}
		}
	puts("NO");
	return 0;
}
