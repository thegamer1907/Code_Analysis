#include <bits/stdc++.h>

using namespace std;

typedef long long int ll;
#define pii pair<ll, ll>
#define mp make_pair
#define pb push_back
#define sz(v) (int)v.size()
typedef long double ld;

int n, a[300001], change;

bool check(int x, int print){
    int zero = 0;
    for(int j = 0; j < x-1; j++)
        if(a[j] == 0) zero++;
    
    for(int j = x-1; j < n; j++){
        if(a[j] == 0) zero++;
        if(zero <= change){
            if(print == 0) return true;
            for(int k = 0; k < j - x + 1; k++)
                cout << a[k] << " ";
            for(int k = j-x+1; k < j+1; k++)
                cout << 1 << " ";
            for(int k = j+1; k < n; k++)
                cout << a[k] << " ";
            cout << endl;
            return true;
        }
        if(a[j - x + 1] == 0) zero--;
    }
    return false;
}

int foo(int l, int r){
    if(l == r) return l;
    int mid = (l+r)/2;
    if(check(mid+1, 0)) return foo(mid+1, r);
    return foo(l, mid);
}

int main(){
    int z = 0;
    cin >> n >> change;
    for(int j = 0; j < n; j++){
        cin >> a[j];
        if(a[j] == 0) z++;
    }
    if(z == n && !change){
        cout << 0 << endl;
        for(int j = 0; j < n; j++)
            cout << a[j] << " ";
        cout << endl;
        return 0;
    }
    int ans = foo(0, n);
    cout << ans << endl;
    check(ans, 1);
    return 0;
}