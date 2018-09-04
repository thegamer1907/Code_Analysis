#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define XsliferX ios::sync_with_stdio(0),ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
int dx[9]= {1,-1,0,0,1,-1,1,-1,0},dy[9]= {0,0,1,-1,1,-1,-1,1,0};
int n,k;
string s;
int max_len(char x)
{
    int l=0,r=0,mx=1,a=0;
    while(r<n)
    {
        if(s[r]!=x)a++;
        while(l<=r&&a>k)
        {
            if(s[l]!=x)a--;
            l++;
        }
        if(l<=r)
        mx=max(mx,r-l+1);
        r++;
    }
    return mx;
}
int main()
{
    XsliferX
    cin>>n>>k>>s;
    cout<<max(max_len('a'),max_len('b'));
    return 0;
}
//freopen("output.txt","w",stdout);
