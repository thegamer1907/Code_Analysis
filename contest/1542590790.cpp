#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define mp make_pair
#define f first
#define s second
#define INF 1e18
#define MOD 1000000007
#define pi pair<ll,ll>
#define sc(x) scanf("%lld",&x)
#define pf(x) printf("%lld\n",x)

char a[2];
char b[101][2];
bool mark[2];

int main(){
    
    
    cin>>a;
    int n;
    cin>>n;
    bool p=false;
    for(int i=0; i<n; i++)
    {
        cin>>b[i];
       
        if(a[0]==b[i][0] && a[1]==b[i][1])
        {

            p=true;
            break;
        }
        if(a[0]==b[i][1])
        {

            mark[1]=true;
        }
        if(a[1]==b[i][0])
        {

            mark[0]=true;
        }
        if(mark[0]==true && mark[1]==true)
        {
            // cout<<i<<" yes"<<endl;
            p=true;
            break;
        }
        
    }
    if(p==true)
        cout<<"YES"<<endl;
    else
    {
        cout<<"NO"<<endl;
    }

}