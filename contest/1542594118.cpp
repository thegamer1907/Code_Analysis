#include<deque>
#include<queue>
#include<vector>
#include<algorithm>
#include<iostream>
#include<set>
#include<cmath>
#include<tuple>
#include<string>
#include<chrono>
#include<functional>
#include<iterator>
#include<random>
#include<unordered_set>
#include<unordered_map>
#include<array>
#include<map>
#include<iomanip>
using namespace std;
typedef long long int llint;
typedef long double lldo;
#define mp make_pair
#define mt make_tuple
#define pub push_back
#define puf push_front
#define pob pop_back
#define pof pop_front
#define fir first
#define sec second
#define res resize
#define ins insert
#define era erase
#define dme cout<<-1<<endl;return 0
//ios::sync_with_stdio(false);
//<< setprecision(5)
const int mod=1000000007;
const long double big=1e9+10;
const long double pai=3.141592653589793238462643383279502884197;
const long double eps=1e-7;
template <class T,class U>void mineq(T& a,U b){if(a>b){a=b;}}
template <class T,class U>void maxeq(T& a,U b){if(a<b){a=b;}}
llint gcd(llint a,llint b){if(a%b==0){return b;}else return gcd(b,a%b);}
llint lcm(llint a,llint b){return a/gcd(a,b)*b;}
int main(void){
	ios::sync_with_stdio(false);
	string str;cin>>str;
	int n;cin>>n;
	bool mae=false,at=false;
	for(int i=0;i<n;i++){
		string it;cin>>it;
		if(it.front()==str.back()){mae=true;}
		if(str.front()==it.back()){at=true;}
		if(it==str){mae=true;at=true;}
	}
	if(mae&&at){cout<<"YES"<<endl;}else{cout<<"NO"<<endl;}
	return 0;
}