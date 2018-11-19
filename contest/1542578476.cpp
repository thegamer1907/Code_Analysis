#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int INF = 1e9;


inline int read(){int ra,fh;char rx;rx=getchar(),ra=0,fh=1;
while((rx<'0'||rx>'9')&&rx!='-')rx=getchar();if(rx=='-')
fh=-1,rx=getchar();while(rx>='0'&&rx<='9')ra*=10,ra+=rx-48,
rx=getchar();return ra*fh;}


int dp[100005][(1<<4)];
int n;
int a[100005][4];
int m;
vector<int> b;
int main()
{
//    freopen("data.txt","r",stdin);
    ios_base::sync_with_stdio(false);
    cin >> n>>m;

    for(int i=0;i<n;i++)
    {
        int tp=0;
        for(int j=0;j<m;j++)
        {
            cin >> a[i][j];
            if(a[i][j])
                tp += (1<<j);
        }
        b.push_back(tp);
    }
    int maxx = (1<<m);

    if(n==1)
    {
        int ct =0;
        for(int i=0;i<m;i++)
        {
            ct += a[0][i];
        }
        if(ct==0)
        {
            cout <<"YES"<<endl;
        }
        else
        {
            cout << "NO"<<endl;
        }
        return 0;
    }

    sort(b.begin(),b.end());
    for(int i=0;i<n;i++)
    {
        for(int j=b[i];j<maxx;j++)
        {
            int f= 0;
            for(int k=0;k<m;k++)
            {
                if( (  ((b[i]>>k)&1)  ==1 )  && ( ((j>>k)&1)  ==0 ) )
                {
                    f=1;
                    break;
                }
            }
            if(f) continue;

            int t1= j-b[i];

            if( binary_search(b.begin()+i+1,b.end(),t1) )
            {
//                cout << b[i]<<" "<< t1<<endl;
                cout <<"YES"<<endl;
                return 0;
            }
        }
    }
    cout <<"NO"<<endl;

    return 0;
}



