#include<bits/stdc++.h>
using namespace std;

const int N=1e5+5;

vector<int> ok[N];
int d[5];
int t[7];
map< pair<int,int> ,int> a={{{1,2},1},{{1,3},2},{{1,4},3},{{2,3},4},{{2,4},5},{{3,4},6}};
void add(int i)
{
    if(ok[i][1]<ok[i][0])
        swap(ok[i][1],ok[i][0]);
    t[a[make_pair(ok[i][0],ok[i][1])]]++;
}

int main()
{
    ios_base::sync_with_stdio(0);
    int n,k;
    cin >> n >> k;
    int mx=0;
    for(int i=1;i<=n;i++)
        for(int j=1;j<=k;j++)
        {
            int x;
            cin >> x;
            if(x==0)
            {
                ok[i].push_back(j);
                mx=max(mx,int(ok[i].size()));
                d[j]++;
            }
        }
    for(int i=1;i<=k;i++)
        if(!d[i])
        {
            cout<<"NO";
            return 0;
        }
    if(mx==k)
    {
        cout<<"YES";
        return 0;
    }
    if(k==2)
        cout<<"YES";
    if(k==3)
    {
        if(mx==2)
            cout<<"YES";
        else
            cout<<"NO";
    }
    if(k==4)
    {
        if(mx==3)
            cout<<"YES";
        if(mx==2)
        {
            for(int i=1;i<=n;i++)
                if(ok[i].size()==2)
                    add(i);
            if((t[1] && t[6]) || (t[2] && t[5]) || (t[3] && t[4]))   
                cout<<"YES";
            else
                cout<<"NO";
        }
        if(mx==1)
            cout<<"NO";
    }
    return 0;
}
