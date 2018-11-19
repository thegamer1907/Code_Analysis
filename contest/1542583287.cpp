#include <bits/stdc++.h>
#define mem(a,b) memset((a),(b),sizeof(a))
#define MP make_pair
#define pb push_back
#define fi first
#define se second
#define sz(x) x.size()
#define all(x) x.begin(),x.end()
using namespace std;
#define  _GLIBCXX_PERMIT_BACKWARD_HASH
#include <ext/hash_map>
using namespace __gnu_cxx;
struct str_hash{size_t operator()(const string& str)const{return __stl_hash_string(str.c_str());}};
typedef long long ll;
const int INF=0x3f3f3f3f;
const ll LLINF=0x3f3f3f3f3f3f3f3f;
const double PI=acos(-1.0);
const double eps=1e-6;
const int MAX=1e5+10;
const ll mod=1e9+7;
int sgn(double x)
{  
	if(fabs(x)<eps) return 0;
	else return x>0?1:-1;  
}
int main()
{
	double a,b,c,l,r;
	while(~scanf("%lf%lf%lf%lf%lf",&a,&b,&c,&l,&r))
	{
		a=a+(b*60+c)/3600;
		if(a>12) a-=12;
		b=(b*60+c)/60/5;
		c/=5;
		if(l>r) swap(l,r);
	//	cout<<a<<" "<<b<<" "<<c<<" "<<l<<" "<<r<<endl;
		if(sgn(a-l)==0||sgn(a-r)==0||sgn(b-l)==0||sgn(b-r)==0||sgn(c-l)==0||sgn(c-r)==0)
		{
			puts("NO");
			continue;
		}
		if(sgn(a-l)>0&&sgn(b-l)>0&&sgn(c-l)>0&&sgn(r-a)>0&&sgn(r-b)>0&&sgn(r-c)>0) puts("YES");
		else if((sgn(a-l)>0&&sgn(r-a)>0)||(sgn(b-l)>0&&sgn(r-b)>0)||(sgn(c-l)>0&&sgn(r-c)>0)) puts("NO");
		else puts("YES");
	} 
	return 0;
}
/*
12 30 45 3 11
12 0 1 12 1
3 47 0 4 9
*/