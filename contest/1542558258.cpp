#include <bits/stdc++.h>
using namespace std;
typedef long long       ll;
typedef pair<int,int>   pii;
typedef vector<int>     vi;
typedef long double     ld;
#define MOD         1000000007
#define pb          push_back
#define all(a)      (a).begin(),(a).end()
#define F           first
#define S           second
#define endl        '\n'
#define PI          3.14159265359d
#define sz(x)       (int)x.size()
string A[105];
int start[30];
int main()
{
    //std::ios::sync_with_stdio(false);
    //cin.tie(0);
    //cout.tie(0);
    int n,i;
    bool flag=false;
    string s;
    cin>>s>>n;
    for(i=0;i<n;i++)
    {
        cin>>A[i];
        if(A[i]==s)
            flag=true;
        start[A[i][0]-'a']++;
    }
    for(i=0;i<n;i++)
    {
        if(A[i][1]==s[0] && start[s[1]-'a'])
            flag=true;
    }
    if(flag)
        cout<<"YES";
    else
        cout<<"NO";
    return 0;
}
