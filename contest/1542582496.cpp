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

int n;
bool a,b;
char x,y,c1,c2;

int main(){
	cin>>x>>y;
	cin>>n;
	for (int i=0;i<n;i++){
		cin>>c1>>c2;
		if (c1==x && c2==y){
			cout<<"YES";
			return 0;
		}
		if (c1==y){
			a=1;
		}
		if (c2==x){
			b=1;
		}
	}
	cout<<(a+b==2?"YES":"NO");
	return 0;
}
