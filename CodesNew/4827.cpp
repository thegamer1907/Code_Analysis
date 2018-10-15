#include <bits/stdc++.h>
#define in ios::sync_with_stdio(0);cin.tie(0);
#define PI 3.14159265358979323846
#define all(v) v.begin(),v.end()
#define EPS 1e-15
#define MOD 1000000007
/***
.
.
.
.
kerolos atef
.
.
.
.
***/
using namespace std;
typedef long long ll ;
typedef pair<int,int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;

int main()
{
    in ;
    //freopen("in", "r", stdin);
    //freopen("out", "w", stdout);
    int n ;
    cin >>n ;
    int arr [n];
    for (int i=0;i<n;i++)
        cin>>arr[i];
    sort(arr ,arr+n);
    int temp = n;
    int l=0,r=n/2;
    while (l<n/2 && r< n)
    {
        if (arr [l] <= arr[r]*.5)
        {
            temp--;
            l++;
            r++;
        }
        else
            r++;
    }
    cout<<temp;
    return 0;
}
