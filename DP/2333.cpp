#include <iostream>
#include<algorithm>
#include<string>
#include<map>
#include <iterator>
#include<iomanip>
#include <time.h>
#include<vector>
#include<cmath>
#include <cstdio>
#include<queue>
#include<unordered_map>
#include<stack>
#include<list>
#include<stdio.h>
#include<set>
#include <functional>

#define hash_mod 2305843009213717
#define mod7 1000000007
#define mod9 1000000009
#define mod2 30000000
#define pa(a,b) make_pair(a,b)
#define f first
#define s second
#define pb(a)  push_back(a)
#define all(a) a.begin() , a.end()
#define mem(a, b) memset(a, b, sizeof(a))
#define LL  long long int
#define oo 1e9
#define pi 3.141592653589793238
#define eps  1e-6



LL maxx(LL & a , LL & b){ return a>b ?  a : b ;}
LL minn(LL & a , LL & b){ return a>b ?  b : a ;}

using namespace std;
//int dx[] = {1 , -1 , 0 , 0} ;
//int dy[] = {0 , 0 , 1 , -1} ;
void boostIO()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
}
LL gcd(LL a, LL b) {
    return b == 0 ? a : gcd(b, a % b);
}
int int_gcd(int a, int b) {
    return b == 0 ? a : int_gcd(b, a % b);
}
LL lcm(LL a , LL b )
{
    return a / gcd(a , b) * b;
}
LL poww(LL base, LL exp , LL mod){
  base %= mod;
  LL result = 1;
  while (exp > 0) {
    if (exp & 1) result = (result * base) % mod;
    base = (base * base) % mod;
    exp >>= 1;
  }
  return result;
}
int main()
{
    string s;  cin >> s;

    for(int i = 0 ; i < s.size() ; i++){
        if((s[i] - '0') % 8 == 0){
            cout << "YES" << endl ;
            cout << s[i] << endl ;
            return 0 ;
        }
    }

    for(int i = 0 ; i < s.size() ; i++){
        for(int j = i + 1 ; j < s.size() ; j++){
            if((10 * (s[i] - '0') + (s[j] - '0')) % 8 == 0){
                cout << "YES" << endl ;
                cout << s[i] << s[j] << endl;
                return 0 ;
            }
        }
    }

    for(int i = 0 ; i < s.size() ; i++){
        for(int j = i + 1 ; j < s.size() ; j++){
            for(int k = j + 1 ; k < s.size() ; k++){
                if((100 * (s[i] - '0') + 10 * (s[j] - '0') + (s[k] - '0')) % 8 == 0){
                    cout << "YES" << endl ;
                    cout << s[i] << s[j] << s[k] << endl ;
                    return 0 ;
                }
            }
        }
    }

    cout << "NO" << endl ;
}