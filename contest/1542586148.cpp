#include <bits/stdc++.h>

using namespace std;
#define pii pair<int,int>
#define vi vector<int>
#define pb push_back
#define mp make_pair
#define x first
#define y second
#define rep(i,a,b) for(int i=a;i<b;i++)
#define per(i,a,b) for(int i=b-1;i>=a;i--)
#define DBG(x) cerr<<(#x)<<"="<<x<<"\n";
#define inf 1000000007
#define mod 1000000007
#define ll long long 
#define N 100010

template<class T,class U> void Max(T &a,U b){if(a<b)a=b;}
template<class T,class U> void Min(T &a,U b){if(a>b)a=b;}
template<class T,class U> void add(T &a,U b){a+=b;if(a>=mod)a-=mod;}


void cal(int &x){
	x*=5;
	if(x==60)x=0;
}
int t1,t2;
bool out(double &t){
	if(t<t1||t>t2)return 1;
	return 0;
}
bool in(double &t){
	if(t>t1&&t<=t2)return 1;
	return 0;
}
int main(){
	//freopen("A.in","r",stdin);
	//freopen("A.out","w",stdout);
	int i,j,k,ca=0,n,T,m=0;
	int h,s;
	scanf("%d%d%d%d%d",&h,&m,&s,&t1,&t2);
	cal(t1),cal(t2),cal(h);
	double h1=h,m1=m,s1=s;
	if(t1>t2)swap(t1,t2);
	if(m||s)h1+=0.5;
	if(s)m1+=0.5;
	if(out(h1)&&out(m1)&&out(s1))puts("YES");
	else if(in(h1)&&in(m1)&&in(s1))puts("YES");
	else puts("NO");
	return 0;
}