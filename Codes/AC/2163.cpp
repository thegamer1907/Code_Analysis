// PAUSE FOR PRAYER
//
// Dear God.
//
// Please be with me as I
// develop this project and
// guide me so as to be free
// of coding error.
//
// END PRAYER


#include <bits/stdc++.h>
using namespace std;

ifstream fin("input.txt");
ofstream fout("output.txt");

bool isPrime(int x) { if (x <= 4 || x % 2 == 0 || x % 3 == 0) return x == 2 || x == 3;
    for (int i = 5; i * i <= x; i += 6) if (x % i == 0 || x % (i + 2) == 0) return 0; return 1; }

inline void boostIO() {
	ios_base::sync_with_stdio(0);
	cin.tie(0); 
	cout.tie(0);
}
typedef long long int ll;
typedef long double ld;
#define fori(n) for(int i = 0; i < (n); ++i)
#define forj(n) for(int j = 0; j < (n); ++j)
#define fork(n) for(int k = 0; k < (n); ++k)
#define max3(a, b, c) max(a, max(b, c))
#define min3(a, b, c) min(a, min(b, c))

int main() {
    boostIO();
    int n; cin >> n;
    vector<ll> A(n);
    fori(n)
        cin >> A[i];
    
    int a = 0;
    int b = n - 1;


    ll Sum1 = 0;
    ll Sum2 = 0;

    ll Answ = 0;

    while (a <= b) {
        if (Sum1 <= Sum2) {
            Sum1+=A[a];
            ++a;
        }
        else {
            Sum2 += A[b];
            --b;
        }
        if (Sum1 == Sum2) {
            Answ = Sum1;
        }
    }
    cout << Answ << endl << endl;
    return 0;
}