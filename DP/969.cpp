#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;i++)
#define pb push_back
#define F first
#define S second
#define mp make_pair
#define MOD 1000000007ULL
#define HELL 1000000000ULL
#define MAXN 15000001
#define all(v) v.begin(),v.end()
#define FAST ios_base::sync_with_stdio(false)


typedef long long ll;
typedef unsigned long long ull;
typedef double db;
typedef long double ldb;
typedef pair <int, int> pii;
typedef pair <ll, ll> pll;
typedef pair <ll, int> pli;

int main()
{
    int n; cin >> n;

    int arr[111];
    rep(i,n) cin >> arr[i];


    int ans = 0;
    rep(i,n)
    {
        for(int j=i;j<n;j++)
        {
            int count = 0;

            for(int k=0;k<i;k++){
                if(arr[k]==1)
                    count++;
            }

            for(int k=i;k<=j;k++)
            {
                if(arr[k]==0)
                    count++;
            }

            for(int k=j+1;k<n;k++)
            {
                if(arr[k]==1)
                    count++;
            }

            //cout << count <<"\n";
            ans = max(ans, count);

        }
    }


    cout << ans;

}
