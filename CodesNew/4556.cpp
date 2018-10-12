#include<bits/stdc++.h>
using namespace std;

#define ll                  long long int
#define llu                 long long unsigned
#define ld                  long double
#define fast                ios_base::sync_with_stdio(0);cin.tie(0);
#define endl                "\n"
#define pb                  push_back
#define bp                  pop_back
#define pf                  push_front
#define fp                  pop_front
#define pp                  pop_up
#define mp                  make_pair
#define min3(a,b,c)         min(a,min(b,c))
#define max3(a,b,c)         max(a,max(b,c))
#define min4(a,b,c,d)       min(min(a,b),min(c,d))
#define max4(a,b,c,d)       max(max(a,b),max(c,d))
#define max5(a,b,c,d,e)     max(max3(a,b,c),max(d,e))
#define min5(a,b,c,d,e)     min(min3(a,b,c),min(d,e))

int main()
{
    fast;
    ll n,i,temp,counter=0;
    priority_queue< ll > p,q;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>temp;
        p.push(temp);
        q.push(temp);
    }
    while(q.size()!=0)
    {
        if(p.top()>=q.top()*2)
        {
            p.pop();
            counter++;
        }
        q.pop();
    }
    cout<<max(n-counter,(n+1)/2);
    return 0;
}
