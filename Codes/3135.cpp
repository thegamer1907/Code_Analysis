#include<bits/stdc++.h>
#define li long long int
#define F first
#define S second
#define pb push_back
#define pf pop_front
#define falcon ios_base::sync_with_stdio();cin.tie(0);cout.tie(0);
using namespace std;
li gcd(li x, li y)
{
    li r,a=max(x,y),b=min(x,y);

    while(a%b != 0)
    {
        r=a%b;
        a=b;
        b=r;
    }
    return b;
}

int main()
{
    falcon
    li N,i,j,k,l; cin>>N;
    li mn=9999999999999999;
    vector<li> A(N);
    for(i=0;i<N;i++)
    {
        cin>>A[i]; mn=min(mn,A[i]);
    }
    for(i=0;i<N;i++)
    {
        A[i]-=mn;
    }
    li pos=mn%N;
    j=0;
    for(i=pos;true;i=(i+1)%N)
    {
        //cout<<j<<" "<<A[i]<<"*\n";
        if(j >= A[i])
            break;
        else
            j++;
    }
    i++;
    cout<<i;
    return 0;
}
