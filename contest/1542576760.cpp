#include <bits/stdc++.h>
#define F first
#define S second
#define ll long long
#define pb push_back
#define mp make_pair
using namespace std;
const int MX=3*1e5+100;
const long long INF = 1e18;
int N, k;
int cnt[4];
map<string, int> mpp;
int ok=0;
string S[MX],  o;
vector<vector<char> >v;
vector <char> s;
void gen(int i)
{
    if(i == k)
    {
        v.push_back(s);
        return;
    }
    if(o[i] == '1')
    {
        s.pb('0');
        gen(i+1);
        s.pop_back();
    }
    else
    {
        s.pb('0');
        gen(i+1);
        s.pop_back();
        s.pb('1');
        gen(i+1);
        s.pop_back();
    }
}
bool ch()
{
    for(int i=0;i<v.size();i++)
    {
        string a;
        for(int j=0;j<v[i].size();++j)
            a+=v[i][j];
        if(mpp.find(a) != mpp.end()) return 1;
    }
    return 0;
}
int main()
{
    scanf("%d%d", &N, &k);
    for(int i=0;i<N;i++)
    {
        string s;
        for(int j=0;j<k;j++)
        {
            int x;
            scanf("%d", &x);
            S[i]+=x+'0';
        }
        mpp[S[i]]++;
    }
    bool ok=0;
    for(int i=0;i<N;i++)
    {
        o=S[i];
        s.clear();
        gen(0);
        if(ch())
        {
            ok=1;
            break;
        }
        v.clear();
    }
    if(!ok) cout<<"NO\n";
    else cout<<"YES\n";
    return 0;
}
