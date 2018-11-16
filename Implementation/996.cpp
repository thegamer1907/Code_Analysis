#include <bits/stdc++.h>
#define ll long long
#define f first
#define s second
#define T int t; cin >> t; while(t--)
#define sc(n) cin >> n
#define fora(a,n) for(int i = 0;i < n;i++){cin >> a[i];} 
#define vect(a,n,x) vector <ll> a(n,x);
#define mod 1000000007
#define pb push_back
#define ppb pop_back
#define mp make_pair
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
    ll n,t;
    cin >> n >> t;
    string a;
    cin >> a;
    while(t--){
        for(int i = 0;i < n - 1;i++){
            if(a[i] == 'B' && a[i + 1] == 'G'){
                a[i] = 'G';
                a[i + 1] = 'B';
                i++;
            }
        }
    }
    cout << a << "\n";
    return 0;
}