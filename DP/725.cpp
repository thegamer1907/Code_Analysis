#include <bits/stdc++.h>

using namespace std;

//shoumo

#define LL long long
#define PI 2*acos(0.0)
#define INF INT_MAX
#define MOD 1000000007

int main()
{
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int i,l,r,m;
    string s;
    cin>>s;
    vector <int> v;
    v.push_back(0);
    for(i=0;i+1<s.size();i++)
    {
        if(s[i]==s[i+1])
        {
            v.push_back(v[i]+1);
        }
        else
        {
            v.push_back(v[i]);
        }
    }
    /*for(i=0;i<v.size();i++)
        cout<<i<<" "<<v[i]<<"\n";*/
    cin>>m;
    for(i=0;i<m;i++)
    {
        cin>>l>>r;
        cout<<v[r-1]-v[l-1]<<"\n";
    }
    return 0;
}
