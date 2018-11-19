#include <bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define speed std::ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
//#define int long long

using namespace std;
int a[100005][5];
set<int> s;

int k;


int main()
{
    speed
    ///freopen("input.txt","r",stdin);
    int n;
    cin>>n>>k;
    for(int i=0; i<n; i++)
    {
        int num=0;
        for(int j=0; j<k; j++)
        {
            cin>>a[i][j];
            num=num*2+a[i][j];

        }
        //cout<<num<<endl;
        s.insert(num);
    }
    for(int i=0; i<n; i++)
    {
        int fl=1;
        for(int j=0; j<k; j++)
        {
            if(a[i][j]>0)
                fl=0;
        }
        if(fl)
        {
            cout<<"YES";
            return 0;
        }

    }
    for(int j=0; j<k; j++)
    {
        int fl=1;
        for(int i=0; i<n; i++)
        {
            if(a[i][j]==0)
                fl=0;
        }
        if(fl)
        {
            cout<<"NO";
            return 0;
        }
    }
    vector<int> v;
    for(auto it=s.begin(); it!=s.end(); it++)
    {
        //cout<<(*it)<<endl;
        v.pb(*it);
    }

    for(int i=0; i<v.size(); i++)
    {
        for(int j=i+1; j<v.size(); j++)
        {
            //cout<<v[i]<<" "<<v[j]<<endl;

            if((v[i]&v[j])==0)
            {
                cout<<"YES";
                return 0;
            }
        }
    }

    cout<<"NO";
    return 0;
}
