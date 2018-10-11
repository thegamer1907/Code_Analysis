#include<bits/stdc++.h>
#define ull unsigned long long
#define ll long long
#define pb push_back
#define F first
#define S second
#define mk make_pair
#define inf INT_MAX
#define mini INT_MIN
#define MOD 100000000
#define all(v) (v).begin(),(v).end()
#define pii pair<int ,int >
#define pll pair<long long int ,long long int>
#define mset(v,x) memset(v,x,sizeof(v))
#define MODSET(d) if ((d) >= MOD) d %= MOD;
#define inp(x) (scanf("%d",&x))
#define inp2(x,y) (scanf("%d%d",&x,&y))
#define inp3(x,y,z) (scanf("%d%d%d",&x,&y,&z))
#define inp4(x,y,z,w) (scanf("%d%d%d%d",&x,&y,&z,&w))
#define inpl(d) scanf("%lld",&d)
#define inpl2(a,b) scanf("%lld%lld",&a,&b)
#define inpl3(a,b,c) scanf("%lld%lld%lld",&a,&b,&c)
#define inpl4(a,b,c,d) scanf("%lld%lld%lld%lld",&a,&b,&c,&d)
using namespace std;
//int arr[100005];
//bool vis[100005];
//vector<int >ans;
//vector<int >v[100005];
set<string >st1,st2,st3;
set<string >::iterator it1,it2;
//map<int ,int >mp;
//map<int ,int >::iterator it;
//priority_queue<int, vector<int >, greater<int > >pq;
/********************************************* YOUR CODE GOES FROM HERE ************************************************/
int main()
{
    bool flag=false;
    string s;
    int n,m;
    inp2(n,m);
    for(int i=1;i<=n;i++)
    {
       cin>>s;
       st1.insert(s);
    }
    for(int i=1;i<=m;i++)
    {
        cin>>s;
        st2.insert(s);
    }
    while(true)
    {
        bool flag=false;
        if(st1.size()==0)
        {
            cout<<"NO";
            return 0;
        }
        if(st2.size()==0)
        {
            cout<<"YES";
            return 0;
        }
        for(it1=st1.begin();it1!=st1.end();it1++)
        {
            if(st2.find(*it1)!=st2.end()&&!flag)
            {
                st2.erase(*it1);
                flag=true;
            }
            else
              st3.insert(*it1);
        }
        st1=st3;
        st3.clear();
        if(!flag)
        {
            if(st1.size()>st2.size())
                cout<<"YES";
            else if(st2.size()>=st1.size())
                cout<<"NO";
            return 0;
        }
        flag=false;
        for(it2=st2.begin();it2!=st2.end();it2++)
        {
            if(st1.find(*it2)!=st1.end()&&!flag)
            {
                st1.erase(*it2);
                flag=true;
            }
            else
              st3.insert(*it2);
        }
        st2=st3;
        st3.clear();
        if(!flag)
        {
            if(st1.size()>=st2.size())
                cout<<"YES";
            else
                cout<<"NO";
            return 0;
        }
    }
}
