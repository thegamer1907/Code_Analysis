//~ mail ID : neernpatel@gmail.com
//~ Author : DrexDelta
//~ codechef : drexdelta , hackerRank : drexdelta , codeforces : drexdelta1
//~ Contact Info : neernpatel@gmail.com , +91-80898 25745 , +91-72030 44393

 
#include<iostream>
#include <cctype>
#include <cerrno>
#include <cfloat>
#include <ciso646>
#include <climits>
#include <clocale>
#include <cmath>
#include <csetjmp>
#include <csignal>
#include <cstdarg>
#include <cstddef>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <ctime>
#include <ccomplex>
#include <cfenv>
#include <cinttypes>
#include <cstdbool>
#include <cstdint>
#include <ctgmath>
#include <cwchar>
#include <cwctype>
#include <algorithm>
#include <bitset>
#include <complex>
#include <deque>
#include <exception>
#include <fstream>
#include <functional>
#include <iomanip>
#include <ios>
#include <iosfwd>
#include <iostream>
#include <istream>
#include <iterator>
#include <limits>
#include <list>
#include <locale>
#include <map>
#include <memory>
#include <new>
#include <numeric>
#include <ostream>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <stdexcept>
#include <streambuf>
#include <string>
#include <typeinfo>
#include <utility>
#include <valarray>
#include <vector>
#include <array>
#include <unordered_map>
#include <unordered_set>


using namespace std;

#define F first
#define S second
#define MP make_pair
#define PB push_back
#define UB upper_bound
#define LB lower_bound
#define ER erase
#define EN end()
#define B begin()
#define I insert
#define OPTIMIZE ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define int ll
#define endl "\n"
#define CO cout <<
#define CI cin >>
#define NL cout << endl;
#define DBG {int debug ; cin >> debug;}
#define AND &&
#define OR ||
#define XOR ^
#define OFLUSH fflush(stdout);
#define IFLUSH fflush(stdin);
#define LEN(x) x.length()

#define rep(i,x) for(int i = 0 ; i < x ; i++)
#define rep1(i,x) for(int i = 1 ; i <= x ; i++)

#define repl(var,start_val,limit_val) for(int var = start_val ; var <= limit_val ; var++)
#define perl(var,start_val,limit_val) for(int var = start_val ; var >= limit_val ; var--)

#define y1 qwert
#define y2 trewq
#define x1 asdfg
#define x2 gfdsa


typedef long long ll;
typedef pair<int,int> ii;
typedef vector<int> vi;
typedef set<int> si;
typedef multiset<int> msi;
typedef long double ld;

const ll maxn = 2e6+6 ;
const ll MOD = 1e9 + 7;

bool comparator(int i , int j)
{
    return (i < j);
}

ll power(ll x, ll i)
{
	ll ans = 1;
	while(i > 0)
	{
		if(i&1)
			ans = (ans*x)%MOD;
		i >>=1;
		x = (x*x)%MOD;
	}
	return ans;
}

ll power(ll x, ll i,ll mod)
{
	ll ans = 1;
	while(i > 0)
	{
		if(i&1)
			ans = (ans*x)%mod;
		i >>=1;
		x = (x*x)%mod;
	}
	return ans;
}

ll modInverse(ll x, ll mod)
{
	return power(x , mod-2,mod);
}

bool isPalindrome(string s)
{
	int limit = s.length()/2;
	for(int i =  0 ; i < limit ; i++)
	{
		if(s[i] != s[s.length()-i-1])
			return 0;
	}
	return true;
}

ll gcd(ll x, ll y)
{
	ll t;
	while(y != 0)
	{
		t = x%y;
		x = y;
		y = t;
	}
	return x;
}

bool isVowel(char ch){

    if(ch == 'a' || ch == 'i' || ch == 'e' || ch == 'u' || ch == 'o' || ch == 'y'){
        return true;
    }
    return false;
}

bool isPrime(int n)
{
	int root = sqrt(n);
	for(int i = 2 ; i <= root ; i++) if(n%i == 0) return 0;
	return 1;
}

// Geometry
///////////////
ld getDis(ld x1 ,ld y1,ld x2,ld y2){
	return sqrt((x1-x2)*(x1-x2) + (y1-y2)*(y1-y2));
}
ld getDisSquare(ld x1,ld y1,ld x2,ld y2){
	return (x1-x2)*(x1-x2) + (y1-y2)*(y1-y2);
}
/////////////
bool isSquareHelper(int x1 , int y1 , int x2 , int y2 , int x3 , int y3 , int x4 , int y4){
	
	ld d1,d2,d3,d4,d5,d6;
	d1 = getDisSquare(x1,y1,x2,y2);
	d2 = getDisSquare(x2,y2,x3,y3);
	d3 = getDisSquare(x3,y3,x4,y4);
	d4 = getDisSquare(x4,y4,x1,y1);

	if(d1 == d2 && d1 == d3 && d1 == d4){


		d5 = getDisSquare(x1,y1,x3,y3);
		d6 = getDisSquare(x2,y2,x4,y4);
		if(d5 == d6){
			return 1;
		}

	}
	return 0;

}

// pass 4 points in any order, 
// returns 1 if it forms square, else returns zero

bool isSquare(int x1 ,int y1 , int x2 , int y2 , int x3 , int y3 ,int x4 , int y4){

    if(	isSquareHelper(x1,y1,x2,y2,x3,y3,x4,y4) || 
    	isSquareHelper(x1,y1,x2,y2,x4,y4,x3,y3) || 
    	isSquareHelper(x1,y1,x3,y3,x2,y2,x4,y4)	)
    	return 1;
    else
    	return 0;

}

////////
bool isEqualateralTriangle(int x1, int y1,int x2, int y2, int x3, int y3){

	int d1 = getDisSquare(x1,y1,x2,y2);
	int d2 = getDisSquare(x2,y2,x3,y3);
	int d3 = getDisSquare(x3,y3,x1,y1);
	if(d1 == d2 && d1 == d3){
		return 1;
	}
	else
		return 0;

}

// checking if , first piont is right angle
bool isRightAngleTriangleHelper(int x1, int y1 ,int x2 , int y2 , int x3 , int y3){

	int d1 = getDisSquare(x1,y1,x2,y2);
	int d2 = getDisSquare(x2,y2,x3,y3);
	int d3 = getDisSquare(x3,y3,x1,y1);

	if(d2 == (d1 + d3)){
		return 1;
	}
	return 0;

}

bool isRightAngleTriangle(int x1, int y1, int x2 ,int y2 ,int x3 , int y3){

	if(isRightAngleTriangleHelper(x1,y1,x2,y2,x3,y3) || 
		isRightAngleTriangleHelper(x2,y2,x3,y3,x1,y1) ||
		  isRightAngleTriangleHelper(x3,y3,x1,y1,x2,y2)) 
		return 1;

	return 0;
	
}

bool areCollinear(int x1, int y1,int x2 , int y2 , int x3 , int y3){

}

// eratoshenes sieve ...
// Once eratoshtenes is activated, use the isPrime function below it,
// and deactivate above function

/*

int lp[maxn];
vector<int> pr;
void generatePrimes()
{
	for (int i=2; i<=maxn; ++i)
	{
		if (lp[i] == 0)
		{
			lp[i] = i;
			pr.push_back (i);
		}
		for (unsigned j=0; j<pr.size() && pr[j]<=lp[i] && i*pr[j]<=maxn;)
		{
			lp[i * pr[j]] = pr[j];
			j++;
		}
	}
	return;
}

bool isPrime(int n)
{
	int root = sqrt(n);
	for(int i = 0 ; i < pr.size() && pr[i] <= root ; i++) if(n%pr[i] == 0) return 0;
	return 1;
}

*/

/////////////////////////
// declaration section //
/////////////////////////

string s , t[100] ;
int a[1000][1000] , n;

void getInput(){
	cin >> s;
	cin >> n;
	rep(i,n){
		cin >> t[i];
	}
}

void getAnswer(){

}

void solve(){
    rep(i,n){
    	if(t[i] == s){
    		cout << "YES\n";
    		return;
    	}
    }

    rep(i,n){
    	rep(j,n){
    		a[t[i][1]][t[j][0]] = 1;
    	}
    }

    if(a[s[0]][s[1]]){
    	cout << "YES\n";
    	NL
    	return;
    }
    cout << "NO" << endl;
    return;

}

signed main(){

    OPTIMIZE

    //freopen("in.txt" , "r" , stdin) ;
    //freopen("out.txt" , "w" , stdout) ;

    int t=1;
    //cin >> t;
    while(t--)
        getInput() , solve();

	return 0;

}
