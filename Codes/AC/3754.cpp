#include <bits/stdc++.h>

#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define fi first
#define se second

using namespace std;

typedef unsigned long long ll;
typedef pair<int, int> pii;

const ll inf = 123456789123;
const int ms = 1e6 + 1;
const ll mod = 1e9 + 7;

int nb, ns, nc;
int pb, ps, pc;

int nSaus, nBread, nCorn;

ll money;

bool can(){
    if(nBread != 0 && nb != 0) return 1;
    if(nCorn != 0 && nc != 0) return 1;
    if(nSaus != 0 && ns != 0) return 1;
    return 0;
}

int main(){
    ios::sync_with_stdio(0); cin.tie(0); cout << fixed; cout << setprecision(0);

    string a; cin >> a;

    cin >> nb >> ns >> nc;

    cin >> pb >> ps >> pc;

    cin >> money;

    nCorn = nBread = nSaus = 0;

    for(char x : a){
        switch(x){
            case 'B':
                nBread++;
                break;
            case 'S':
                nSaus++;
                break;
            case 'C':
                nCorn++;
                break;
            case 'A':
                break;
        }
    }

    ll recCost = (nBread*pb) + (nSaus*ps) + (nCorn*pc);

    ll rec = 0;

    while(can()){
        if(nb < nBread){
            if(money < (nBread - nb)*pb){
                break;
            }
            money -= (nBread - nb)*pb;
            nb = nBread;
        }
        if(ns < nSaus){
            if(money < (nSaus - ns)*ps){
                break;
            }
            money -= (nSaus - ns)*ps;
            ns = nSaus;
        }
        if(nc < nCorn){
            if(money < (nCorn - nc)*pc){
                break;
            }
            money -= (nCorn - nc)*pc;
            nc = nCorn;
        }

        nb -= nBread;
        ns -= nSaus;
        nc -= nCorn;

        rec++;
    }

    rec += money/(recCost);

    cout << rec << endl;

    return 0;
}