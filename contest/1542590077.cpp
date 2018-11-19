#include<bits/stdc++.h>
#define pi                  acos(-1)
#define READ                freopen("in.txt", "r", stdin)
#define WRITE               freopen("out.txt", "w", stdout)
#define INF                 9000000000000000000
#define dist(ax,ay,bx,by)   ((ax-bx)*(ax-bx)+(ay-by)*(ay-by))
#define mod                  1000000007
#define gcd(a,b)            __gcd(a,b)
#define lcm(a,b)            (a*b)/__gcd(a,b)
#define m_p(a,b)            make_pair(a,b)
#define pb                  push_back

typedef long long lli;
using namespace std;



int main()
{
    vector<string>str;
    string giv;
    cin>>giv;
    lli n;
    cin>>n;

    bool ans= false;

    for(lli i=0; i<n; i++)
    {
        string temp;
        cin>>temp;
        str.push_back(temp);

        if(temp==giv) ans=true;
    }

    bool one=false;
    bool two=false;

    vector<lli>cnt1;
    vector<lli>cnt2;

    for(lli i=0; i<str.size(); i++)
    {
        if(str[i][0]==giv[1]) cnt1.push_back(i);
        if(str[i][1]==giv[0]) cnt2.push_back(i);
    }

    if(cnt1.size() && cnt2.size()) ans=true;


    if(ans) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

    return 0;
}
