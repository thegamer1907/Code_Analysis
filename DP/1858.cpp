#include <bits/stdc++.h>
using namespace std;

#define db(x) cerr << #x << "=" << x << endl
#define db2(x, y) cerr << #x << "=" << x << "," << #y << "=" << y << endl
#define db3(x, y, z) cerr << #x << "=" << x << "," << #y << "=" << y << "," << #z << "=" << z << endl
#define ll long long
#define pb push_back
#define eb emplace_back
#define all(x) (x).begin(), (x).end()
#define mp make_pair
#define X first
#define Y second
#define sz(x) (int)((x).size())
#define pii pair<int,int>
#define MOD (ll)(1e9 + 7)
#define rep(i, n)    for(int i = 0; i < (n); ++i)
#define repA(i, a, n)  for(int i = a; i <= (n); ++i)
#define repD(i, a, n)  for(int i = a; i >= (n); --i)
#define trav(a, x) for(auto& a : x)
typedef vector<int> vi;
#define inf (int)(1e9+5)
#define double long double


//--start here
int main() {
    
    string st;
    cin >> st;
    int n = sz(st);
    int s1=-1,s2=-1;
    repA(i,1,n-1) {
        if(st[i-1]=='A' && st[i]=='B') {
            s1 = i;
            break;
        }
    }

    repD(i, n-2, 0) {
        if(st[i+1]=='A' && st[i]=='B') {
            s2 = i;
            break;
        }
    }

    if(s1 == -1 || s2 == -1) {
        cout << "No\n";
        return 0;
    }
    else {
        if(s2 > s1 && s2-s1 >= 1) {
            cout << "Yes\n";
            return 0;
        }
        else if(s1 > s2 && s1-s2 >= 3) {
            cout << "Yes\n";
            return 0;
        }
    }

    s1=-1,s2=-1;
    repA(i,1,n-1) {
        if(st[i-1]=='B' && st[i]=='A') {
            s1 = i;
            break;
        }
    }

    repD(i, n-2, 0) {
        if(st[i+1]=='B' && st[i]=='A') {
            s2 = i;
            break;
        }
    }

    if(s2 > s1 && s2-s1 >= 1) {
        cout << "Yes\n";
    }
    else if(s1 > s2 && s1-s2 >= 3) {
        cout << "Yes\n";
    }
    else cout << "No\n";
}