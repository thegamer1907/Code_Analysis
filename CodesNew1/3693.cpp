#include <bits/stdc++.h>
using namespace std;
int main()
{
   ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n , m, num, mx=-1, smallest , mn = -1;
    cin>>n>>m;
    priority_queue<int>pq;
    for(int i=0;i<n;i++)
    {
        cin>>num;
        mx = max(mx,num);
        pq.push(-num);
    }
    for(int i=0;i<m;i++)
    {
        smallest = -pq.top();
        pq.pop();
        smallest++;
        pq.push(-smallest);
    }
    while(pq.size())
    {
        mn = max (mn , -pq.top());
        pq.pop();
    }
    cout<<mn<<" "<<mx+m<<endl;
  return 0;
}
