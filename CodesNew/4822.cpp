#include <bits/stdc++.h> 
using namespace std; 
#define FOR(i,a,b) for(int i = (a); i <= (b); ++i) 
#define FORD(i,a,b) for(int i = (a); i >= (b); --i) 
#define RI(i,n) FOR(i,1,(n)) 
#define REP(i,n) FOR(i,0,(n)-1) 
#define mini(a,b) a=min(a,b) 
#define maxi(a,b) a=max(a,b) 
#define mp make_pair 
#define pb push_back 
#define st first 
#define nd second 
#define sz(w) (int) w.size() 
typedef vector<int> vi; 
typedef long long ll; 
typedef long double ld; 
typedef pair<int,int> pii; 
typedef pair<pii, int> para; 
const ll inf = 1e18 + 7; 
const int maxN = 2e6 + 5;
int n, arr[maxN], cnt;
int main() { 	ios_base::sync_with_stdio(0); 	
cin>>n;
REP(i,n) cin>>arr[i];
sort(arr, arr+n);
cnt = n/2;
int ans = n;
REP(i, n/2) {
    while (arr[cnt] < 2*arr[i] && cnt < n) cnt++;
    if (cnt < n) {
        ans--;
        cnt++;
    }
}
cout<<ans;
}