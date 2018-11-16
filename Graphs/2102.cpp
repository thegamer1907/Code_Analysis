#include <bits/stdc++.h>
#define ff first
#define ss second
#define pii pair < int , int  >
#define psi pair < string , int  >
#define pb(a) push_back(a)
#define mp(a,b) make_pair(a,b)
#define input freopen("input.txt","r",stdin)
#define output freopen("output.txt","w",stdout)
#define fast_input ios_base::sync_with_stdio(false);cin.tie(0)
#define FILL_1(a) memset(a,-1,sizeof(a))
#define FILL_0(a) memset(a,0,sizeof(a))

using namespace std;
typedef long long ll;
const ll inf= 1e9+7;
/// code starts here

int n,m;
int visited[100000];
int bfs()
{
    queue < pii > q;
    q.push(mp(n,0));
    visited[n]=1;
    while(!q.empty())
    {
        pii aux=q.front();
        q.pop();
        if(aux.ff==m)
            return aux.ss;
        if(aux.ff>m)
        {
            if(!visited[aux.ff-1])
            {
                visited[aux.ff-1]=1;
                q.push(mp(aux.ff-1,aux.ss+1));
            }
        }
        else
        {
            if(!visited[aux.ff*2])
            {
                visited[aux.ff*2]=1;
                q.push(mp(aux.ff*2,aux.ss+1));
            }
            if(aux.ff==1)
                continue;
            if(!visited[aux.ff-1])
            {
                visited[aux.ff-1]=1;
                q.push(mp(aux.ff-1,aux.ss+1));
            }
        }
    }
    return -1;
}

int main()
{

    cin>>n>>m;

    cout<<bfs()<<endl;
}
