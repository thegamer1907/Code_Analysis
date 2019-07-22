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
    vector<long long> a((int)m);
    for(int i=0;i<m;++i)
        cin>>a[i];
    int curr=0;
    while(curr<m)
    {
        long long elem=a[curr];
        int cnt=curr;
        while(curr<a.size() && (elem-cnt-1)/k==(a[curr]-cnt-1)/k)
            ++curr;
        ++ans;
    }
    cout<<ans;
    return 0;
}