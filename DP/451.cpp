#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t=1;
    //cin>>t;
    while(t--)
    {
        int n,m,a,cnt=0;
        cin>>n;
        vector<int> hsh(1001);
        for(int i=0;i<n;i++)
        {
            cin>>a;
            hsh[a]++;
        }
        cin>>m;
        vector<int> v(m);
        for(int i=0;i<m;i++)
            cin>>v[i];
        sort(v.begin(),v.end());
        for(int i=0;i<m;i++)
        {
            a=v[i];
            if(hsh[a-1])
            {
                hsh[a-1]--;
                cnt++;
            }
            else if(hsh[a])
            {
                hsh[a]--;
                cnt++;
            }
            else if(hsh[a+1])
            {
                hsh[a+1]--;
                cnt++;
            }
        }
        cout<<cnt<<endl;
    }
    return 0;
}
