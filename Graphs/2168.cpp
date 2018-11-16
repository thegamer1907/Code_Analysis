/**
 *    Author:  "Ashutosh Kaushik" !!!
 *    ashutoshkaushik     (CodeForces)
**/
#include<bits/stdc++.h>
using namespace std;
#define MOD 1000000007
#define PI 3.1415926535897932384626
typedef long long int ll;
#define all(x) (x).begin() , (x).end()
#define fi first
#define se second
#define pq priority_queue
#define pb push_back
#define IOS ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define maX(a,b) ((a) > (b) ? (a) : (b))
#define miN(a,b) ((a) < (b) ? (a) : (b))
#define endl '\n'
std::vector<int> v[40005];
bool status[40005];
int ans;
int level[40005];
void bfs(int n)
{
    level[n] = 0;
    status[n] = true;
    queue<int>q;
    q.push(n);
    while(!q.empty())
    {
        int temp = q.front();
        q.pop();
        for(auto i:v[temp])
        {
            if(status[i] == false)
            {
                q.push(i);
                status[i] = true;
                level[i] = level[temp]+1;
            } 
        }
    }
}
int main()
{
    IOS;
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    memset(status,false,sizeof(status));
    memset(level,0,sizeof(level));
    ans=1000000;
    for(int i = 1;i < 40005;i++)
    {
        int a = i-1;
        int b = 2*i;
        if(a>0)
        {
            v[i].pb(a);
        }
        if(b < 40005)
        {
            v[i].pb(b);
        }
    }
    int n,m;
    cin >> n >> m;
    int count = 0;
    bfs(n);
    cout << level[m] << endl;
    return 0;
}