#include<bits/stdc++.h>
using namespace std;
#define MOD 1000000007
#define pb push_back
#define X first
#define Y second
typedef long long ll;
typedef pair<int,int> p;
#define vi vector<int>
#define mem(x,y) memset(x,y,sizeof(x))
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    //freopen ("input.txt","r",stdin);
    //freopen ("output.txt","w",stdout);
    int t,i,j;
    double h,m,s,t1,t2;
    cin>>h>>m>>s>>t1>>t2;
    if(t1==t2)
    {
        cout<<"YES";
        return 0;
    }
    if(h==12)
        h=0;
    h*=5;
    m+=s/60;
    h+=m/60;
    if(t1==12)
        t1=0;
    if(t2==12)
        t2=0;
    t1*=5;
    t2*=5;
    if(t1>t2)
        swap(t1,t2);
    if((h<=t1 || h>=t2) && (m<=t1 || m>=t2) && (s<=t1 || s>=t2))
    {
        cout<<"YES";
        return 0;
    }
    if((h>=t1 && h<=t2) && (m>=t1 && m<=t2) && (s>=t1 && s<=t2))
    {
        cout<<"YES";
        return 0;
    }
    cout<<"NO";
}
