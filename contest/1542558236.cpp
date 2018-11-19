#include <bits/stdc++.h>
using namespace std;
typedef long long       ll;
typedef pair<int,int>   pii;
typedef vector<int>     vi;
typedef long double     ld;
#define MOD         1000000007
#define pb          push_back
#define all(a)      (a).begin(),(a).end()
#define F           first
#define S           second
#define endl        '\n'
#define PI          3.14159265359d
#define sz(x)       (int)x.size()
bool hand[100];
int main()
{
    //std::ios::sync_with_stdio(false);
    //cin.tie(0);
    //cout.tie(0);
    int h,m,s,t1,t2,i;
    cin>>h>>m>>s>>t1>>t2;
    t1=(t1*5)%60;
    t2=(t2*5)%60;
    h=(h*5)%60;
    hand[h]=hand[m]=hand[s]=true;
    if(t1>t2)
        swap(t1,t2);
    for(i=t1;i<t2;i++)
        if(hand[i])
            break;
    if(i==t2)
    {
        cout<<"YES";
        return 0;
    }
    for(i=t2;i!=t1;i=(i+1)%60)
        if(hand[i])
            break;
    if(i==t1)
    {
        cout<<"YES";
        return 0;
    }
    cout<<"NO";
    return 0;
}
