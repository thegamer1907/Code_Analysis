/**
    http://codeforces.com/problemset/problem/1042/A
*/
#include <bits/stdc++.h>

using namespace std;
int Max = 0;

int main()
{
    int n, m;
    cin >> n >> m;
    priority_queue <int, vector <int> , greater<int>> pq;

    while(n--)
    {
        int x;
        cin >> x;
        if(x > Max)
            Max = x;
        pq.push(x);
    }
    Max += m;

    while(m--)
    {
        int x = pq.top();
        pq.pop();
        pq.push(x+1);
    }

    int Min;
    while(!pq.empty())
    {
        Min = pq.top();
        pq.pop();
    }

    cout <<Min << " " <<Max;

    return 0;
}
