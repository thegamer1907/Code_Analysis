#include<bits/stdc++.h>
using namespace std;

priority_queue<int> p;
priority_queue<int , vector<int> , greater<int> > q;

int main()
{
    int n;
    cin>>n;
    int m;
    cin>>m;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        p.push(x);
        q.push(x);
    }
    while(m--)
    {
        int t=p.top();
        p.pop();
        p.push(t+1);
        t=q.top();
        q.pop();
        q.push(t+1);
    }
    while(q.size()>1)
        q.pop();
    cout<<q.top()<<" "<<p.top()<<endl;
}
