#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define pb push_back
#define mp make_pair
#define FAST ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define mod 1000000007

int main()
{
    set<int> s;
    int n,i,q;
    cin >> n >> q;
    int a[n],ans[n+1],l;
    for(i=0;i<n;i++)
    {
        cin >> a[i];
    }
    for(i=(n-1);i>=0;i--)
    {
        s.insert(a[i]);
        ans[i+1]=s.size();
    }
    while(q--)
    {
        cin >> l;
        cout << ans[l] << endl;
    }
    return 0;
}

