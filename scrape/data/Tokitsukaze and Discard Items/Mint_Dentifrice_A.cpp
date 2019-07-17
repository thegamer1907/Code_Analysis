#include <bits/stdc++.h>
using namespace std;
typedef long long llint;
#define fir first
#define sec second
#define len(v) (int)(v).size()
#ifdef LOCAL
string to_string(string v){return "\""+v+"\"";}string to_string(char v){return "\'"+string(1,v)+"\'";}string to_string(bool v){return(v?"true":"false");}template<typename A,typename B>string to_string(pair<A,B>v){return"("+to_string(v.first)+", "+to_string(v.second)+")";}string to_string(vector<bool>v){bool f=true;string res="{";for(const auto &i:v){if(!f)res+=", ";f=false;res+=to_string(i);}res+="}";return res;}template<typename A>string to_string(A v){bool f=true;string res="{";for(const auto &i:v){if(!f)res+=", ";f=false;res+=to_string(i);}res+="}";return res;}template<typename Iter>string to_string(Iter beg,Iter end){bool f=true;string res="{";for(;beg!=end;beg++){if(!f)res+=", ";f=false;res+=to_string(*beg);}res+="}";return res;}
#define watch(v) cerr<<"["<< __func__<<":"<<__LINE__<<"]: "#v" = "<<to_string(v)<<"\n"
#define watchsl(v,f,l) cerr<<"["<< __func__<<":"<<__LINE__<<"]: "#v"["<<to_string(f)<<".."<<to_string(l)<<"] = {";for(auto ITE=f;ITE<l;ITE++)cerr<<to_string(v[ITE])<<", ";cerr<<to_string(v[l])<<"}\n"
#define SEP cerr<<"-----------------------------------\n\n"
#define SEP2 cerr<<"===================================\n\n"
#else
#define watch(v) ;
#define watchsl(v,f,l) ;
#define SEP ;
#define SEP2 ;
#endif
const int LEN = (int)1e5;

llint n, m, k;
llint a[LEN], beg;

llint e;
llint ans;

int main()
{
#ifdef LOCAL
	freopen("input.txt", "rt", stdin); freopen("output.txt", "wt", stdout);
#endif
	ios_base::sync_with_stdio(false); cin.tie(nullptr);
	cin >> n >> m >> k;
	for (int i = 0; i < m; i++)
		cin >> a[i];
	sort(a, a+m);
	e = k;
	while (beg < m)
	{
		watch(beg);
		watch(a[beg]);
		watch(e);
		llint b = beg;
		while (b < m && e >= a[b]) b++;
		if (b - beg > 0)
		{
			e += b - beg;
			beg = b;
			ans++;
		} else
		{
			e += (((a[beg] - e) / k) + ((a[beg] - e) % k > 0)) * k;
		}
	}
	cout << ans << "\n";
	return 0;
}