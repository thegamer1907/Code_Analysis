#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,t;
    cin>>n>>t;
    vector<int>a(n-1);
    for(int i=0;i<n-1;i++)cin>>a[i];
    queue<int>q;
    q.push(1);
    int c=0;
    while(!q.empty())
    {
        int v=q.front();
        q.pop();
        if(v==t){c=1; break;}
        else if(v>t)break;
        q.push(v+a[v-1]);
    }
            if(c==1)
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;
}
