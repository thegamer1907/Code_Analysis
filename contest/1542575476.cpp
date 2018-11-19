#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> pii;
typedef vector<int> vi;
typedef vector<char> vc;
typedef vector<ll> vl;
typedef queue<int> qi;
typedef queue<ll> ql;
typedef pair<ll,ll> pll;
typedef pair<int,ll> pil;
typedef pair<ll,int> pli;
#define pq priority_queue
#define rep(i,n) for (int i=0;i<n;++i)
#define mp make_pair
#define pb push_back
#define pf push_front
#define F first
#define S second
#define INF 2000000009
float a,b,c,x,y;
bool f=1;
int main()
{
    ios::sync_with_stdio(false);
    cin>>a>>b>>c>>x>>y;
    if (!(b==0&&c==0)) a+=0.1;
    if (a>12) a-=12;
    if (!(c==0)) b+=0.5;
    b=b/5;
    c=c/5;
    if (a==0) a=12;
    if (b==0) b=12;
    if (c==0) c=12;
    float xx=x;
    while (xx!=y){
    	if (xx>=12) xx-=12;
    	if (xx+1==y){
    		if ((a>xx&&a<xx+1)||(b>xx&&b<xx+1)||(c>xx&&c<xx+1)) f=0;
    		break;
    	}
    	if ((a>xx&&a<=xx+1)||(b>xx&&b<=xx+1)||(c>xx&&c<=xx+1)) f=0;
    	xx++;
    }
    if (f){
    	cout<<"YES";
    	return 0;
    }
    f=1;
    xx=x;
    if (y==12) y=0; 
    if (a==12) a=0;
    if (b==12) b=0;
    if (c==12) c=0;
    while(xx!=y){
    	if (xx<=0) xx+=12;
    	if (xx-1==y){
    		if ((a<xx&&a>xx-1)||(b<xx&&b>xx-1)||(c<xx&&c>xx-1)) f=0;
    		break;
    	}
    	if ((a<xx&&a>=xx-1)||(b<xx&&b>=xx-1)||(c<xx&&c>=xx-1)) f=0;
    	xx--;
    }
    if (f) cout<<"YES";
    else cout<<"NO";
}