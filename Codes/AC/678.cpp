#include<bits/stdc++.h>
using namespace std;




typedef vector<int> VI;
typedef vector<VI> VVI;

typedef vector<bool> VB;
typedef vector<VB> VVB;

typedef long long ll;
typedef vector<ll> VL;
typedef vector<VL> VVL;

typedef pair<char,int> P;
typedef pair<int,P> IP;
typedef vector<P> VP;
typedef vector<VP> VVP;

typedef pair<bool,bool> PB;

typedef vector<string> VS;

bool perfecte(int p) {
    int suma = 0;
    while (p != 0) {
        suma += p%10;
        if (suma > 10) return false;
        p = p/10;
    }
    if (suma == 10) return true;
    else return false;
}

int main() {
    int k;
    cin >> k;
    int c = 0;
    int p = 18;
    while (c < k) {
        ++p;
        if (perfecte(p)) ++c;
    }
    cout << p << endl;
    
}
