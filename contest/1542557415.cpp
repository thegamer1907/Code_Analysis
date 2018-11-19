#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define MOD 1000000007
#define OO 1e6;
void File()
{
    freopen("in.txt","r",stdin);
    freopen("out.txt","w",stdout);
}
void IO()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
}
int n,k;
vector<string>comb;
void rec(int i,string s="");
bool is_valid(string x,string y);
int main()
{
    scanf("%d%d",&n,&k);
    rec(0,"");
    vector<string>vec;
    for(int i=0;i<n;++i)
    {
        string s="";
        for(int j=0;j<k;++j)
        {
            int d;
            scanf("%d",&d);
            if(d)s+='1';
            else s+='0';
        }
        vec.push_back(s);
    }
    sort(vec.begin(),vec.end());
    for(int i=0;i<n;++i)
    {
        for(int j=0;j<comb.size();++j)
        {
            if(is_valid(vec[i],comb[j]))
            {
                vector<string>::iterator it=lower_bound(vec.begin(),vec.end(),comb[j]);
                if(*it==comb[j]){puts("YES");return 0;}
            }
        }
    }
    puts("NO");
    return 0;
}
void rec(int i,string s)
{
    if(i==k)
    {
        comb.push_back(s);
        return;
    }
    for(int j='0';j<='1';++j)
    {
        s.push_back(j);
        rec(i+1,s);
        s.pop_back();
    }
}
bool is_valid(string x,string y)
{
    for(int i=0;i<k;++i)
    {
        if(x[i]==y[i]&&x[i]=='1')return 0;
    }
    return 1;
}
