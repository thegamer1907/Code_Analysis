#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
/*ll *arrp;
ll *arrq;
void dfs(vector<ll> *v,vector<ll> & p,vector<ll> & q,bool *visited,ll n,ll start)
{
    p.push_back(arrp[start]);
    q.push_back(arrq[start]);
    visited[start]=true;
    for(int i=0;i<v[start].size();i++)
    {
       // cout<<123<<endl;
        if(!visited[v[start][i]])
        {
            dfs(v,p,q,visited,n,v[start][i]);
        }
    }
}*/
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll n,m;
    cin>>n>>m;
    ll *arr=new ll[n];
    ll sum=0;
    ll mx=0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        sum+=arr[i];
        mx=max(arr[i],mx);
    }
    ll temp=mx*n-sum;
    if(m<temp)
    {
        cout<<mx;
    }
    else if((m-temp)%n==0)
    {
        cout<<mx+(m-temp)/n;
    }
    else
    {
        cout<<mx+(m-temp)/n+1;
    }
    cout<<" "<<mx+m;
	return 0;
    
} 