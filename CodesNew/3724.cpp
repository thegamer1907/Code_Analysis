#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    vector<int>benches(n);
    int ma=0;
    for(int i=0;i<n;i++)
    {
        cin>>benches[i];
        ma=max(ma,benches[i]);
    }
    priority_queue<int,vector<int>,greater<int>>pq(benches.begin(),benches.end());
    int i=0;
    int x2=ma;
    while(i<m)
    {
        int x=pq.top();
        pq.pop();
        pq.push(x+1);
        x2=max(x2,x+1);
        i++;
    }

    cout <<x2<<" "<<(ma+m);
    return 0;
}