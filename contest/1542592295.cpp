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
int main()
{
	int n,i,flag,p1,p2;
	char a[11],b[11];
	while(~scanf("%s",a))
	{
		scanf("%d",&n);
		flag=p1=p2=0;
		for(i=0;i<n;i++)
		{
			scanf("%s",b);
			if(strcmp(a,b)==0) flag=1;
			if(b[0]==a[1]) p1=1;
			if(b[1]==a[0]) p2=1;
		}
		if(flag||p1+p2==2) puts("YES");
		else puts("NO");
	}
	return 0;
}