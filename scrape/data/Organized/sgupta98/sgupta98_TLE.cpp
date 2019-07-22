#include<iostream>
#include<vector>
#include<cstring>
#include<map>
#include<set>
#include<iomanip>
#include<string>
#include<algorithm>
#include<cmath>
using namespace std;
#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define trace1(x)                cerr<<#x<<": "<<x<<endl;
#define trace2(x, y)             cerr<<#x<<": "<<x<<" | "<<#y<<": "<<y<<endl;
#define trace3(x, y, z)          cerr<<#x<<":" <<x<<" | "<<#y<<": "<<y<<" | "<<#z<<": "<<z<<endl;
#define trace4(a, b, c, d)       cerr<<#a<<": "<<a<<" | "<<#b<<": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<endl;
#define trace5(a, b, c, d, e)    cerr<<#a<<": "<<a<<" | "<<#b<<": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<" | "<<#e<< ": "<<e<<endl;
#define trace6(a, b, c, d, e, f) cerr<<#a<<": "<<a<<" | "<<#b<<": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<" | "<<#e<< ": "<<e<<" | "<<#f<<": "<<f<<endl;
int main()
{
    long long n,k,m,ans=0,nop=1;
    cin>>n>>m>>k;
    vector<int> a((int)m);
    for(int i=0;i<m;++i)
        cin>>a[i];
    int cur=0,temp=3;
    while(cur<a.size())
    {
        if(a[cur]-cur<=nop*k)
        {
            while(cur<a.size() && a[cur]<=nop*k)
                ++cur;
            ++ans;
        }
        else
            nop=ceil((double)(a[cur]-cur)/k);
    }
    cout<<ans;
    return 0;
}