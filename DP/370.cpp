#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++)cin>>a[i];
    cin>>m;
    vector<int>b(m);
    for(int i=0;i<m;i++)cin>>b[i];
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    int lol=0,ans=0;
    for(int i=0;i<n;i++)
    {
        for(int j=lol;j<m;j++)
        {
            if(abs(a[i]-b[j])<=1)
            {
                    lol=j+1;
                    ans++;
                    break;
            }
        }
    }
    cout<<ans<<endl;

}
