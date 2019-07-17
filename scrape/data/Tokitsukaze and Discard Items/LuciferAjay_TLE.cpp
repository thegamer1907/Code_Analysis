#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long int
#define IOS ios_base::sync_with_stdio(false); cin.tie(0);cout.tie(0);
int main()
{
    IOS
    ull n,m,k;
    cin>>n>>m>>k;
    queue<ull> q;
    ull a;
    for(int i=0;i<m;i++)
    {
        cin>>a;
        q.push(a);
    }
    ull l=k;
    ull ans=0,idx=1;
    while(!q.empty())
    {
        ull cnt=0;
        ull top=q.front();
        //cout<<top<<" "<<q.size()<<endl;
        if(top<=l)
        {
            while(!q.empty() && top<=l)
            {
                q.pop();
                if(!q.empty())
                top=q.front();
                cnt++;
            }
            l+=cnt;
            ans++;
        }
        else
            {
                ull c=l%k;
                l=k*(l/k+1);
                l+=c;
            }
    }
    cout<<ans<<endl;
    return(0);
}