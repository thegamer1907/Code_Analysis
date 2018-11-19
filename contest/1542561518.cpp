#include <bits/stdc++.h>
using namespace std;
#define ull unsigned ll
#define ll long long

#define pi 3.1415926535897
#define mm(o,k) memset(o,k,sizeof o)
#define LB(V1,O1) lower_bound(V1.begin(),V1.end(),O1)-V1.begin()
#define UB(V2,O2) upper_bound(V2.begin(),V2.end(),O2)-V2.begin()
#define _f .first
#define _s .second

string to_str( ll Number )
{
    stringstream ss;
    ss << Number;
    return ss.str();
}

int to_int(string str)
{
    int val;
    stringstream stream;
    stream << str;
    stream >> val;
    return val;
}

ll n,x,y,z,k,c,sum,t;
//vector<pair<int,int> >v;
//int arr[100005],ar[100005];
//ll k1,k2,k3,k4,k5,k6,k7;
//for(int i=0;i<n;i++)
int main()
{
    ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    //freopen("azerah.in","r",stdin);
    //freopen("azerah.out", "w", stdout);
    string s1,s2,s3;
    cin>>s1;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>s2;
        s3.push_back(s2[1]);
        s3.push_back(s2[0]);
        if(s1==s2)
        {
            cout<<"YES"<<endl;
            return 0;
        }
        if(s1==s3)
        {
            cout<<"YES"<<endl;
            return 0;
        }
        s3.clear();
        if(s1[0]==s2[1])k++;
        if(s1[1]==s2[0])c++;
        if(k && c)
        {
            cout<<"YES"<<endl;
            return 0;
        }
    }
    cout<<"NO"<<endl;



    return 0;
}

