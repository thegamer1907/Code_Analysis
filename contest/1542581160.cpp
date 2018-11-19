#include <bits/stdc++.h>
#define ll long long
#define F first
#define S second
#define mp make_pair
#define All(v) v.begin(),v.end()
#define mod 1000000007
#define pi acos(-1)

using namespace std;
int a[100005];
int main()
{
    int k;
    int n;
    cin >> n >> k;

    for(int i=0; i<n; i++)
    {
        ll sum = 0;
        for(int j=0; j<k; j++)
        {
            int x;
            scanf("%d",&x);

            if(x)
                sum += (1<<j);
        }
        a[i] = sum;
    }
    int cnt[20] = {};
    for(int i=0; i<n; i++)
        cnt[a[i]]++;
    string ans = "NO";

    if(cnt[0])
        {
            ans = "YES\n";
            cout << ans;
            return 0;
        }
    else
    {
        int W = (1<<k);
        int m = (1<<W);
        for(int i=0; i<m; i++)
        {
            bool ok = 1;
            int s = 0;
            int sum[5]= {};
            for(int j=0; j<W; j++)
                if((1<<j)&i)
                {
                    if(cnt[j])
                    {
                        for(int z=0; z<k; z++)
                            if((1<<z)&j)
                                sum[z]++;
                        s++;
                    }

                }
                if(!s) continue;
            for(int j=0; j<k; j++)
                if(sum[j] > s/2)
                    ok = 0;
        //    cout << ok << " " << s << " " << i << endl;
            if(ok == 1)
            {
                cout <<"YES\n";
                return 0;
            }
        }
    }
    cout << "NO\n";

    return 0;
}
