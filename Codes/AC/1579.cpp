#include <bits/stdc++.h>
#define ll long long

using namespace std;

    ll n, s, ans;
    ll a[100010], b[100010];

    ll schet (ll k){
        ll sum=0;
        for (int i=1; i<=n; i++)
            b[i]=a[i]+i*k;
        sort(b+1, b+n+1);
        for (int i=1; i<=n; i++)
            while (i<=k)
                sum+=b[i], i++;
        return sum;
    }

    void bin_poisk(){
        ll l=1, r=n, mid, sum;
            while (l+1<r){
                mid=(r+l)/2;
                sum=schet(mid);
                if (sum>s)
                    r=mid-1;
                else
                    l=mid;
            }
        sum=schet(r);
        if (r<=n && sum<=s && sum!=0){
            cout << r << " " << sum;
        }
        else{
            sum=schet(l);
            if (l<=n && sum<=s && sum!=0)
                cout << l << " " << sum;
            else cout << 0 << " " << 0;
        }
    }

int main()
{
    ios_base::sync_with_stdio(0);

    cin >> n >> s;
        for (int i=1; i<=n; i++)
            cin >> a[i];
    bin_poisk();
    return 0;
}
