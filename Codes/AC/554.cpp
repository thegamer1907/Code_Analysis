#include<bits/stdc++.h>
using namespace std;

int k,ans;

inline bool check(int u)
{
    int ans=0;
    while(u)ans+=u%10,u/=10;
    return ans==10;
}

int main()
{
    ios::sync_with_stdio(0);
    cout.tie(0);
    cin>>k;
    for(int i=19;;i++)
    {
        if(check(i))ans++;
        if(ans==k)
        {
            cout<<i<<endl;
            break;
        }
    }
    return 0;
}