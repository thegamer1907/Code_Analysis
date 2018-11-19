#include <bits/stdc++.h>
#define pb push_back
#define all(a) a.begin(), a.end()
#define sz(a) (int)a.size()
#define x first
#define y second
#define debug(...)cout<<"["<<#__VA_ARGS__<<": "<<__VA_ARGS__<<"]\n"
using namespace std;
typedef long long ll;
typedef long double ld;
typedef pair<int, int>pii;
const int maxn=1e5+100;
const int mod=1e9+7;
struct data
{
    string st, e;
    set<string>have[10];
    data() {}
} arr[210];
int n, m;
int main()
{
    ios_base::sync_with_stdio(false), cin.tie(0);
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        string s;
        cin>>s;
        for(int j=0; j<sz(s); j++)
        {
            string aa;
            for(int dig=0; dig<9; dig++)
            {
                if(j+dig >= sz(s))break;
                aa+=s[j+dig];
                arr[i].have[dig+1].insert(aa);
            }
        }
        string a=s, b=s;
        if(sz(s) > 9)a=s.substr(0, 9), b=s.substr(sz(s)-9, 9);
        arr[i].st=a, arr[i].e=b;
    }
    cin>>m;
    for(int id=n+1; id<=n+m; id++)
    {
        int i, j;
        cin>>i>>j;
        for(int len=1; len<10; len++)
        {
            for(string aa : arr[i].have[len])
                arr[id].have[len].insert(aa);
            for(string aa : arr[j].have[len])
                arr[id].have[len].insert(aa);
        }
        string s=arr[i].e+arr[j].st;
        for(int pos=0; pos<sz(s); pos++)
        {
            string aa;
            for(int dig=0; dig<9; dig++)
            {
                if(pos+dig >= sz(s))break;
                aa+=s[pos+dig];
                arr[id].have[dig+1].insert(aa);
            }
        }
        string a=arr[i].st+arr[j].st, b=arr[i].e+arr[j].e;
        arr[id].st=a;
        if(sz(a) > 9)arr[id].st=a.substr(0, 9);
        arr[id].e=b;
        if(sz(b) > 9)arr[id].e=b.substr(sz(b)-9, 9);
        int ans=0;
        for(int len=1; len<10; len++)
        {
            if(sz(arr[id].have[len]) == (1<<len))
                ++ans;
        }
        cout<<ans<<"\n";
    }
    return 0;
}
