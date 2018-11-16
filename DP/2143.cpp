#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll,ll> pr;
typedef vector<pr> vp;
typedef vector<vp> vpp;
typedef vector<vector<ll> > graph;
#define pb push_back
#define mp make_pair
ll mod = pow(10,9) + 7;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,k;
    cin>>n>>k;
    int a[n];
    map<int,int> m;
    for(int i=0;i<n;i++) 
    {
        cin>>a[i];
        m[a[i]]++;
    }
    int ans[n];
    ans[0]=m.size();
    for(int i=1;i<n;i++)
    {
        if(m[a[i-1]]>1)
        m[a[i-1]]--;
        else
        m.erase(a[i-1]);
        ans[i]=m.size();
    }
    for(int i=0;i<k;i++)
    {
        int temp;
        cin>>temp;
        cout<<ans[temp-1]<<endl;
    }
}