#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define PI 3.1415926535897932384626
#define boost ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0)
#define MOD 1000000007
#define N 100101
int main() 
{
    boost;
    int n,m;
    cin>>n>>m;
    vector<string> s1;
    vector<string> s2;
    vector<string> s3;
    string s,t;
    set<string> x,y;
    for(int i=0;i<n;i++)
    {
        cin>>s;
        s1.pb(s);
        x.insert(s);
    }
    for(int i=0;i<m;i++)
    {
        cin>>t;
        s2.pb(t);
        y.insert(t);
    }
    sort(s1.begin(),s1.end());
    sort(s2.begin(),s2.end());
    auto it=set_intersection(s1.begin(),s1.end(),s2.begin(),s2.end(),back_inserter(s3));
    int f=0;
    if(s3.size()%2==0)
    f=1;
    if(x.size()==y.size())
    {
          if(f==0)
          cout<<"YES"<<endl;
          else
          cout<<"NO"<<endl;
    }
    else
    {
          if(x.size()>y.size())
          cout<<"YES"<<endl;
          else
          cout<<"NO"<<endl;
    }
}