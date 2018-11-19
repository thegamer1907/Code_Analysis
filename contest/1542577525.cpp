#include <bits/stdc++.h>
using namespace std;

#define   f(i,n) 					for(i=0;i<(n);i++)
#define   ff(i,n) 					for( i=1;i<=(n);i++)
#define   m0(X) 					memset((X), 0, sizeof((X)))
#define   m1(X) 					memset((X), -1, sizeof((X)))
#define   pb(x) 					push_back(x)
#define   F     					first
#define   S  						second
#define   MP 						make_pair
#define   inf						(1LL << 60LL)
#define	  debug1(x)                	cerr << #x << "= " << x << endl;
#define   debug2(x, y)             	cerr << #x << "= " << x << " | " << #y << "= " << y << endl;
#define   debug3(x, y, z)          	cerr << #x << "= " << x << " | " << #y << "= " << y << " | " << #z << "= " << z << endl;
#define   debug4(a, b, c, d)       	cerr << #a << "= " << a << " | " << #b << "= " << b << " | " << #c << "= " << c << " | " << #d << "= " << d << endl;
#define   debug5(a, b, c, d, x)     cerr << #a << "= " << a << " | " << #b << "= " << b << " | " << #c << "= " << c << " | " << #d << "= " << d << " | "<< #x << "= " << x << endl;

typedef long long ll;

void rd(ll &x){scanf("%lld",&x);}
void rd(ll &x,ll &y){scanf("%lld%lld",&x,&y);}
void rd(ll &x,ll &y,ll &z){scanf("%lld%lld%lld",&x,&y,&z);}
void rd(ll &x,ll &y,ll &z,ll &s){scanf("%lld%lld%lld%lld",&x,&y,&z,&s);}

/*
5 3
1 0 1
1 1 0
1 0 0
1 0 0
1 0 0
*/

ll n, k;
map <ll,ll> mp;

void Y(){
	cout<<"YES";
	exit(0);
}
void N(){
	cout<<"NO";
	exit(0);
}

int main()
{
	ll i, m, x, y, u, v;
	rd(n,k);
	f(i,n){
		if(k==1){
			rd(x);
			mp[x]++;
		}
		else if(k==2){
			rd(x,y);
			m=x*10+y;
			mp[m]++;
		}
		else if(k==3){
			rd(x,y,u);
			m=100*x+10*y+u;
			mp[m]++;
		}
		else{
			rd(x,y,u,v);
			m=1000*x+100*y+10*u+v;
			mp[m]++;
		}
	}
	if(k==1){
		if(mp[0]!=0) Y();
		else N();
	}
	if(k==2){
		if(mp[0]!=0) Y();
		if(mp[1]>0 && mp[10]>0) Y();
		N();
	}
	if(k==3){
		if(mp[0]!=0) Y();
		bool a=(mp[1]>0), b=(mp[10]>0), c=(mp[100]>0);
		if(a+b+c>=2) Y();
		if(a && mp[110]>0) Y();
		if(b && mp[101]>0) Y();
		if(c && mp[11]>0) Y();
		N();
	}
	if(mp[0]!=0) Y();
	bool a=(mp[1]>0), b=(mp[10]>0), c=(mp[100]>0), d=(mp[1000]>0);
	if(a+b+c+d>=2) Y();
	bool q11=(mp[11]>0), q110=(mp[110]>0), q1100=(mp[1100]>0), q1001=(mp[1001]>0);
	bool q101=(mp[101]>0), q1010=(mp[1010]>0);
	if((q11+q1100==2) || (q110+q1001==2) || (q1010+q101==2)) Y();
	if(q11+q110+q1100+q1001==4) Y();
	if(q110+q1001+q1010+q101==4) Y();
	if(a && (q110 || q1100 || q1010 || mp[1110]>0)) Y();
	if(b && (q1100 || q1001 || q101 || mp[1101]>0)) Y();
	if(c && (q1010 || q1001 || q11 || mp[1011]>0)) Y();
	if(d && (q110 || q11 || q101 || mp[111]>0)) Y();
	N();
	
	
	return 0;
}
















