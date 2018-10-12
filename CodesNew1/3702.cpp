#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef pair<int, int> ii;

#define EPS 1e-7


int main() {
//    freopen ("stations.in","r",stdin);
//    freopen ("out.txt","w",stdout);
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
    int n;
    cin>>n;
    int m;
    cin>>m;
    vector<int> a(n);
    for(int i=0; i<n; i++) scanf("%d", &a[i]);
    sort(a.begin(), a.end());
    int mx = a.back() + m, mn, it = 0;
    while(m){
		a[it++]++;
		m--;
		if(it == n || a[it] >= a.front()) it = 0;
//		for(int i=0; i<n; i++) cout<<a[i]<<" ";
//		cout<<endl;
    }
    sort(a.begin(), a.end());
    mn = a.back();
    printf("%d %d", mn, mx);


}
