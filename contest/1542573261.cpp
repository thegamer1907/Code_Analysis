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
ll visit[100001][3][20],n,a[100001][5],k ;
bool dp[100001][3][20];

bool go(ll idx,ll sum,ll mask){
	
	//trace3(idx,sum,mask);
	
		if(sum==2)
		return true ;
		
		if(idx>n)
		return false ;
		
		bool ans = false,flag ;
		
		if(visit[idx][sum][mask]!=-1)
		return dp[idx][sum][mask] ;
		
			
		ans |= go(idx+1,sum,mask);
		
		ll i,nmask  = mask;
		
		for(i=0,flag=true;i<k;i++){
			
			//trace3(i,nmask,idx);
			
			if((nmask & 1<<i)==0 && a[idx][i]==1){
				nmask = nmask | 1<< i ;
			}
			
			else if(a[idx][i]==1)
			flag = false ; 
		}
		
		//trace3(idx,nmask,flag);
		
		if(flag==true)
		ans |= go(idx+1,sum+1,nmask);
		
		
			
			
		
		visit[idx][sum][mask] = 1 ;
		return dp[idx][sum][mask] = ans ;
	}	
			
			

int main(){
	
		
	ios_base::sync_with_stdio(false);cin.tie(NULL); cout.tie(NULL);
	
	ll i,j,cnt=0;
	
	cin >> n >> k;
	
	for(i=1;i<=n;i++){
		
		for(j=0;j<k;j++){
			
			cin >> a[i][j] ;
			
			cnt+=a[i][j] ;
			
			
		}
		
		if(cnt==0){
			
			cout<<"yes";
			return 0 ;
		}
		
	}
	
	memset(visit,-1,sizeof(visit));
	
	if(go(1,0,0))
	cout<<"yes";
	
	else
	cout<<"no"; 
}

