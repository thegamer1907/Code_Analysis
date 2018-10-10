//Prashant Tyagi
//#pragma GCC optimize("O3")
using namespace std;
#include <bits/stdc++.h>
#define TRACE
#ifdef TRACE
#define TR(...) __f(#__VA_ARGS__, __VA_ARGS__)
template <typename Arg1>
void __f(const char* name, Arg1&& arg1){
  cerr << name << " : " << arg1 << std::endl;
}
template <typename Arg1, typename... Args>
void __f(const char* names, Arg1&& arg1, Args&&... args){
  const char* comma = strchr(names + 1, ',');cerr.write(names, comma - names) << " : " << arg1<<" | ";__f(comma+1, args...);
}
#else
#define TR(...)
#endif
typedef  long long                     LL;
typedef  vector < int >                VI;
typedef  pair< int, int >              II;
typedef  vector < II >                 VII;
#define SI(x)                          scanf ("%d", &x)
#define SLL(x)                         scanf ("%lld", &x)
#define PI(x)                          printf ("%d\n", x)
#define PLL(x)                         printf ("%lld\n", x)
#define PB                             push_back
#define MP                             make_pair
#define ALL(v)                         v.begin(), v.end()
#define VIF(x,V)                       for(int x:V)
#define FILL(a,b)                      memset(a,b,sizeof(a))
#define REP(i,j,n)                     for(int i=j;i<n;i++)
#define FLD(i,j,n)                     for(int i=n-1;i>=j;i--)
#define F                              first  
#define S                              second
#define fast_io                        ios_base::sync_with_stdio(false);cin.tie(NULL)
const int N = 1e6+1;
int F[N];
unordered_map<int,int> M;
void build_failure(string S)
{
	F[0] = 0;
	F[1] = 0;
	for(int i=2;i<=S.length();i++){
		int j=F[i-1];
		while(true){
			if(S[i-1]==S[j]){
				F[i] = j+1;
				break;
			}
			if(j==0){
				F[i] = 0;
				break;
			}
			j = F[j];
		}
		if(i!=S.length())M[F[i]];
	}
}
int main ()
{
	//freopen("input.txt","r",stdin);
	//freopen("output.txt","w",stdout);
	string S;cin>>S;
	build_failure(S);
	int ans=0;
	int j=F[S.length()];
	while(j>0){
		if(M.find(j)!=M.end()){
			ans = j;
			break;
		}
		j = F[j];
	}
	string ret;
	for(int i=0;i<ans;i++){
		ret+=S[i];
	}
	if(ret.length()>0) cout<<ret<<endl;
	else cout<<"Just a legend"<<endl;

	return 0;
}