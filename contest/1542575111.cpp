//Prashant Tyagi
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
#define MOD                            98765431
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

int main ()
{
	//freopen("input.txt","r",stdin);
	//freopen("output.txt","w",stdout);
	string S;cin>>S;
	int n;cin>>n;
	bool flag1=false;
	bool flag2=false;
	bool flag=false;
	while(n--){
		string S1;cin>>S1;
		if(S.compare(S1)==0)flag=true;
		if(S1[1]==S[0])flag1=true;
		if(S1[0]==S[1])flag2=true;
		// TR(flag1,flag2);
	}
	// TR(flag1,flag2);
	if(flag==true||(flag1==true&&flag2==true))cout<<"YES"<<endl;
	else cout<<"NO"<<endl;
	return 0;
}