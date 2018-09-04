#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define fori(it, x) for (__typeof((x).begin()) it = (x).begin(); it != (x).end(); it++)
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin>>s;
    ll nb,ns,nc,pb,ps,pc,r,cb=0,cs=0,cc=0;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='B')
            cb++;
        else if(s[i]=='S')
            cs++;
        else
            cc++;
    }
    cin>>nb>>ns>>nc;
    cin>>pb>>ps>>pc;
    cin>>r;
    ll beg=0,end=10e12;
    ll cost;
    while(beg<end)
    {
        ll mid=beg+(end-beg+1)/2;
        cost=max((ll)0,cb*mid-nb)*pb+max((ll)0,cs*mid-ns)*ps+max((ll)0,cc*mid-nc)*pc;
        if(cost==r)
        {
            cout<<mid<<endl;
            return 0;
        }
        else if(cost>r)
        {
            end=mid-1;
        }
        else
            beg=mid;
    }
    cout<<beg<<endl;
}
