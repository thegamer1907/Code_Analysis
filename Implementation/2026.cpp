#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define F first
#define S second
#define boost ios_base::sync_with_stdio(false);cin.tie(0); cout.tie(0)
using namespace std;
const int N=1e7+1;
int main()
{
    boost;
    //freopen("in.txt","r",stdin);
    int n;
    cin>>n;
    int x=0,y=0,z=0;
    for(int i=0;i<n;i++)
    {
        int a,b,c;
        cin>>a>>b>>c;
        x+=a;
        y+=b;
        z+=c;
    }
    if(x==0&&y==0&&z==0)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
    return 0;
}
