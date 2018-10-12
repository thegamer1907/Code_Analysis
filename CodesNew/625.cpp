#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define ll long long
const int MX=2e5;
int N, M, k;
struct node
{
    int to[27];
    bool isleaf;
    node(){isleaf=0; memset(to, -1, sizeof to);}
};
vector<node> T;
void add(string s)
{
    int cur=0;
    for(int i=0;i<s.size();i++)
    {
        int c=s[i]-'a';
        if(T[cur].to[c] == -1) {
            T[cur].to[c]=(int)T.size();
            T.push_back(node());
        }
        cur=T[cur].to[c];
    }
    T[cur].isleaf=true;
}
int find(string s)
{
    int cur=0;
    for(int i=0;i<s.size();i++)
    {
        int c=s[i]-'a';
        if(T[cur].to[c] == -1) return 0;
        cur=T[cur].to[c];
    }
    return T[cur].isleaf;
}
char ss[555];
int main()
{
    scanf("%d%d", &N, &M);
    T.push_back(node());
    for(int i=0;i<N;i++)
    {
        scanf("%s", ss);
        string s=ss;
        add(s);
    }
    int common=0;
    for(int i =0;i<M;i++)
    {
        scanf("%s", ss);
        string s=ss;
        if(find(s)) ++common;
    }
    N-=common;
    M-=common;
    if(N > M)
    {
        cout<<"YES\n";
    }
    else if(N < M)
    {
        cout<<"NO\n";
    }
    else
    {
        if(common&1) cout<<"YES\n";
        else cout<<"NO\n";
    }
}
