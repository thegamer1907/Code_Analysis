#include <bits/stdc++.h>
using namespace std;

/**************TEMPLATE****************************************/
#define ll long long
#define F first
#define S second
#define mod 1000000007
#define ln length()
#define pb push_back
#define input(a,n)      for(long long int c=0;c<n;cin>>a[c++]);
// // #define output(vec,x)   for(long long int c=0;c<a.size();x<<a[c++]<<',');x<<endl;
/**************************************************************/

int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
	ll n,i,j,m,x,y,p,c=0,z=-1,sum=0;
	cin>>n>>m;
	int visited[10010]={0};
	std::queue<pair<ll,ll>>q ;
	pair<ll,ll>a;
	a.F=n;
	a.S=0;
	q.push(a);
	while((q.front()).F!=m){
	   // cout<<(q.front()).F<<endl;
    	a.F=2*((q.front()).F);
    	a.S=((q.front()).S)+1;
    // 	cout<<visited[a.F];
	    if(a.F>0 &&  a.F<10010  && visited[(a.F)]==0){
	        q.push(a);
	        visited[(a.F)]=1;
	    }
	    a.F=((q.front()).F)-1;
    	a.S=((q.front()).S)+1;
	    if(a.F>0 &&  a.F<10010  && visited[(a.F)]==0){
	        q.push(a);
	        visited[(a.F)]=1;
	    }
	    q.pop();
	}
	cout<<(q.front()).S;
	return 0;
}