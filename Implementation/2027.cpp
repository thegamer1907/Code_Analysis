#include <bits/stdc++.h>
using namespace std;
long long sum,tot,mod,mx=-1e18,mn=1e18,a,b,c,d,k,t,s,m,n,x,y,z;
bool ok=0;
set<char>se;
deque<long long>dq;
vector<pair<long long,long long>>v;
map<long long,long long>mp;
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
    IOS
    cin>>n;int arr[n][3];
    for (int i=0;i<n;i++){
        for (int j=0;j<3;j++){
            cin>>arr[i][j];
        }
    }
    for (int i=0;i<n;i++){
        x+=arr[i][0];
    }
    for (int i=0;i<n;i++){
        y+=arr[i][1];
    }
    for (int i=0;i<n;i++){
        z+=arr[i][2];
    }
    if (x==0&&y==0&&z==0)
        cout<<"YES";
    else
        cout<<"NO";
    return 0;
}
