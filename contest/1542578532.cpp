#include<bits/stdc++.h>
 
#define X first
#define Y second
#define eb push_back
#define pb pop_back
#define mp make_pair
#define siz(a) int(a.size())
//for traversing the container (bcoz we cannot access linked list etc with direct index)
//c stands for container and it for iterator
#define tr(c, it) \
		for(typeof(c.begin()) it=c.begin() ; it != c.end() ; it++)
		
#define all(c) c.begin(), c.end()
#define present(container, element) (container.find(element) != container.end()) //whether the element is present in the container
 
#define trace2(x, y)             cout <<#x<<": "<<x<<" | "<<#y<<": "<<y<< endl;
#define trace3(x, y, z)          cout <<#x<<": "<<x<<" | "<<#y<<": "<<y<<" | "<<#z<<": "<<z<<endl;
#define trace4(a, b, c, d)       cout <<#a<<": "<<a<<" | "<<#b<<": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<endl;
#define trace5(a, b, c, d, e)    cout <<#a<<": "<<a<<" | "<<#b<<": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<" | "<<#e<<": "<<e<<endl;
#define scan(x) scanf("%lld", &x)
#define print(x) printf("%lld", x)
#define pN printf("\n");
using namespace std;
 
typedef   long long int ll;
typedef unsigned long long int ull;
typedef vector < int > vi;
typedef vector < vi > vvi;
typedef vector < ll > vll;
typedef vector < vll > vvll;
typedef pair < int , int > ii;
const ll mod=1e9+7;
const ll mod2=1e9+9;
const ll maxn = 1e6+10;
const long long inf = 1e18 + 18;
double pie=3.1415926535;
//dont do silly mistake as always-
//1-read question properly(dont miss single line)
//2-check maximum array size	 
//3-int or long long int or ull or sort(a+1,a+n+1)-indexing
//4-do u understand question correctly(shampoo)?
//5-MOST IMP-BE CALM YOU CAN DO:)
//6-think edge case or corner case before submitting.
//7--*relate*
ll solve(ll x,ll y,ll tim){
	
	while(x<y){
		
		if(tim==x)
		return 0 ;
		
		x++;
	}
	
	return 1 ;
}		
			

int main(){
	
		
	ios_base::sync_with_stdio(false);cin.tie(NULL); cout.tie(NULL);
	
	ll h,m,s,t1,t2,ans=0 ;
	
	cin >> h >> m >> s >> t1 >> t2 ;
	
	if(t1>t2)
	swap(t1,t2);
	
	ans+=solve(t1*60*60,t2*60*60,h*60*60+m*60+s);
	ans+=solve(t1*5*60,t2*5*60,m*60+s);
	ans+=solve(t1*5,t2*5,s);
	
	if(ans==0 || ans==3)
	cout<<"yes";
	
	else
	cout<<"no";
}
