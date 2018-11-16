/**** [ AkJn ] ****/
#include <bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define endl '\n'
#define pb push_back
#define mp make_pair
#define ld long double
#define ll long long
#define fr(i,n) for(ll i=0; i<n; i++)
#define fre(i,n) for(ll i=1; i<=n; i++)

/* CHECK THESE POINTS BEFORE SUBMITTING
 * Read the question carefully.
 * Read the code once before final submission.
 * Check the extremities of the constraints.
 * 0 is better than -1.
*/

int main() 
{ 
    fast
    ll int n,t;
    cin >> n >> t;
    ll int a[n-1];

    for (ll int i = 0; i < n-1; ++i)
    {
    	cin >> a[i];
    }

    set <ll int> s;

    for (ll int i = 0; i < n-1;)
    {
    	s.insert(i+1+a[i]);
    	i = i+a[i];
    }

    if(s.count(t)){
    	cout << "YES";
    }
    else{
    	cout << "NO";
    }

    return 0; 
}