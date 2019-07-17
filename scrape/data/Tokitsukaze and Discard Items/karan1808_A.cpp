#include<bits/stdc++.h>
#include<ratio>
#include <set> 
#include <iterator>
using namespace std;
#define ll long long
#define VV vector
#define pb push_back
#define bitc  __builtin_popcountl
#define m_p make_pair
#define forstl(i,v) for(auto &i: v)
#define forn(i,e) for(int i=0;i<e;++i)
#define endl '\n'
#define inf 200000000000000
#define MAXN 1000001
#define eps 0.0000000001
#define int long long
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);
#define rep(i,a,b)    for(ll int i=a;i<b;i++)
# define my_sizeof(type) ((char *)(&type+1)-(char*)(&type))
string char_to_str(char c){string tem(1,c);return tem;}
#define ll long long
using namespace std;
#define S second
#define F first
ll MOD=1e9+7;

long long StringToInteger(string NumberAsString)
{
  long long NumberAsInteger;
  stringstream ss;
  ss << NumberAsString;
  ss >> NumberAsInteger;
  return NumberAsInteger;
}
int gcd(int a, int b) 
{ 
    if (b == 0) 
        return a; 
    return gcd(b, a % b);  
      
}
 int32_t main()
{
   ios::sync_with_stdio(false); cin.tie(NULL); cout.precision(16);
    #ifndef ONLINE_JUDGE
    // for getting input from input.txt  
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
    #endif
int n,m,k;
cin>>n>>m>>k;
int p[m];
for (int i = 0; i < m; ++i)
{
  cin>>p[i];
}
int nd=0;
int ck=k;
int pi=0;
int res=0;
while(pi<m){
  int adn=0;
while(p[pi]-nd<=ck&&pi<m){
adn++;
pi++;
}
if(adn==0){
int y=((p[pi]-nd)-ck)/k;
if(((p[pi]-nd)-ck)%k==0){}else{
y=y+1;}
//cout<<y<<endl;
  ck+=y*k;}else{nd+=adn;res++;}
}

cout<<res<<endl;

      return 0;
}