#include <bits/stdc++.h>

using namespace std;

//Custom ->
typedef long long ll;

#define inf 1000000000
#define pb push_back
#define pf push_front
#define in insert
#define mp make_pair
#define cover(con, a) memset(con, a, sizeof(con))
#define sumUp(v) accumulate(v.begin(), v.end(), 0)
#define space cout << endl
#define tab "\t"
#define printcon(v) for(auto a : v){ cout << a << " "; }
#define SORT(v) sot(v.begin(), v.end())
#define rev(v) reverse(v.begin(), v.end())

//Global Declarations ->


//Functions ->


//Driver Code ->
int main ()
{
    int n, t;
    cin >> n >> t;

    int arr[n - 1];
    for (int i = 1; i < n; ++i) {
        cin >> arr[i];
    }

    int a = 1;
    while (a < t) {
        a += arr[a];
    }

    cout << ((a == t) ? "YES" : "NO") << endl;
}
