#define Q279B
#ifdef Q279B

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<vvi> vvvi;
typedef vector<double> vd;
typedef vector<vd> vvd;
typedef vector<vvd> vvvd;
typedef vector<char> vc;
typedef vector<vc> vvc;
typedef vector<vvc> vvvc;
typedef pair<int,int> ii;
typedef pair<int,ii> iii;
typedef vector<iii> viii;
typedef vector<ii> vii;
typedef vector<viii> vviii;
typedef vector<vii> vvii;
typedef  stack<int> si;
typedef queue<int> qi;
typedef map<int,int> mii;
typedef queue<ii> qii;
typedef pair<int , double> id;
typedef vector<id> vid;
typedef vector<vid> vvid;
typedef vector<ll> vll;
typedef vector<vll> vvll;
typedef unsigned long long ull;
typedef pair<double , double > dd;
typedef vector<dd> vdd;
#define inf 10000000
#define sup 1e-9
#define pi acos(-1)

vi vec;
int n, t;

int binarySearch(int l, int r, int x)
{
    if (r >= l)
    {
        int mid = l + (r - l)/2;
        if(mid != n) {
            if (vec[mid] - x <= t && vec[mid + 1] - x > t)
                return mid;
        }
        else{
            if(vec[mid] - x <= t)
                return mid;
        }
        if (vec[mid] - x <= t)
            return binarySearch(mid + 1, r, x);
        return binarySearch(l, mid - 1, x);

    }
    return -1;
}


int main(){

    ios::sync_with_stdio(0);

    while (cin >> n >> t){
        vec.clear();
        vec.push_back(0);
        for (int i = 0; i < n; ++i) {
            int a; cin >> a;
            if (i != 0) vec.push_back(vec[i] + a);
            else vec.push_back(a);
        }
        int cont = 0;
        int max = 0;
        bool ok = true;
        for (int i = 0; i < n + 1; ++i) {
            int a = binarySearch(i + 1, n, vec[i]);
            if (a - i > cont)
                cont = a - i;
        }
        cout << cont << endl;
    }

    return 0;
}


#endif