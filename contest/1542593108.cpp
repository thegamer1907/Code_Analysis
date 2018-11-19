
#include <iostream>
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
 
// Shortcuts for "common" data types in contests
typedef long long int ll;
typedef set<int> si;
typedef map<string, int> msi;
typedef vector<int> vi;
typedef pair<int,int> ii; 
typedef vector<ii> vii;
typedef vector<vi> vvi; 
//For the iterations and several functionalities for stl
#define sz(a) int((a).size()) 
#define pb push_back 
#define all(c) (c).begin(),(c).end() 
#define tr(c,i) for(typeof((c).begin() i = (c).begin(); i != (c).end(); i++) 
#define present(c,x) ((c).find(x) != (c).end()) 
#define cpresent(c,x) (find(all(c),x) != (c).end()) 
// To simplify repetitions/loops, Note: define your loop style and stick with it! 
#define s(i) scanf("%d",&i)
#define sl(i) scanf("%ld",&i)
#define sll(i) scanf("%lld",&i)
#define REP(i,a,b) \
for (int i = int(a); i <= int(b); i++) // a to b, and variable i is local!
#define NREP(i,a,b) \
for (int i = int(a); i >= int(b); i--)
#define INF 2000000000 // 2 billion
const ll MOD = 1e9 + 7;
const ll maxn = 1e6+6 ;


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
 
    if(ch == 'a' || ch == 'i' || ch == 'e' || ch == 'u' || ch == '0' || ch == 'y'){
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

int main()
{

	string pass;
	int n;
	cin>>pass;
	cin>>n;
	string str[n];
	REP(i,0,n-1)
	{
		cin>>str[i];
	}
	int flag =0 ;
	int yes=0;
	REP(i,0,n-1)
	{
		if(str[i] == pass){
			yes=1;
			flag=1;
		}
		else{
			REP(i,0,n-1)
			{
				if(str[i][0] == pass[1])
					flag = 1;
			}
			REP(i,0,n-1)
			{
				if(flag && str[i][1] == pass[0]){
					yes = 1;
					break;
				}
			}
		}
	}
	if(yes && flag)
		cout<<"YES\n";
	else
		cout<<"NO\n";
	
}