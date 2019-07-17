#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
#define pb push_back
#define mp make_pair
queue < pair <ll,ll> > q;
//priority_queue<pair<dd,ll>, vector<pair<dd,ll> >, greater<pair<dd,ll> > > pq;
ll visited[105][105];
ll deg[1000006];
ll cnt[200005];
deque<ll>dq;
ll n,m;
void mini(string& s, string t)             //minimun of strings
{
    if(s.size()==t.size())
    {
        s=min(s,t);
    }
    else if(s.size()>t.size())
    {
        s=t;
    }
    else
        s=s;
}

/*bool check()
{
    bool ff=true;
    ll remx,remy;
    remx=n%2;
    remy=m%2;
    if(remx==1&&remy==1)
    {
        if(visited[n/2][m/2]==0)
            ff=false;
    }
    else if(remx==0&&remy==1)
    {
        if(visited[n/2][m/2]==0||visited[n/2-1][m/2]==0)
            ff=false;
    }
    else if(remx==1&&remy==0)
    {
        if(visited[n/2][m/2]==0||visited[n/2][m/2-1]==0)
            ff=false;
    }
    else if(remx==0&&remy==0)
    {
        if(visited[n/2][m/2]==0||visited[n/2-1][m/2]==0||visited[n/2][m/2-1]==0||visited[n/2-1][m/2-1]==0)
            ff=false;
        
    }
    return ff;
}
ll bfs(ll x, ll y)
{
    q.push({x,y});
    ll i,j;
    for(i=0;i<105;i++)
        {
            for(j=0;j<105;j++)
            {
                visited[i][j]=0;
            }
        }
    visited[x][y]=1;
    while(!q.empty())
    {
        ll b,c;
        b=q.front().first;
        c=q.front().second;
        q.pop();
        if(b-1>=0&&a[b-1][c]!=-1&&visited[b-1][c]==0)
        {
            visited[b-1][c]=visited[b][c]+1;
            q.push({b-1,c});
        }
        if(b+1<n&&a[b+1][c]!=-1&&visited[b+1][c]==0)
        {
            visited[b+1][c]=visited[b][c]+1;
            q.push({b+1,c});
        }
        if(c-1>=0&&a[b][c-1]!=-1&&visited[b][c-1]==0)
        {
            visited[b][c-1]=visited[b][c]+1;
            q.push({b,c-1});
        }
        if(c+1<m&&a[b][c+1]!=-1&&visited[b][c+1]==0)
        {
            visited[b][c+1]=visited[b][c]+1;
            q.push({b,c+1});
        }
        if(check()==true)
        {
            break;
        }
    }
    ll mn=1e9;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(visited[i][j]==0)
            {
                visited[i][j]=1e9;
            }
        }
    }
    ll remx,remy;
    remx=n%2;
    remy=m%2;
    if(remx==1&&remy==1)
    {
        mn=min(mn,visited[n/2][m/2]);
    }
    else if(remx==0&&remy==1)
    {
        mn=min(mn,min(visited[n/2][m/2],visited[n/2-1][m/2]));
    }
    else if(remx==1&&remy==0)
    {
        mn=min(mn,min(visited[n/2][m/2],visited[n/2][m/2-1]));
    }
    else if(remx==0&&remy==0)
    {
        mn=min(mn,min(visited[n/2-1][m/2-1],min(visited[n/2][m/2],min(visited[n/2][m/2-1],visited[n/2-1][m/2]))));
    }
    return mn;
    
}*/

ll power(ll x, unsigned ll y, ll p) 
{ 
    int res = 1;      // Initialize result 
  
    x = x % p;  // Update x if it is more than or  
                // equal to p 
  
    while (y > 0) 
    { 
        // If y is odd, multiply x with result 
        if (y & 1) 
            res = (res*x) % p; 
  
        // y must be even now 
        y = y>>1; // y = y/2 
        x = (x*x) % p;   
    } 
    return res; 
} 

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll n,m,k,i,j,l;
    cin>>n>>m>>k;
    ll a[m];
    queue<ll>st;
    for(i=0;i<m;i++)
    {
        cin>>a[i];
        st.push(a[i]);
    }
   /* for(i=m-1;i>=0;i--)
    {
        st.push(a[i]);
    }*/
    ll ans=0;
    ll c=0;
    ll kk=k;
    while(!st.empty())
    {
        ll d=st.front();
        if(c!=0&&d>k)
        {
            ans++;
            k=k+c;
            c=0;
            continue;
        }
        if(d<=k)
        {
            st.pop();
            c=c+1;
            continue;
        }
        k=k+kk;
        if(d-k>0)
        {
            ll rem=(d-k)/kk;
            k=k+((d-k)%kk==0)?((rem+1)*kk):(rem*k);
        }
    }
    if(c!=0)
        ans++;
    cout<<ans;
    return 0;
}