#include <iostream>
#include <algorithm>
#include <string>
#include <vector>


using namespace std;


#define FOR(i,n) for(int i=0; i<n ; i++)
#define pi 3.14159265358979323846
#define mp make_pair
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define F first
#define S second

typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
const ll MOD = 1000000007;
const int INF = 2000 * 1000 * 1000 + 5;
const int MAX = 1005; // 2*2^ceil(log_2(n)) - 1


long long gcd(long long a, long long b) { return b == 0 ? a : gcd(b, a % b); }
ll lcm(ll a, ll b) { ll temp = gcd(a, b); 	return temp ? (a / temp * b) : 0; }
template <typename T>
T modpow(T base, T exp, T modulus) { base %= modulus; T result = 1; while (exp > 0) { if (exp & 1) result = (result * base) % modulus; base = (base * base) % modulus;	exp >>= 1; }return result; }
inline bool isInteger(const std::string & s) { if (s.empty() || ((!isdigit(s[0])) && (s[0] != '-') && (s[0] != '+'))) return false; char * p; strtol(s.c_str(), &p, 10); return (*p == 0); }


int main()
{
	int h, m, s, t1, t2; cin >> h >> m >> s >> t1 >> t2;
	h = (h * 60 * 60 + m * 60 + s) % (12 * 60 * 60);
	m = m * 12 * 60 + s;
	s *= 12 * 60;
	t1 = (t1* 60 * 60 )% (12 * 60 * 60), t2 = (t2* 60 * 60 )% (12 * 60 * 60);
	if (t1 > t2) swap(t1, t2);
	if (!(h > t1 && h < t2) && !(m > t1 && m < t2) && !(s > t1 && s < t2)) cout << "YES" << endl;
	else if ((h > t1 && h < t2) && (m > t1 && m < t2) && (s > t1 && s < t2)) cout << "YES" << endl;
	else cout << "NO" << endl;
	return 0;

	return 0;
}

