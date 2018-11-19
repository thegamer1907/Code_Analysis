#include <iostream>
using namespace std;

int a[20];

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n, k, flag=0;
    cin >> n >> k;
    for (int i = 0; i < n; i++)
    {
        int t,tsum=0;int ss = 0;
        for (int j = 0; j < k; j++)
        {
            cin >> t;
            ss += t << (k - j - 1);
            tsum+=t;
        }
        if(!tsum) flag++;
        a[ss]++;
    }

    // for(int i=0;i<16;i++)
    //     cout<<i<<"   "<<a[i]<<endl;

    for(int i=0;i<15;i++)
    {
        if(!a[i]) continue;
        for(int j=i;j<16;j++)
        {
            if(!a[j]) continue;
            if(!(i&j))
            {
                cout<<"YES"<<endl;
                return 0;
            }
        }
    }
    cout<<"NO"<<endl;
    return 0;
}