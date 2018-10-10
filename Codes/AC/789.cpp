#include <bits/stdc++.h>
#define int long long 
#define pb push_back
#define spd ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
signed main()
{
    spd
    int n,k;
    cin>>n>>k;
    if(k%2==1)
            cout<<1<<endl;
    else
    {
        int start=1;
        int end=pow(2,n);
        int ans=n;
        while(start<=end)
        {
            int mid=(start+end)>>1;
            if(mid==k)
            {
                cout<<ans;break;
            }
            else
                if(mid>k)
                {
                    end=mid-1;
                    ans--;
                }
                else 
                if(mid<k)
                {
                    start=mid+1;
                    ans--;
                }



        }
    }
    return 0;
    


}