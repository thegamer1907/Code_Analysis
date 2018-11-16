#include <bits/stdc++.h>
using namespace std;
#define F first
#define S second
#define lli long long int
#define pb push_back
#define mp make_pair
#define fo(i,n) for(i=0;i<(n);i++)
#define endl "\n"
#define mod 1000000007

long long int i,j;


int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
    lli n;
    cin>>n;
    vector<lli>v[n];
    vector<lli>root;
    fo(i,n)
    {
        lli temp;
        cin>>temp;
        if(temp==-1)
        root.pb(i);
        else
        {
            v[temp-1].pb(i);
        }
    }
    queue<lli>q;
    lli level[n];
    for(auto it=root.begin();it!=root.end();it++)
    {
        q.push(*it);
        level[*it]=1;
    }
    while(!q.empty())
    {
        lli front=q.front();
        q.pop();
        fo(i,v[front].size())
        {
            level[v[front][i]]=level[front]+1;
            q.push(v[front][i]);
        }
    }
    lli max=0;
    fo(i,n)
    {
        if(level[i]>max)
        max=level[i];
    }
    cout<<max<<endl;
    return 0;
}
