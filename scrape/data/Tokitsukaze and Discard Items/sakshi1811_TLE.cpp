#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n,m,k,i;
    cin>>n>>m>>k;
    ll arr[m];
    for(i=0;i<m;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+m);
    deque<ll>queue;
    for(i=0;i<m;i++)
    {
        queue.push_back(arr[i]);
    }
	ll ans=0,x=0;
	ll ele=x,front,rear; 
    while(1)
    {
        if(queue.empty())
        break;
        int y;
        y=queue.front();
        y-=x;
        front=(((y-1)/k)*k) + 1;
        rear=min(front+k-1,n-x);
        ans++;
		ele=x;
        while(queue.front()-ele<=rear&&!(queue.empty()))
        {
            x++;
            queue.pop_front();
        }
    }
    cout<<ans<<endl;
    return 0;
}