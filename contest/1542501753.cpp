/** Writer: Sourav Malo **/

#include <bits/stdc++.h>
using namespace std;

#define Y() printf("YES\n")
#define N() printf("NO\n")
#define FAST() ios :: sync_with_stdio(false); cin.tie(0);
#define _gcd(a, b) __gcd(a, b) 
#define _lcm(a, b) (a * b) / _gcd(a, b)
#define ll long long int
#define ull unsigned long long int
#define malo return 0
#define MAX 10000000000000000059
#define MIN -1000000000000000005
#define max_3(a, b, c) max(a, max(b, c))
#define max_4(a, b, c, d) max(a, max(b, max(c, d)))
#define min_3(a, b, c) min(a, min(b, c))
#define min_4(a, b, c, d) min(a, min(b, min(c, d)))
#define vec vector <ll> 
#define vec_p vector <pair <ll, ll>>
#define it vector <ll> :: iterator
#define pb push_back
#define ppb pop_back
#define mp make_pair
#define rev reverse
#define _max *max_element
#define _min *min_element
#define SUM accumulate
#define BS binary_search
#define CT count
#define lb lower_bound
#define ub upper_bound 
#define B begin()
#define E end()
#define F first
#define S second
#define wow 1000000007

//vec v, v1, v2, v3;
//string s, s1, s2, s3;

int main ()
{
	//freoprn("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
    ll a = 0, b, c, d, i, j, k, l, m, n, p, q, r, u, w, e, f, g, h, t, ct = 0, ct1 = 0, ct2 = 0, ck = 0, ck1 = 0, ck2 = 0, ln, ln1, start, end, mid;
    ll a1 = 0, a2 = 0, a3 = 0, a4 = 0, a5 = 0, b1 = 0, b2 = 0, b3 = 0, b4 = 0, sum = 0, sum1 = 0, max1, max2, min1, min2;
    double x, y, z, t1, t2;
    char ch, ch1, ch2;
    
    FAST();
    cin >> a1 >> a2 >> a3 >> a4 >> a5;
    t1 = a4 * 1.00 * 5, t2 = a5 * 1.00 * 5;
    z = a3 * 1.00, y = a2 + ((a3 * 1.00) / 60.00); 
	if(a1 * 5 == 60) a1 = 0;
	else a1 *= 5;
	x = a1 * 1.00 + ((a2 * 60) + a3) / 3600.00;
    if(t1 > t2) swap(t1, t2);
    if(x >= t1 && x <= t2) ct++;
    if(y >= t1 && y <= t2) ct++;
    if(z >= t1 && z <= t2) ct++;
    ct == 0 || ct == 3 ? Y() : N();

    

    
    
    
    
    
    
    
	
    return 0;
}