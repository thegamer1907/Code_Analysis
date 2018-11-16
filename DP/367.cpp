#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    priority_queue<int>boys,girls;
    int x;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        boys.push(x);
    }
    int m;
    cin>>m;
    for(int i=0;i<m;i++)
    {
        cin>>x;
        girls.push(x);
    }
    int ans=0;
    while(!boys.empty() && !girls.empty())
    {
        int b=boys.top();
        int g=girls.top();
        //cout<<b<<" "<<g<<endl;
        if(abs(b-g)<=1)
        {
            boys.pop();
            girls.pop();
            ans++;
        }
        else if(b>g)
        {
            boys.pop();
        }
        else
        {
            girls.pop();
        }
    }
    cout<<ans<<endl;
	return 0;
}