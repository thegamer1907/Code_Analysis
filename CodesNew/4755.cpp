
//created by Lil Bro.
#include<bits/stdc++.h>
#define sz(a) int(a.size())
#define reset(a,b) memset(a,b,sizeof(a))
#define ff first
#define ss second
#define f0(i,n) for(int i =0; i<n; i++)
#define f1(i,n) for(int i = 1; i<=n; i++)
#define mp make_pair
#define pb push_back
const double pi=acos(-1.0);
using namespace std;
typedef long long ll;
typedef pair<int, int> pii;
#define MAX 500005

int main()
{
//	freopen("input.txt","r",stdin);
//	freopen("output.txt","w",stdout);
    int n;
    vector<int> small,big;
    int a[MAX];
    cin>>n;
    f0(i,n)
    {
        int x;
        cin>>a[i];
    }
    sort(a,a+n);
    for(int i =0; i<n/2; i++)
        small.pb(a[i]);
    for(int i = n/2; i<n; i++)
        big.pb(a[i]);
    int i = 0, j = 0, ans = 0;
    while(i !=sz(small) && j != sz(big))
    {
        if(small[i]* 2 <=big[j])
        {
            i++;
            j++;
            ans++;
        }
        else if(small[i] * 2 >  big[j])
        {
            j++;
        }
    }
    cout<< n - ans;
    return 0;
}
