#include <bits/stdc++.h>

using namespace std;
vector<long long>v;
bool visited[30005];
void dfs(long long n, long long m)
{
    if(m<=n && !visited[m])
    {
        visited[m]=1;
        dfs(n,m+v[m-1]);
    }

}
int main()
{
    long long n, k;
    cin>>n>>k;

    for(auto i =0; i<n-1; i++)
    {
        long long temp;
        cin>>temp;

        v.push_back(temp);
    }

    dfs(n,1);

    if(visited[k])
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}
