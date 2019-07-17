#include <bits/stdc++.h>
using namespace std;
#define long long long int
int main()
{
    long n,m,k;
    cin>>n>>m>>k;
    deque <long> dq;
    for(int i=0;i<m;i++)
    {
        long q;
        cin>>q;
        dq.push_back(q);
    }
    long cnt=0,tr=k;
    long track=0,w=0;
    while(!dq.empty())
    {
        track+=w;
        w=0;
        while(1)
        {
            long x=dq.front()-=track;
            if(x>k)
            {
                dq.front()+=track;
                break;
            }
            dq.pop_front();
            w++;
            if(dq.empty()) break;
        }
        if(w==0)
        {
            long r=dq.front()-track;
            long t=r/tr;
            k=tr*t;
        }
        else cnt++;
    }
    cout<<cnt;
    return 0;
}