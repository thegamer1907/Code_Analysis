#include <bits/stdc++.h>
using namespace std;

#define debug(x) cout<<#x<<"="<<x<<endl
#define RD(x) freopen((x),"r",stdin)
#define WT(x) freopen((x),"w",stdout)
#define pii pair<int,int>
#define PQ priority_queue
#define ll long long
#define pb push_back
#define mp make_pair
const int INF=0x7fffffff;

const int D=43200;

int a,b,h,m,s,x;

int main(){
	cin>>h>>m>>s>>a>>b;
	h*=43200/12;
	h+=60*m+s;
	h%=D;
	m*=43200/60;
	m+=s;
	s*=43200/60;
	a*=43200/12;
	b*=43200/12;
	a%=D;
	b%=D;
	x=a;
	while (x!=h && x!=m && x!=s){
		x=(x+1)%D;
		if (x==b){
			cout<<"YES";
			return 0;
		}
	}
	x=a;
	while (x!=h && x!=m && x!=s){
		x--;
		if (x<0) x+=D;
		if (x==b){
			cout<<"YES";
			return 0;
		}
	}
	cout<<"NO";
	return 0;
}
